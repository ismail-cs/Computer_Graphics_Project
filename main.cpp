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


void road(){

    glBegin(GL_POLYGON);   // main
	glColor3ub(180, 180, 180);
        glVertex2f(-80, -5);
        glVertex2f(80, -5);
        glVertex2f(80, 10);
        glVertex2f(-80, 10);
    glEnd();
}



void sea(){

    glBegin(GL_POLYGON);   // main
	glColor3ub(168, 241, 255);
        glVertex2f(-80, -50);
        glVertex2f(80, -50);
        glVertex2f(80, -20);
        glVertex2f(65, -19);
        glVertex2f(55, -18);
        glVertex2f(45, -17);
        glVertex2f(35, -16);
        glVertex2f(0, -15);
        glVertex2f(-35, -16);
        glVertex2f(-45, -17);
        glVertex2f(-55, -18);
        glVertex2f(-65, -19);
        glVertex2f(-80, -20);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(-60, -30);
        glVertex2f(-45, -30.5);
        glVertex2f(-35, -30);
        glVertex2f(-35, -29.5);
        glVertex2f(-59, -29);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(-60, -20);
        glVertex2f(-30, -20);
        glVertex2f(-30, -19.5);
        glVertex2f(-33, -18.5);
        glVertex2f(-59, -19.7);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(50, -30);
        glVertex2f(20, -30);
        glVertex2f(20, -29.5);
        glVertex2f(23, -28.5);
        glVertex2f(49, -29.7);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(-20, -28);
        glVertex2f(20, -28);
        glVertex2f(20, -27.5);
        glVertex2f(23, -26.5);
        glVertex2f(-29, -27.7);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(-55, -24);
        glVertex2f(-40, -24.5);
        glVertex2f(-15, -24);
        glVertex2f(-13, -23.5);
        glVertex2f(-13, -22.5);
        glVertex2f(-9, -23.7);
        glVertex2f(-50, -24.5);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(40, -24);
        glVertex2f(65, -24);
        glVertex2f(65, -23);
        glVertex2f(50, -23.5);
        glVertex2f(43, -23);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(-75, -27);
        glVertex2f(-50, -27);
        glVertex2f(-52, -26.5);
        glVertex2f(-75, -26.8);
    glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(147, 224, 240);
        glVertex2f(-15, -20);
        glVertex2f(-5, -20);
        glVertex2f(-4, -21);

        glVertex2f(25, -20);

        glVertex2f(25, -19.3);
        glVertex2f(15, -18.8);

        glVertex2f(10, -19.2);

        glVertex2f(-15, -19.5);
    glEnd();

}
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */




/* Main function: GLUT runs as a console application starting at main()  */




/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glLineWidth(7.5);

    sky();
    sea();
    cloud();
    sun();
    road();

    glFlush();  // Render now
}



/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1920, 1080);// Set the window's initial width & height         // Initialize GLUT
    glutCreateWindow("OpenGL Setup Test");

    glutDisplayFunc(display);// Register display callback handler for window re-paint
    gluOrtho2D(-80.0, 80.0, -50.0, 50.0);
    glutMainLoop();           // Enter the event-processing loop
    return 0;
}
