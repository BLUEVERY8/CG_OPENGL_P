//�� ¥ : 2022.03.29
//�ۼ��� : ������
//�� �� : idle �⺻ �ҽ�

#include <stdio.h>
#include <glut.h>
#include <glu.h>
#include <gl.h>

GLfloat Delta = 0.0;
GLfloat seta = 0.0;
GLint flag1 = 0;
GLint flag2 = 0;
void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.5, 0.8);
	glBegin(GL_POLYGON);
		glVertex3f(-0.5 + Delta, -0.25 + seta, 0.0);
		glVertex3f(0.0 + Delta, -0.25 + seta, 0.0);
		glVertex3f(0.0 + Delta, 0.25 + seta, 0.0);
		glVertex3f(-0.5 + Delta, 0.25  +seta, 0.0);
		glEnd();
		glFlush();

}

void MyIdle() {
	if (flag1 == 0)
		Delta = Delta + 0.0035;
	else
		Delta = Delta - 0.0035;
	if (Delta > 1) {
		flag1 = 1;
	}
		
	else if (Delta < -0.5) {
		flag1 = 0;
	}
	
	if (flag2 == 0)
		seta = seta + 0.001;
	else
		seta = seta - 0.001;
	if (seta > 0.75) {
		flag2 = 1;
	}

	else if (seta < -0.75) {
		flag2 = 0;
	}
	glutPostRedisplay();
}

void MyReshape(int NewWidth, int NewHeight) {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, 1.0, -1.0);
}

void initUse() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	printf("�а� �й� �̸� \n ��¥: ~~ \n ����: ~~");

}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("����");
	initUse();

	glutDisplayFunc(MyDisplay);
	//glutReshapeFunc(MyReshape);
	glutIdleFunc(MyIdle);
	glutMainLoop();
	return 0;
}