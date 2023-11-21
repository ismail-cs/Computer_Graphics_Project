#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>
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






void sky(){

    rectangle(-80, 20, 80, 20, 80, 50, -80, 50, 145, 180, 255);
}


void sun(){

    circle(5.5, 35, 33, 245, 255, 0);

}


void cloud(){

    circle(2, 17, 33, 255, 255, 255);
    circle(2, 15, 33, 255, 255, 255);
    circle(3, 14, 34.5, 255, 255, 255);
    circle(2, 12, 33, 255, 255, 255);

    circle(2, 7, 33, 255, 255, 255);
    circle(2, 5, 33, 255, 255, 255);
    circle(3, 4, 34.5, 255, 255, 255);
    circle(2, 6, 34.5, 255, 255, 255);
    circle(2, 2, 33, 255, 255, 255);
}


void road(){ //main road

    glBegin(GL_POLYGON);   // main
	glColor3ub(180, 180, 180);
        glVertex2f(-100, -5);
        glVertex2f(100, -5);
        glVertex2f(100, 10);
        glVertex2f(-100, 10);
    glEnd();
}



void road2(){ //road mid

    glBegin(GL_POLYGON);   // main
	glColor3ub(255, 255, 255);
        glVertex2f(-100, 2.8);
        glVertex2f(100, 2.8);
        glVertex2f(100, 3.8);
        glVertex2f(-100, 3.8);
    glEnd();
}



void sea(){

    glBegin(GL_POLYGON);   // main
	glColor3ub(168, 241, 255);
        glVertex2f(-100, -60);
        glVertex2f(100, -60);
        glVertex2f(100, -30);
        glVertex2f(65, -29);
        glVertex2f(55, -28);
        glVertex2f(45, -27);
        glVertex2f(35, -26);
        glVertex2f(0, -25);
        glVertex2f(-35, -26);
        glVertex2f(-45, -27);
        glVertex2f(-55, -28);
        glVertex2f(-65, -29);
        glVertex2f(-100, -30);
    glEnd();




}


void sea_line(){

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
}


void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glLineWidth(7.5);

    sky();
    sea();
    sea_line();
    cloud();
    sun();
    road();
    road2();

    glFlush();  // Render now
}



/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1920, 1080);// Set the window's initial width & height         // Initialize GLUT
    glutCreateWindow("OpenGL Setup Test");

    glutDisplayFunc(display);// Register display callback handler for window re-paint
    gluOrtho2D(-100.0, 100.0, -60.0, 60.0);
    glutMainLoop();           // Enter the event-processing loop
    return 0;
}
