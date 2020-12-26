#include <Gl/glut.h>

void display();
void reshape(int, int);

void init()
{
	glClearColor(0.0, 0.0, 1.0, 1.0);
}

int main(int argc, char**argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB);

	glutInitWindowPosition(200,100);
	glutInitWindowSize(500,500);

	glutCreateWindow("Window 1");

	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	init();
	glutMainLoop();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();


	glBegin(GL_POLYGON);
	glVertex2f(-9,6);
	glVertex2f(-6,6);
	glVertex2f(-6,3);
	glVertex2f(-9,3);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-6,6);
	glVertex2f(-3,6);
	glVertex2f(-3,4);
	glVertex2f(-9,4);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-3,6);
	glVertex2f(-1,4);
	glVertex2f(-1,1);
	glVertex2f(-3,-1);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-8,3);
	glVertex2f(-6,3);
	glVertex2f(-6,-4);
	glVertex2f(-8,-4);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-6,1.5);
	glVertex2f(-3,1.5);
	glVertex2f(-3,-1);
	glVertex2f(-6,-1);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-5,-1);
	glVertex2f(-3,-1);
	glVertex2f(-1,-4);
	glVertex2f(-3.5,-4);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-9,-4);
	glVertex2f(-5,-4);
	glVertex2f(-5,-6);
	glVertex2f(-9,-6);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-4,-4);
	glVertex2f(0,-4);
	glVertex2f(0,-6);
	glVertex2f(-4,-6);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(7,6);
	glVertex2f(8,6);
	glVertex2f(9,5);
	glVertex2f(9,2);
	glVertex2f(7,2);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(3,6);
	glVertex2f(7,6);
	glVertex2f(7,3);
	glVertex2f(4,3);
	glVertex2f(4,-3);
	glVertex2f(3,-6);
	glVertex2f(2,-5);
	glVertex2f(2,5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(7,-1);
	glVertex2f(9,-1);
	glVertex2f(9,-5);
	glVertex2f(8,-6);
	glVertex2f(7,-6);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(4,-3	);
	glVertex2f(7,-3);
	glVertex2f(7,-6);
	glVertex2f(3,-6);
	glEnd();
	glFlush();
}

void reshape(int w, int h)
{
	glViewport(0,0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10,10,-10,10);
	glMatrixMode(GL_MODELVIEW);
}
