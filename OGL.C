// Windows Header Files
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include "OGL.h"

// My Header Files
#include "AshokaChakra.h"
#include "Tricolor.h"
//OpenGL Header Files
#include<gl/GL.h>

// Macros
#define WIN_WIDTH 800
#define WIN_HEIGHT 600

// Link With OpenGl Library
#pragma comment(lib, "OpenGL32.lib")
#pragma comment(lib, "winmm.lib")

// Global function declarations
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

// Global Variable Declaration
FILE* gpFile = NULL;

// Global Variations Declarations
HWND ghwnd = NULL;
BOOL gbActive = FALSE;
DWORD dwStyle = 0;
WINDOWPLACEMENT wpPrev = { sizeof(WINDOWPLACEMENT) };
BOOL gbFullscreen = FALSE;

//OpenGL Related Global Variations Declarations
HDC ghdc = NULL;
HGLRC ghrc = NULL;  //Handle to OpenGL Rensering Context

//Scaling Related Variables
float fObjX, fObjY, fObjZ;
float fScaleX = 5.0f, fScaleY = 5.0f, fScaleZ = 1;
float fAngle = 0.0f;


// Entry Point Function
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int iCmdShow)
{
	// Functions Declaratios
	int initialize(void);
	void uninitialize(void);
	void display(void);
	void update(void);

	// local variable declarations
	WNDCLASSEX wndclass;
	HWND hwnd;
	MSG msg;
	TCHAR szAppName[] = TEXT("AKWindow");
	int iResult = 0;



	// code
	gpFile = fopen("Log.txt", "w");
	if (gpFile == NULL)
	{
		MessageBox(NULL, TEXT("Log File Cannot Be Opened"), TEXT("Error"), MB_OK | MB_ICONERROR);
		exit(0);
	}
	fprintf(gpFile, "Program Started Successfully \n");

	// WNDCLASSEX initialization
	wndclass.cbSize = sizeof(WNDCLASSEX);
	wndclass.style = CS_HREDRAW | CS_VREDRAW | CS_OWNDC;
	wndclass.cbClsExtra = 0; 
	wndclass.cbWndExtra = 0;
	wndclass.lpfnWndProc = WndProc;
	wndclass.hInstance = hInstance;
	wndclass.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
	wndclass.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(MYICON));
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndclass.lpszClassName = szAppName;
	wndclass.lpszMenuName = NULL;
	wndclass.hIconSm = LoadIcon(hInstance, MAKEINTRESOURCE(MYICON));

	fprintf(gpFile, "Successfully Added Icon To The File \n");

	// REgister WNDCLASSEX
	RegisterClassEx(&wndclass);
	
	// 
	int XPos = GetSystemMetrics(0);
	int YPos = GetSystemMetrics(1);

	fprintf(gpFile, "Xpos is %d Ypos is %d\n", XPos, YPos);

	// Create window
	hwnd = CreateWindowEx(WS_EX_APPWINDOW,
		szAppName,
		TEXT("Akash Avinash Kakade"),
		WS_OVERLAPPEDWINDOW | WS_CLIPCHILDREN | WS_CLIPSIBLINGS | WS_VISIBLE,
		(XPos - WIN_WIDTH) / 2,
		(YPos - WIN_HEIGHT) / 2,
		WIN_WIDTH,
		WIN_HEIGHT,
		NULL,
		NULL,
		hInstance,
		NULL);

	ghwnd = hwnd;

	fprintf(gpFile, "Window Is Centered\n");

	// Initialization

	iResult = initialize();
	if (iResult != 0)
	{
		MessageBox(hwnd, TEXT("initialize() Failed"), TEXT("Error"), MB_OK | MB_ICONERROR);
		DestroyWindow(hwnd);
	}

	// Show the window
	ShowWindow(hwnd, iCmdShow);

	SetForegroundWindow(hwnd); // Top in z Order
	SetFocus(hwnd);

	BOOL bDone = FALSE;

	while (bDone == FALSE)
	{
		if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
		{
			if (msg.message == WM_QUIT)
				bDone = TRUE;
			else
			{
				TranslateMessage(&msg);
				DispatchMessage(&msg);
			}
		}
		else
		{
			if (gbActive == TRUE)
			{
				// Render
				display();

				// Update
				update();
			}
		}
	}
	uninitialize();
	return((int)msg.wParam);

}

// Callback Function
LRESULT CALLBACK WndProc(HWND hwnd,
	UINT iMsg,
	WPARAM wParam,
	LPARAM lParam)
{
	// Function Declarations 
	void ToggleFullscreen(void);
	void resize(int, int);
	void uninitialize(void);

	// code
	switch (iMsg)
	{
	case WM_SETFOCUS:
		gbActive = TRUE;
		break;
	case WM_KILLFOCUS:
		gbActive = FALSE;
		break;
	case WM_SIZE:
		resize(LOWORD(lParam), HIWORD(lParam));
		break;
	case WM_ERASEBKGND:
		return(0);
	case WM_KEYDOWN:
		switch (LOWORD(wParam))
		{
		case VK_ESCAPE:
			fprintf(gpFile, "Program Ended Successfully by Pressing 'ESCAPE' Key \n");
			DestroyWindow(hwnd);
			break;

		case VK_RIGHT:
			fObjX = fObjX + 0.01;
			break;

		case VK_LEFT:
			fObjX = fObjX - 0.01;
			break;

		case VK_UP:
			fObjY = fObjY + 0.01;
			break;

		case VK_DOWN:
			fObjY = fObjY - 0.01;
			break;
		}
		break;
	case WM_CHAR:
		switch (LOWORD(wParam))
		{
		case 'F':
		case 'f':
			if (gbFullscreen == FALSE)
			{
				fprintf(gpFile, "You have pressed 'F' / 'f' to Fullscreen The Window ... Now you are in Fullscreen Mode \n");
				ToggleFullscreen();
				gbFullscreen = TRUE;
			}
			else
			{
				fprintf(gpFile, "You have pressed 'F' / 'f' to EXIT Fullscreen window ... Now you are not in Fullscreen mode \n");
				ToggleFullscreen();
				gbFullscreen = FALSE;
			}
			break;

		case '.':
			fScaleX = fScaleX + 0.01;
			break;

		case ',':
			fScaleX = fScaleX - 0.01;
			break;

		case '>':
			fScaleY = fScaleY + 0.01;
			break;

		case '<':
			fScaleY = fScaleY - 0.01;
			break;

		case 'r':
			fAngle = fAngle - 1.0;
			break;

		case 'R':
			fAngle = fAngle + 1.0;
			break;

		case 'p':
		case 'P':
			fprintf(gpFile, "X = %f, Y = %f, Z = %f\n SX = %f, SY = %f, SZ = %f \n", fObjX, fObjY, fObjZ, fScaleX, fScaleY, fScaleZ);
		}
		break;
	case WM_CLOSE:
		DestroyWindow(hwnd);
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		break;
	}
	return(DefWindowProc(hwnd, iMsg, wParam, lParam));
}

void ToggleFullscreen(void)
{
	MONITORINFO mi = { sizeof(MONITORINFO) };

	//code

	if (gbFullscreen == FALSE)
	{
		dwStyle = GetWindowLong(ghwnd, GWL_STYLE);
		if (dwStyle & WS_OVERLAPPEDWINDOW)
		{
			if (GetWindowPlacement(ghwnd, &wpPrev) && GetMonitorInfo(MonitorFromWindow(ghwnd, MONITORINFOF_PRIMARY), &mi))
			{
				SetWindowLong(ghwnd, GWL_STYLE, dwStyle & ~WS_OVERLAPPEDWINDOW);
				SetWindowPos(ghwnd, HWND_TOP, mi.rcMonitor.left, mi.rcMonitor.top, mi.rcMonitor.right - mi.rcMonitor.left, mi.rcMonitor.bottom - mi.rcMonitor.top, SWP_NOZORDER | SWP_FRAMECHANGED);
			}
			ShowCursor(FALSE);
			gbFullscreen = TRUE;
		}

	}
	else
	{
		SetWindowPlacement(ghwnd, &wpPrev);
		SetWindowLong(ghwnd, GWL_STYLE, dwStyle | WS_OVERLAPPEDWINDOW);
		SetWindowPos(ghwnd, HWND_TOP, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_NOOWNERZORDER | SWP_NOZORDER | SWP_FRAMECHANGED); // It has greater priority
		ShowCursor(TRUE);
		gbFullscreen = FALSE;
	}
}

int initialize(void)
{
	// Function Declarations
	void resize(int, int);

	//code

	// Define Pixel Format Descriptor
	PIXELFORMATDESCRIPTOR pfd;
	int iPixelFormatIndex = 0;
	ZeroMemory(&pfd, sizeof(PIXELFORMATDESCRIPTOR));

	pfd.nSize = sizeof(PIXELFORMATDESCRIPTOR); 
	pfd.nVersion = 1;
	pfd.dwFlags = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
	pfd.iPixelType = PFD_TYPE_RGBA;
	pfd.cColorBits = 32;
	pfd.cRedBits = 8;
	pfd.cGreenBits = 8;
	pfd.cColorBits = 8;
	pfd.cAlphaBits = 8;

	// Get The DC
	ghdc = GetDC(ghwnd);
	if (ghdc == NULL)
	{
		fprintf(gpFile, "Get DC() Failed \n");
		return(-1);
	}

	// 
	iPixelFormatIndex = ChoosePixelFormat(ghdc, &pfd);
	if (iPixelFormatIndex == 0)
	{
		fprintf(gpFile, "ChoosePixelFormat() Failed\n");
		return(-2);
	}

	//Set Obtained Pixel Format
	if (SetPixelFormat(ghdc, iPixelFormatIndex, &pfd) == FALSE)
	{
		fprintf(gpFile, "SetPixelFormat() Failed\n");
		return(-3);
	}

	// Create OpenGl Context from Device Context
	ghrc = wglCreateContext(ghdc);
	if (ghrc == NULL)
	{
		fprintf(gpFile, "wglCreateContext() Failed\n");
		return(-4);
	}

	// Make Rendering Context Current
	if (wglMakeCurrent(ghdc, ghrc) == FALSE)
	{
		fprintf(gpFile, "wglMakeCurrent() Failed\n");
		return(-5);
	}

	//Set The Clear Color Of Window to Blue. Here OpenGL Start
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	PlaySound("01.wav", NULL, SND_ASYNC | SND_LOOP);
	resize(WIN_WIDTH, WIN_HEIGHT);

	return(0);
}

void resize(int Width, int Height)
{
	// code
	if (Height <= 0)
		Height = 1;

	glViewport(0, 0, (GLsizei)Width, (GLsizei)Height); //Binaculoros
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	

}

void display(void)
{
	// code
	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();


	White();
	Saffron();
	Green();

	if (fSaffron[0] >= 1.0f)
	{
		glPushMatrix();
		{
			glTranslatef(fObjX, fObjY, fObjZ);
			//glScalef(0.560000f, 0.880000, 1.0f);
			glScalef(fScaleX, fScaleY, fScaleZ);
			glRotatef(-fAngle, 0.0f, 0.0f, 1.0f);
			AshokaChakra();
		}
		glPopMatrix();
	}
	

	SwapBuffers(ghdc);
}

void update(void)
{
	// code
	Tiranga();
	
	if (fSaffron[0] >= 1.0f)
	{
		if (fScaleX >= 0.5600f)
		{
			fScaleX = fScaleX - 0.001f;
		}

		if (fScaleY >= 0.8800f)
		{
			fScaleY = fScaleY - 0.001f;
		}

		if (fScaleY <= 0.8800f)
		{
			fAngle = fAngle + 0.03f;
			if (fAngle > 360.0f)
			{
				fAngle = 0.0f;
			}
		}
	}
	
	
}

void uninitialize(void)
{
	// Function Declarations
	void ToggleFullscreen(void);

	// code
	// If Application is exiting in Fullscreen
	if (gbFullscreen == TRUE)
	{
		ToggleFullscreen();
	}

	//Make the HDC as Current DC
	if (wglGetCurrentContext() == ghrc)
	{
		wglMakeCurrent(NULL, NULL);
	}

	//Delete Rendering Context
	if (ghrc)
	{
		wglDeleteContext(ghrc);
		ghrc = NULL;
	}

	//Delete The HDC
	if (ghdc)
	{
		ReleaseDC(ghwnd, ghdc);
		ghdc = NULL;
	}

	// Destroy Window
	if (ghwnd)
	{
		DestroyWindow(ghwnd);
		ghwnd = NULL;
	}

	// Close the log file
	if (gpFile)
	{
		fprintf(gpFile, "Program Ended Successfully \n");
		fclose(gpFile);
		gpFile = NULL;
	}

	PlaySound(0, 0, 0);

}



