#include<gl/GL.h>
#pragma once

float fSaffron[] = { 0.0f,0.0f ,0.0f };
float fWhite[] = { 0.0f,0.0f ,0.0f };
float fGreen[] = { 0.0f,0.0f ,0.0f };


/*

void Saffron(void)
{
	//Orange
	glBegin(GL_QUADS);

	glColor3f(1.0f, 0.153f, 0.051f);
	glVertex3f(-1.0f, 0.4f, 0.0f);

	glColor3f(1.0f, 0.153f, 0.051f);
	glVertex3f(1.0f, 0.4f, 0.0f);

	glColor3f(1.0f, 0.153f, 0.051f);
	glVertex3f(1.0f, 1.0f, 0.0f);

	glColor3f(1.0f, 0.153f, 0.051f);
	glVertex3f(-1.0f, 1.0f, 0.0f);

	glEnd();
}

void White(void)
{
	//White
	glBegin(GL_QUADS);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-1.0f, -0.5f, 0.0f);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(1.0f, -0.5f, 0.0f);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(1.0f, 0.5f, 0.0f);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-1.0f, 0.5f, 0.0f);

	glEnd();
}

void Green(void)
{
	//Green
	glBegin(GL_QUADS);

	glColor3f(0.019f, 0.136f, 0.008f);
	glVertex3f(-1.0f, -1.0f, 0.0f);

	glColor3f(0.019f, 0.136f, 0.008f);
	glVertex3f(1.0f, -1.0f, 0.0f);

	glColor3f(0.019f, 0.136f, 0.008f);
	glVertex3f(1.0f, -0.4f, 0.0f);

	glColor3f(0.019f, 0.136f, 0.008f);
	glVertex3f(-1.0f, -0.4f, 0.0f);

	glEnd();

}

*/

void Saffron(void)
{
	//Orange
	glBegin(GL_QUADS);

	glColor3f(fSaffron[0], fSaffron[1], fSaffron[2]);
	glVertex3f(-1.0f, 0.4f, 0.0f);
	glVertex3f(1.0f, 0.4f, 0.0f);
	glVertex3f(1.0f, 1.0f, 0.0f);
	glVertex3f(-1.0f, 1.0f, 0.0f);

	glEnd();
}

void White(void)
{
	//White
	glBegin(GL_QUADS);

	glColor3f(fWhite[0], fWhite[1], fWhite[2]);
	glVertex3f(-1.0f, -0.5f, 0.0f);
	glVertex3f(1.0f, -0.5f, 0.0f);
	glVertex3f(1.0f, 0.5f, 0.0f);
	glVertex3f(-1.0f, 0.5f, 0.0f);

	glEnd();
}

void Green(void)
{
	//Green
	glBegin(GL_QUADS);

	glColor3f(fGreen[0], fGreen[1], fGreen[2]);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, -0.4f, 0.0f);
	glVertex3f(-1.0f, -0.4f, 0.0f);

	glEnd();

}


void Tiranga(void)
{
	if (fSaffron[0] <= 1.0f)
	{
		fSaffron[0] = fSaffron[0] + 0.00010f;
	}

	if (fSaffron[1] <= 0.4f)
	{
		fSaffron[1] = fSaffron[1] + 0.00010f;
	}

	if (fSaffron[2] <= 0.12f)
	{
		fSaffron[2] = fSaffron[2] + 0.00010f;
	}

	if (fWhite[0] <= 1.0f)
	{
		fWhite[0] = fWhite[0] + 0.00010;
	}

	if (fWhite[1] <= 1.0f)
	{
		fWhite[1] = fWhite[1] + 0.00010;
	}

	if (fWhite[2] <= 1.0f)
	{
		fWhite[2] = fWhite[2] + 0.00010;
	}

	if (fGreen[0] <= 0.07f)
	{
		fGreen[0] = fGreen[0] + 0.00010;
	}

	if (fGreen[1] <= 0.53f)
	{
		fGreen[1] = fGreen[1] + 0.00010;
	}

	if (fGreen[2] <= 0.03)
	{
		fGreen[2] = fGreen[2] + 0.00010;
	}
}

