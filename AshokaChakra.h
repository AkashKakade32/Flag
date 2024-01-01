#include<math.h>
#include<gl/GL.h>

#pragma once

float fBlue[] = { 1.0f, 1.0f, 1.0f };

void MostOuterCircle(void)
{
	const float fRadius = 0.4f;
	float fTheta = 0.0f;
	float X, Y;

	//glColor3f(1.0f, 1.0f, 0.0f);
	//glVertex3f(0.0f, 0.0f, 0.0f);
	glLineWidth(5.0f);
	glBegin(GL_LINE_STRIP);
	for (fTheta = 0; fTheta <= 6.28; fTheta = fTheta + 0.001)
	{
		X = fRadius * cos(fTheta);
		Y = fRadius * sin(fTheta);

		glColor3f(0.0f,0.0f,1.0f);
		glVertex3f(X, Y, 0.0f);
	}
	glEnd();
}

void OuterCircle(void)
{
	const float fRadius = 0.1f;
	float fTheta = 0.0f;
	float X, Y;

	//glColor3f(1.0f, 1.0f, 0.0f);
	//glVertex3f(0.0f, 0.0f, 0.0f);
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	for (fTheta = 0; fTheta <= 6.28; fTheta = fTheta + 0.001)
	{
		X = fRadius * cos(fTheta);
		Y = fRadius * sin(fTheta);

		glColor3f(0.0f,0.0f,1.0f);
		glVertex3f(X, Y, 0.0f);
	}
	glEnd();
}

void InnerCircle(void)
{
	const float fRadius = 0.08f;
	float fTheta = 0.0f;
	float X, Y;

	glBegin(GL_LINE_STRIP);
	for (fTheta = 0; fTheta <= 6.28; fTheta = fTheta + 0.001)
	{
		glColor3f(0.0f,0.0f,1.0f);
		glVertex3f(0.0f, 0.0f, 0.0f);

		X = fRadius * cos(fTheta);
		Y = fRadius * sin(fTheta);

		glColor3f(0.0f,0.0f,1.0f);
		glVertex3f(X, Y, 0.0f);
	}
	glEnd();
}

void Quad1(void)
{
	glBegin(GL_QUADS);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.1f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.020f, 0.198f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.4f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(-0.020f, 0.198f, 0.0f);

	glEnd();

}

void Quad2(void)
{
	glBegin(GL_QUADS);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.1f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.020f, 0.198f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.4f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(-0.020f, 0.198f, 0.0f);

	glEnd();

}

void Quad3(void)
{
	glBegin(GL_QUADS);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.1f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.020f, 0.198f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.4f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(-0.020f, 0.198f, 0.0f);

	glEnd();

}

void Quad4(void)
{
	glBegin(GL_QUADS);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.1f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.020f, 0.198f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.4f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(-0.020f, 0.198f, 0.0f);

	glEnd();

}

void Quad5(void)
{
	glBegin(GL_QUADS);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.1f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.020f, 0.198f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.4f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(-0.020f, 0.198f, 0.0f);

	glEnd();

}

void Quad6(void)
{
	glBegin(GL_QUADS);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.1f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.020f, 0.198f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.4f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(-0.020f, 0.198f, 0.0f);

	glEnd();

}

void Quad7(void)
{
	glBegin(GL_QUADS);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.1f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.020f, 0.198f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.4f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(-0.020f, 0.198f, 0.0f);

	glEnd();

}

void Quad8(void)
{
	glBegin(GL_QUADS);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.1f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.020f, 0.198f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.4f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(-0.020f, 0.198f, 0.0f);

	glEnd();

}

void Quad9(void)
{
	glBegin(GL_QUADS);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.1f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.020f, 0.198f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.4f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(-0.020f, 0.198f, 0.0f);

	glEnd();

}

void Quad10(void)
{
	glBegin(GL_QUADS);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.1f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.020f, 0.198f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.4f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(-0.020f, 0.198f, 0.0f);

	glEnd();

}

void Quad11(void)
{
	glBegin(GL_QUADS);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.1f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.020f, 0.198f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.4f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(-0.020f, 0.198f, 0.0f);

	glEnd();

}

void Quad12(void)
{
	glBegin(GL_QUADS);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.1f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.020f, 0.198f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.4f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(-0.020f, 0.198f, 0.0f);

	glEnd();

}

void Quad13(void)
{
	glBegin(GL_QUADS);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.1f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.020f, 0.198f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.4f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(-0.020f, 0.198f, 0.0f);

	glEnd();

}

void Quad14(void)
{
	glBegin(GL_QUADS);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.1f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.020f, 0.198f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.4f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(-0.020f, 0.198f, 0.0f);

	glEnd();

}

void Quad15(void)
{
	glBegin(GL_QUADS);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.1f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.020f, 0.198f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.4f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(-0.020f, 0.198f, 0.0f);

	glEnd();

}

void Quad16(void)
{
	glBegin(GL_QUADS);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.1f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.020f, 0.198f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.4f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(-0.020f, 0.198f, 0.0f);

	glEnd();

}

void Quad17(void)
{
	glBegin(GL_QUADS);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.1f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.020f, 0.198f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.4f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(-0.020f, 0.198f, 0.0f);

	glEnd();

}

void Quad18(void)
{
	glBegin(GL_QUADS);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.1f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.020f, 0.198f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.4f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(-0.020f, 0.198f, 0.0f);

	glEnd();

}

void Quad19(void)
{
	glBegin(GL_QUADS);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.1f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.020f, 0.198f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.4f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(-0.020f, 0.198f, 0.0f);

	glEnd();

}

void Quad20(void)
{
	glBegin(GL_QUADS);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.1f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.020f, 0.198f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.4f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(-0.020f, 0.198f, 0.0f);

	glEnd();

}

void Quad21(void)
{
	glBegin(GL_QUADS);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.1f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.020f, 0.198f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.4f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(-0.020f, 0.198f, 0.0f);

	glEnd();

}

void Quad22(void)
{
	glBegin(GL_QUADS);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.1f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.020f, 0.198f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.4f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(-0.020f, 0.198f, 0.0f);

	glEnd();

}

void Quad23(void)
{
	glBegin(GL_QUADS);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.1f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.020f, 0.198f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.4f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(-0.020f, 0.198f, 0.0f);

	glEnd();

}

void Quad24(void)
{
	glBegin(GL_QUADS);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.1f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.020f, 0.198f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0f, 0.4f, 0.0f);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(-0.020f, 0.198f, 0.0f);

	glEnd();

}

void AshokaChakra(void)
{
	
	glPushMatrix();
	{
		glTranslatef(0.0f, 0.0f, 0.0f);
		OuterCircle();
		InnerCircle();
		MostOuterCircle();
		Quad1();
	}
	glPopMatrix();

	glPushMatrix();
	{
		glTranslatef(0.0f, 0.0f, 0.0f);
		glRotatef(-180.0f, 0.0f, 0.0f, 1.0f);
		Quad2();
	}
	glPopMatrix();

	glPushMatrix();
	{
		glTranslatef(0.0f, 0.0f, 0.0f);
		glRotatef(-15.0f, 0.0f, 0.0f, 1.0f);
		Quad3();
	}
	glPopMatrix();

	glPushMatrix();
	{
		glTranslatef(0.0f, 0.0f, 0.0f);
		glRotatef(-30.0f, 0.0f, 0.0f, 1.0f);
		Quad4();
	}
	glPopMatrix();

	glPushMatrix();
	{
		glTranslatef(0.0f, 0.0f, 0.0f);
		glRotatef(-45.0f, 0.0f, 0.0f, 1.0f);
		Quad5();
	}
	glPopMatrix();

	glPushMatrix();
	{
		glTranslatef(0.0f, 0.0f, 0.0f);
		glRotatef(-60.0f, 0.0f, 0.0f, 1.0f);
		Quad6();
	}
	glPopMatrix();

	glPushMatrix();
	{
		glTranslatef(0.0f, 0.0f, 0.0f);
		glRotatef(-75.0f, 0.0f, 0.0f, 1.0f);
		Quad7();
	}
	glPopMatrix();

	glPushMatrix();
	{
		glTranslatef(0.0f, 0.0f, 0.0f);
		glRotatef(-90.0f, 0.0f, 0.0f, 1.0f);
		Quad8();
	}
	glPopMatrix();

	glPushMatrix();
	{
		glTranslatef(0.0f, 0.0f, 0.0f);
		glRotatef(-105.0f, 0.0f, 0.0f, 1.0f);
		Quad9();
	}
	glPopMatrix();

	glPushMatrix();
	{
		glTranslatef(0.0f, 0.0f, 0.0f);
		glRotatef(-120.0f, 0.0f, 0.0f, 1.0f);
		Quad10();
	}
	glPopMatrix();

	glPushMatrix();
	{
		glTranslatef(0.0f, 0.0f, 0.0f);
		glRotatef(-135.0f, 0.0f, 0.0f, 1.0f);
		Quad11();
	}
	glPopMatrix();

	glPushMatrix();
	{
		glTranslatef(0.0f, 0.0f, 0.0f);
		glRotatef(-150.0f, 0.0f, 0.0f, 1.0f);
		Quad12();
	}
	glPopMatrix();

	glPushMatrix();
	{
		glTranslatef(0.0f, 0.0f, 0.0f);
		glRotatef(-165.0f, 0.0f, 0.0f, 1.0f);
		Quad13();
	}
	glPopMatrix();

	glPushMatrix();
	{
		glTranslatef(0.0f, 0.0f, 0.0f);
		glRotatef(-195.0f, 0.0f, 0.0f, 1.0f);
		Quad14();
	}
	glPopMatrix();

	glPushMatrix();
	{
		glTranslatef(0.0f, 0.0f, 0.0f);
		glRotatef(-210.0f, 0.0f, 0.0f, 1.0f);
		Quad15();
	}
	glPopMatrix();

	glPushMatrix();
	{
		glTranslatef(0.0f, 0.0f, 0.0f);
		glRotatef(-225.0f, 0.0f, 0.0f, 1.0f);
		Quad16();
	}
	glPopMatrix();

	glPushMatrix();
	{
		glTranslatef(0.0f, 0.0f, 0.0f);
		glRotatef(-240.0f, 0.0f, 0.0f, 1.0f);
		Quad17();
	}
	glPopMatrix();

	glPushMatrix();
	{
		glTranslatef(0.0f, 0.0f, 0.0f);
		glRotatef(-255.0f, 0.0f, 0.0f, 1.0f);
		Quad18();
	}
	glPopMatrix();

	glPushMatrix();
	{
		glTranslatef(0.0f, 0.0f, 0.0f);
		glRotatef(-270.0f, 0.0f, 0.0f, 1.0f);
		Quad19();
	}
	glPopMatrix();

	glPushMatrix();
	{
		glTranslatef(0.0f, 0.0f, 0.0f);
		glRotatef(-285.0f, 0.0f, 0.0f, 1.0f);
		Quad20();
	}
	glPopMatrix();

	glPushMatrix();
	{
		glTranslatef(0.0f, 0.0f, 0.0f);
		glRotatef(-300.0f, 0.0f, 0.0f, 1.0f);
		Quad21();
	}
	glPopMatrix();

	glPushMatrix();
	{
		glTranslatef(0.0f, 0.0f, 0.0f);
		glRotatef(-315.0f, 0.0f, 0.0f, 1.0f);
		Quad22();
	}
	glPopMatrix();

	glPushMatrix();
	{
		glTranslatef(0.0f, 0.0f, 0.0f);
		glRotatef(-330.0f, 0.0f, 0.0f, 1.0f);
		Quad23();
	}
	glPopMatrix();

	glPushMatrix();
	{
		glTranslatef(0.0f, 0.0f, 0.0f);
		glRotatef(-345.0f, 0.0f, 0.0f, 1.0f);
		Quad23();
	}
	glPopMatrix();
}
