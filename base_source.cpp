//#include <glut.h> //�ü�� ����
//#include <glu.h> //�׸� �׸���
//#include <gl.h> //������
//
//void MyDisplay() {
//	glClear(GL_COLOR_BUFFER_BIT); //���� �ʱ�ȭ
//	glColor3f(0.8f, 0.5f, 1.0f); // ���� ����
//	glBegin(GL_POLYGON); // ������ ������
//	glVertex3f(0.0, -0.45, 0.0); // 3: ���� 3��(3����), f: �Ǽ�
//	glVertex3f(0.55, -0.75, 0.0);
//	glVertex3f(0.4, -0.25, 0.0);
//	glVertex3f(0.75, 0.0, 0.0);
//	glVertex3f(0.25, 0.2, 0.0);
//	glVertex3f(0.0, 0.65, 0.0);
//	glVertex3f(-0.25, 0.2, 0.0);
//	glVertex3f(-0.75, 0.0, 0.0);
//	glVertex3f(-0.4, -0.25, 0.0);
//	glVertex3f(-0.55, -0.75, 0.0);
//	glEnd();
//	glFlush(); // ���� ���� ����(���)
//
//
//}
//void MyReshape(int NewWidth, int NewHeight) { }
//
//void MyKeyboard(unsigned char KeyPressed, int X, int Y) {}
//
//void MySpecial(int key, int X, int Y) {}
//
//void MyMouseClick(GLint Button, GLint State, GLint X, GLint Y) {}
//
//void MyMouseMove(GLint X, GLint Y) {}
//
//void MyIdle() {
//}
//
//void MyTimer(int Value) {}
//
//void MenuProc(int entryID) {}
//
//void MenuFunc() {}
//// argc : ���� �� argv : ����
//int main(int argc, char** argv) {
//	glutInit(&argc, argv); //�ʱ�ȭ �ʱ⼳��
//	glutInitDisplayMode(GLUT_RGB); // ȭ�� ����
//	glutInitWindowSize(500, 500); // ȭ�� ũ��
//	glutInitWindowPosition(100, 200); // �ʱ� ȭ�� ��ġ(������ ���� ���)
//	glutCreateWindow("����"); // �׷���â ����
//	glClearColor(0.5, 0.5, 0.5, 1.0); // �� �ʱ�ȭ r, g, b, ���� 256:1 *������ 1,1,1=��� 0, 0, 0 = ������
//
//	glutDisplayFunc(MyDisplay); // �ݹ��Լ�, �Լ��� ���ڷ� �ް� ���ϰ� ����, �Լ� ȣ�� �� ��� �� ��(�Ϲ� �Լ��� ���� ������ ���)
//
//	glutMainLoop(); // ��� �ݹ��Լ��� ���� ������ ��ٸ�
//	return 0;
//}