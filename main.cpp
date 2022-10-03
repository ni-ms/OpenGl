#include <GL/glut.h>
#include <math.h>

//LINE SCAN CONVERSION ALGORITHM
void Line(int x0, int y0, int x1, int y1, int value){

    double dy = y1 - y0;
    double dx = x1 - x0;
    double m = dy/dx;
    double y = y0;
    for (int x = x0; x <= x1; ++x) {
        glVertex2i(x, round(y));
        y += m;
    }
    
}
void drawFunc(void){
    for(int x = 0; x< 1000; x++)
        glVertex2i(x,100);
}


void displayMe(void)
{

    //Set the canvas
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    glOrtho(0.0, 500.0, 500.0,0.0 , -1, 1);

    glBegin(GL_POINTS);
    glColor3f(1,1,1);
    Line(200, 200, 400, 300, 1);


    glEnd();
    glFlush();
}
int main(int argc, char** argv)
{

    //Create Window
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("SAMPLE TEST");



    glutDisplayFunc(displayMe);
    glutMainLoop();
    return 0;
}