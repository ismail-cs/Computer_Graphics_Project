//#include <windows.h>  // for MS Windows


#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>
#include<cstdio>






GLfloat position = 65.0f;
GLfloat position1 = -40.0f;
GLfloat speed = 1.0f;

void display();

void update(int value) {

    if(position <-190.0)
        position = 70.0f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100,update,0);
}



void update1(int value) {

    if(position1 >50.0)
        position1 = -160.0f;

    position1 += speed;

	glutPostRedisplay();


	glutTimerFunc(100,update1,0);
}



void disback(int val)
{
    glutDisplayFunc(display);
}











void circle(float radius, float xc, float yc, float r, float g, float b)
{
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
        {
            glColor3ub(r,g,b);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+xc,y+yc);
        }
    glEnd();
}

void rectangle(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, float r, float g, float b){
    glBegin(GL_POLYGON);       // line 1
	glColor3ub(r, g, b);
        glVertex2f(x1, y1);
        glVertex2f(x2, y2);
        glVertex2f(x2, y2);
        glVertex2f(x3, y3);
        glVertex2f(x3, y3);
        glVertex2f(x4, y4);
        glVertex2f(x4, y4);
        glVertex2f(x1, y1);
    glEnd();
}

void tangle(float x1, float y1, float x2, float y2, float x3, float y3, float r, float g, float b){
    glBegin(GL_POLYGON);       // line 1
	glColor3ub(r, g, b);
        glVertex2f(x1, y1);
        glVertex2f(x2, y2);

        glVertex2f(x2, y2);
        glVertex2f(x3, y3);

        glVertex2f(x3, y3);
        glVertex2f(x1, y1);
    glEnd();
}













void road(){ //main road

    glBegin(GL_POLYGON);   // main road
	glColor3ub(180, 180, 180);
        glVertex2f(-110, -24);
        glVertex2f(110, -13);
        glVertex2f(110, 3);
        glVertex2f(-110, -2);
    glEnd();


    glBegin(GL_POLYGON);   // mid line
	glColor3ub(255, 255, 255);
        glVertex2f(-110, -13.5);
        glVertex2f(110, -5.5);
        glVertex2f(110, -4);
        glVertex2f(-110, -12);
    glEnd();


    glBegin(GL_POLYGON);   // main road down line
	glColor3ub(95, 95, 95);
        glVertex2f(-110, -26);
        glVertex2f(110, -15);
        glVertex2f(110, -13);
        glVertex2f(-110, -24);
    glEnd();



    glBegin(GL_POLYGON);   // main road upp line
	glColor3ub(95, 95, 95);
        glVertex2f(-110, -2);
        glVertex2f(110, 2);
        glVertex2f(110, 4);
        glVertex2f(-110, 0);
    glEnd();




}

void road_mid_line(int r, int g, int b){   // cross croo line
    glBegin(GL_POLYGON);
	glColor3ub(r, g, b);
        glVertex2f(-100, -18);
        glVertex2f(-90, -18);
        glVertex2f(-90, -5);
        glVertex2f(-100, -5);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(r, g, b);
        glVertex2f(-80, -18);
        glVertex2f(-70, -18);
        glVertex2f(-70, -5);
        glVertex2f(-80, -5);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(r, g, b);
        glVertex2f(-60, -18);
        glVertex2f(-50, -18);
        glVertex2f(-50, -5);
        glVertex2f(-60, -5);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(r, g, b);
        glVertex2f(-40, -18);
        glVertex2f(-30, -18);
        glVertex2f(-30, -5);
        glVertex2f(-40, -5);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(r, g, b);
        glVertex2f(-20, -15);
        glVertex2f(-10, -15);
        glVertex2f(-10, -1);
        glVertex2f(-20, -1);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(r, g, b);
        glVertex2f(0, -15);
        glVertex2f(10, -15);
        glVertex2f(10, -1);
        glVertex2f(0, -1);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(r, g, b);
        glVertex2f(20, -15);
        glVertex2f(30, -15);
        glVertex2f(30, -1);
        glVertex2f(20, -1);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(r, g, b);
        glVertex2f(40, -15);
        glVertex2f(50, -15);
        glVertex2f(50, -1);
        glVertex2f(40, -1);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(r, g, b);
        glVertex2f(60, -15);
        glVertex2f(70, -15);
        glVertex2f(70, -1);
        glVertex2f(60, -1);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(r, g, b);
        glVertex2f(80, -12);
        glVertex2f(90, -12);
        glVertex2f(90, 1);
        glVertex2f(80, 1);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(r, g, b);
        glVertex2f(100, -12);
        glVertex2f(110, -12);
        glVertex2f(110, 2);
        glVertex2f(100, 2);
    glEnd();
}


void lamp_post(){

    glBegin(GL_POLYGON);   // 1 main line
	glColor3ub(59, 81, 0);
        glVertex2f(-105, -25);
        glVertex2f(-104.4, -25);
        glVertex2f(-104.4, -19);
        glVertex2f(-105, -19);
    glEnd();

    circle(0.6, -103.5, -17.6, 130, 120, 0);  // light

    glBegin(GL_POLYGON);   // upp line
	glColor3ub(59, 81, 0);
        glVertex2f(-105, -19);
        glVertex2f(-104.4, -19);
        glVertex2f(-103.4, -17);
        glVertex2f(-104, -17);
    glEnd();





    glBegin(GL_POLYGON);   // 2 main line
	glColor3ub(59, 81, 0);
        glVertex2f(-95, -25);
        glVertex2f(-94.4, -25);
        glVertex2f(-94.4, -19);
        glVertex2f(-95, -19);
    glEnd();

    circle(0.6, -93.5, -17.6, 130, 120, 0);  // light

    glBegin(GL_POLYGON);   // upp line
	glColor3ub(59, 81, 0);
        glVertex2f(-95, -19);
        glVertex2f(-94.4, -19);
        glVertex2f(-93.4, -17);
        glVertex2f(-94, -17);
    glEnd();




    glBegin(GL_POLYGON);   // 3 main line
	glColor3ub(59, 81, 0);
        glVertex2f(-85, -24);
        glVertex2f(-84.4, -24);
        glVertex2f(-84.4, -18);
        glVertex2f(-85, -18);
    glEnd();

    circle(0.6, -83.5, -16.6, 130, 120, 0);  // light

    glBegin(GL_POLYGON);   // upp line
	glColor3ub(59, 81, 0);
        glVertex2f(-85, -18);
        glVertex2f(-84.4, -18);
        glVertex2f(-83.4, -16);
        glVertex2f(-84, -16);
    glEnd();





    glBegin(GL_POLYGON);   // 4 main line
	glColor3ub(59, 81, 0);
        glVertex2f(-75, -24);
        glVertex2f(-74.4, -24);
        glVertex2f(-74.4, -18);
        glVertex2f(-75, -18);
    glEnd();

    circle(0.6, -73.5, -16.6, 130, 120, 0);  // light

    glBegin(GL_POLYGON);   // upp line
	glColor3ub(59, 81, 0);
        glVertex2f(-75, -18);
        glVertex2f(-74.4, -18);
        glVertex2f(-73.4, -16);
        glVertex2f(-74, -16);
    glEnd();





    glBegin(GL_POLYGON);   // 5 main line
	glColor3ub(59, 81, 0);
        glVertex2f(-65, -23);
        glVertex2f(-64.4, -23);
        glVertex2f(-64.4, -17);
        glVertex2f(-65, -17);
    glEnd();

    circle(0.6, -63.5, -15.6, 130, 120, 0);  // light

    glBegin(GL_POLYGON);   // upp line
	glColor3ub(59, 81, 0);
        glVertex2f(-65, -17);
        glVertex2f(-64.4, -17);
        glVertex2f(-63.4, -15);
        glVertex2f(-64, -15);
    glEnd();





    glBegin(GL_POLYGON);   // 6 main line
	glColor3ub(59, 81, 0);
        glVertex2f(-55, -23);
        glVertex2f(-54.4, -23);
        glVertex2f(-54.4, -17);
        glVertex2f(-55, -17);
    glEnd();

    circle(0.6, -53.5, -15.6, 130, 120, 0);  // light

    glBegin(GL_POLYGON);   // upp line
	glColor3ub(59, 81, 0);
        glVertex2f(-55, -17);
        glVertex2f(-54.4, -17);
        glVertex2f(-53.4, -15);
        glVertex2f(-54, -15);
    glEnd();


}

void river(){

    glBegin(GL_POLYGON);   // upp mut
	glColor3ub(143, 131, 70);

        glVertex2f(-110, -60);
        glVertex2f(110, -60);

        glVertex2f(110, -32);
        glVertex2f(65, -29);
        glVertex2f(55, -28);
        glVertex2f(45, -27);
        glVertex2f(35, -26);
        glVertex2f(0, -25);
        glVertex2f(-35, -26);
        glVertex2f(-45, -27);
        glVertex2f(-55, -28);
        glVertex2f(-65, -29);
        glVertex2f(-110, -32);

    glEnd();


    glBegin(GL_POLYGON);   // main river
	glColor3ub(168, 241, 255);

        glVertex2f(-110, -60);
        glVertex2f(110, -60);

        glVertex2f(110, -34);
        glVertex2f(65, -31);
        glVertex2f(55, -30);
        glVertex2f(45, -29);
        glVertex2f(35, -28);
        glVertex2f(0, -27);
        glVertex2f(-35, -28);
        glVertex2f(-45, -29);
        glVertex2f(-55, -30);
        glVertex2f(-65, -31);
        glVertex2f(-110, -34);

    glEnd();






     glBegin(GL_POLYGON);   // down mut
	glColor3ub(143, 131, 70);

        glVertex2f(-110, -62);
        glVertex2f(110, -62);

        glVertex2f(110, -60);
        glVertex2f(50, -57);
        glVertex2f(0, -56);
        glVertex2f(-50, -57);
        glVertex2f(-110, -60);

    glEnd();



    glBegin(GL_POLYGON);   // down fild
	glColor3ub(23, 219, 0);

        glVertex2f(-110, -70);
        glVertex2f(110, -70);

        glVertex2f(110, -62);
        glVertex2f(50, -59);
        glVertex2f(0, -58);
        glVertex2f(-50, -59);
        glVertex2f(-110, -62);

    glEnd();









}


void river_line(){

glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(-60, -40);
        glVertex2f(-45, -40.5);
        glVertex2f(-35, -40);
        glVertex2f(-35, -39.5);
        glVertex2f(-59, -39);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(-60, -30);
        glVertex2f(-30, -30);
        glVertex2f(-30, -29.5);
        glVertex2f(-33, -28.5);
        glVertex2f(-59, -29.7);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(50, -40);
        glVertex2f(20, -40);
        glVertex2f(20, -39.5);
        glVertex2f(23, -38.5);
        glVertex2f(49, -39.7);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(-20, -38);
        glVertex2f(20, -38);
        glVertex2f(20, -37.5);
        glVertex2f(23, -36.5);
        glVertex2f(-29, -37.7);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(-55, -34);
        glVertex2f(-40, -34.5);
        glVertex2f(-15, -34);
        glVertex2f(-13, -33.5);
        glVertex2f(-13, -32.5);
        glVertex2f(-9, -33.7);
        glVertex2f(-50, -34.5);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(40, -34);
        glVertex2f(65, -34);
        glVertex2f(65, -33);
        glVertex2f(50, -33.5);
        glVertex2f(43, -33);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(-75, -37);
        glVertex2f(-50, -37);
        glVertex2f(-52, -36.5);
        glVertex2f(-75, -36.8);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(-15, -30);
        glVertex2f(-5, -30);
        glVertex2f(-4, -31);
        glVertex2f(25, -30);
        glVertex2f(25, -29.3);
        glVertex2f(15, -28.8);
        glVertex2f(10, -29.2);
        glVertex2f(-15, -29.5);
    glEnd();










    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(-90, -50);
        glVertex2f(-75, -50.5);
        glVertex2f(-65, -50);
        glVertex2f(-65, -49.5);
        glVertex2f(-89, -49);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(-90, -40);
        glVertex2f(-60, -40);
        glVertex2f(-60, -39.5);
        glVertex2f(-63, -38.5);
        glVertex2f(-89, -39.7);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(20, -50);
        glVertex2f(-10, -50);
        glVertex2f(-10, -49.5);
        glVertex2f(-13, -48.5);
        glVertex2f(19, -49.7);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(-50, -48);
        glVertex2f(-10, -48);
        glVertex2f(-10, -47.5);
        glVertex2f(-13, -46.5);
        glVertex2f(-59, -47.7);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(-85, -44);
        glVertex2f(-80, -44.5);
        glVertex2f(-45, -44);
        glVertex2f(-43, -43.5);
        glVertex2f(-43, -42.5);
        glVertex2f(-39, -43.7);
        glVertex2f(-80, -44.5);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(10, -44);
        glVertex2f(35, -44);
        glVertex2f(35, -43);
        glVertex2f(20, -43.5);
        glVertex2f(13, -43);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(-105, -47);
        glVertex2f(-80, -47);
        glVertex2f(-82, -46.5);
        glVertex2f(-105, -46.8);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(-45, -40);
        glVertex2f(-35, -40);
        glVertex2f(-34, -41);
        glVertex2f(-5, -40);
        glVertex2f(-5, -39.3);
        glVertex2f(-15, -38.8);
        glVertex2f(-20, -39.2);
        glVertex2f(-45, -39.5);
    glEnd();









    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(-30, -50);
        glVertex2f(-15, -50.5);
        glVertex2f(-5, -50);
        glVertex2f(-5, -49.5);
        glVertex2f(-29, -49);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(-30, -40);
        glVertex2f(-0, -40);
        glVertex2f(-0, -39.5);
        glVertex2f(-3, -38.5);
        glVertex2f(-29, -39.7);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(80, -50);
        glVertex2f(50, -50);
        glVertex2f(50, -49.5);
        glVertex2f(47, -48.5);
        glVertex2f(79, -49.7);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(10, -48);
        glVertex2f(50, -48);
        glVertex2f(50, -47.5);
        glVertex2f(47, -46.5);
        glVertex2f(1, -47.7);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(-25, -44);
        glVertex2f(-20, -44.5);
        glVertex2f(15, -44);
        glVertex2f(17, -43.5);
        glVertex2f(17, -42.5);
        glVertex2f(11, -43.7);
        glVertex2f(-20, -44.5);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(70, -44);
        glVertex2f(95, -44);
        glVertex2f(95, -43);
        glVertex2f(80, -43.5);
        glVertex2f(73, -43);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(-45, -47);
        glVertex2f(-20, -47);
        glVertex2f(-22, -46.5);
        glVertex2f(-45, -46.8);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(15, -40);
        glVertex2f(25, -40);
        glVertex2f(24, -41);
        glVertex2f(55, -40);
        glVertex2f(55, -39.3);
        glVertex2f(45, -38.8);
        glVertex2f(40, -39.2);
        glVertex2f(15, -39.5);
    glEnd();
}



void boat1(){

glPushMatrix();
glTranslatef(position1,0.0f, 0.0f);

    glBegin(GL_POLYGON);       // main boat
	glColor3ub(158, 128, 61);
        glVertex2f(50, -40);
        glVertex2f(55, -43.5);
        glVertex2f(58, -44);
        glVertex2f(72, -44);
        glVertex2f(75, -43.5);
        glVertex2f(80, -40);
    glEnd();

    glBegin(GL_POLYGON);       // bamboo
	glColor3ub(95, 72, 23);
        glVertex2f(64.5, -40);
        glVertex2f(65.5, -40);
        glVertex2f(65.5, -25);
        glVertex2f(64.5, -25);
    glEnd();


    glBegin(GL_POLYGON);       // pall
	glColor3ub(255, 190, 0);
        glVertex2f(60, -36);
        glVertex2f(70, -36);
        glVertex2f(69, -34);
        glVertex2f(68.7, -32);
        glVertex2f(69, -29);
        glVertex2f(70, -27);
        glVertex2f(60, -27);
        glVertex2f(59, -28);
        glVertex2f(58.3, -32);
        glVertex2f(59, -35);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(168, 241, 255);
        glVertex2f(50, -40);
        glVertex2f(60, -41);
        glVertex2f(70, -41);
        glVertex2f(80, -40);
    glEnd();



    glBegin(GL_POLYGON);       // son
	glColor3ub(189, 142, 37);
        glVertex2f(63, -41);
        glVertex2f(72, -41);
        glVertex2f(71, -39);
        glVertex2f(69, -37.7);
        glVertex2f(60, -38);
    glEnd();

    glBegin(GL_POLYGON);       // first son curve
	glColor3ub(125, 95, 29);
        glVertex2f(57, -41);
        glVertex2f(58, -39);
        glVertex2f(60, -38);
        glVertex2f(62, -39);
        glVertex2f(63, -41);
    glEnd();

glPopMatrix();

glFlush();

}



void boat2(){

glPushMatrix();
glTranslatef(position,-5.0f, 0.0f);

    glBegin(GL_POLYGON);       // main boat
	glColor3ub(158, 128, 61);
        glVertex2f(50, -40);
        glVertex2f(55, -43.5);
        glVertex2f(58, -44);
        glVertex2f(72, -44);
        glVertex2f(75, -43.5);
        glVertex2f(80, -40);
    glEnd();

    glBegin(GL_POLYGON);       // bamboo
	glColor3ub(95, 72, 23);
        glVertex2f(64.5, -40);
        glVertex2f(65.5, -40);
        glVertex2f(65.5, -25);
        glVertex2f(64.5, -25);
    glEnd();


    glBegin(GL_POLYGON);       // pall
	glColor3ub(255, 139, 7);
        glVertex2f(60, -36);
        glVertex2f(70, -36);
        glVertex2f(69, -34);
        glVertex2f(68.7, -32);
        glVertex2f(69, -29);
        glVertex2f(70, -27);
        glVertex2f(60, -27);
        glVertex2f(59, -28);
        glVertex2f(58.3, -32);
        glVertex2f(59, -35);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(168, 241, 255);
        glVertex2f(50, -40);
        glVertex2f(60, -41);
        glVertex2f(70, -41);
        glVertex2f(80, -40);
    glEnd();



    glBegin(GL_POLYGON);       // son
	glColor3ub(189, 142, 37);
        glVertex2f(63, -41);
        glVertex2f(72, -41);
        glVertex2f(71, -39);
        glVertex2f(69, -37.7);
        glVertex2f(60, -38);
    glEnd();

    glBegin(GL_POLYGON);       // first son curve
	glColor3ub(125, 95, 29);
        glVertex2f(57, -41);
        glVertex2f(58, -39);
        glVertex2f(60, -38);
        glVertex2f(62, -39);
        glVertex2f(63, -41);
    glEnd();

glPopMatrix();

glFlush();

}


void fild(){



    glBegin(GL_POLYGON);   // main road
	glColor3ub(32, 190, 19);
        glVertex2f(-110, -35);
        glVertex2f(110, -35);
        glVertex2f(110, -10);
        glVertex2f(-110, -10);
    glEnd();



}


void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glLineWidth(7.5);



    fild();
    river();
    river_line();


    road();
    road_mid_line(180,180,180);


    boat1();
    boat2();
    lamp_post();

    glFlush();  // Render now
}



/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1920, 1080);// Set the window's initial width & height         // Initialize GLUT
    glutCreateWindow("OpenGL Setup Test");

    glutDisplayFunc(display);// Register display callback handler for window re-paint
    glutTimerFunc(100, update, 0);
    glutTimerFunc(100, update1, 0);
    gluOrtho2D(-110.0, 110.0, -70.0, 90.0);
    glutMainLoop();           // Enter the event-processing loop
    return 0;
}
