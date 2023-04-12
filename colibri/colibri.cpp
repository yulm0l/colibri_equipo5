#include<gl/glut.h>
void DibujarPoligonos()
//{patita de atras
{
	//A
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(370, 200);
	glVertex2i(400, 200);
	glVertex2i(400, 225);
	glEnd();
	glFlush();
	//--------------

	//B
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2i(495, 280);
	glVertex2i(400, 305);
	glVertex2i(410, 205);

	glEnd();

	//C
	glColor3f(0.5f, 1.5f, 0.5f);
	glBegin(GL_POLYGON);
	glVertex2i(410, 315);
	glVertex2i(500, 290);
	glVertex2i(520, 380);
	glEnd();


	glColor3f(0.5f, 1.5f, 0.5f);
	glBegin(GL_POLYGON);
	glVertex2i(610, 85);
	glVertex2i(600, 215);
	glVertex2i(525, 260);
	glEnd();

	glColor3f(0.5f, 1.5f, 0.5f);
	glBegin(GL_POLYGON);
	glVertex2i(620, 212);
	glVertex2i(750, 150);
	glVertex2i(625, 70);
	glEnd();


	glColor3f(0.5f, 1.5f, 0.5f);
	glBegin(GL_POLYGON);
	glVertex2i(740, 175);
	glVertex2i(610, 220);
	glVertex2i(560, 375);
	glEnd();


	glColor3f(0.5f, 1.5f, 0.5f);
	glBegin(GL_POLYGON);
	glVertex2i(595, 245);
	glVertex2i(520, 285);
	glVertex2i(550, 385);
	glEnd();

	glColor3f(0.5f, 1.5f, 0.5f);
	glBegin(GL_POLYGON);
	glVertex2i(395, 340);
	glVertex2i(395, 525);
	glVertex2i(245, 485);
	glEnd();

	glColor3f(0.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(400, 520);
	glVertex2i(520, 395);
	glVertex2i(400, 335);
	glEnd();


	glColor3f(0.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(407, 540);
	glVertex2i(550, 400);
	glVertex2i(845, 780);
	glEnd();


	//cabecita
	glColor3f(0.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(230, 498);
	glVertex2i(387, 538);
	glVertex2i(275, 590);
	glEnd();


	glColor3f(0.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(170, 550);
	glVertex2i(235, 590);
	glVertex2i(215, 499);
	glEnd();


	glColor3f(0.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(210, 595);
	glVertex2i(145, 595);
	glVertex2i(150, 580);
	glEnd();

	glColor3f(0.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(110, 595);
	glVertex2i(125, 580);
	glVertex2i(11, 599);
	glEnd();

	glFlush();
}
void IniciarConfiguracion() {
	glClearColor(176.0f / 255.0f, 224.0f / 255.0f, 230.0f / 255.0f, 1.0f);
	glColor3f(0.0, 0.0, 1.0);
	glLineWidth(3.0);
	glOrtho(0, 1000, 0, 800, 1, -1);
}
int main(int argc, char* args[]) {
	glutInit(&argc, args);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Tortuga-YuliBMS8M");
	glutDisplayFunc(DibujarPoligonos);
	IniciarConfiguracion();
	glutMainLoop();
	return 0;
}
