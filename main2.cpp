// C++ program for the above approach

#include <GL\gl.h>
#include <GL\glu.h>
#include <GL\glaux.h>
#include <GL\glext.h>
#include <GL\glut.h>
#include <iostream>
#include <windows.h>
using namespace std;

// Function to initialize the drivers
void myInit(void)
{
    // Clear all the screen color
    glClearColor(1.0, 1.0, 1.0, 1.0);

    // Sets background color to orang
    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();

    // Specify the display area,  more like end vertex location
    glOrtho(0.0f, 22.0f, 21.0f, 0.0f, 0.0f, 1.0f);
}

// Function to display the Hut like
// structure on the console
void myDisplay(void)
{
    // Clear the screen buffer
    glClear(GL_COLOR_BUFFER_BIT);

    glPointSize(4.0);

    // Color of ground parallellogram(grey)
    glColor3f(0.8f, 0.8f, 0.8f);

    // Begin the polygon
    glBegin(GL_POLYGON);

    // Create the ground parallellogram
    glVertex2i(0, 21);
    glVertex2i(1, 21);

    glVertex2i(1, 20);
    glVertex2i(2, 20);

    glVertex2i(2, 20);
    glVertex2i(1, 21);

    glVertex2i(1, 20);
    glVertex2i(0, 21);

    glEnd();

    // Color of the ground triangle
    glColor3f(0.8f, 0.8f, 0.8f); //glColor3f(1.0f, 0.0f, 0.0f); -> orangish red

    // Begin the polygon
    glBegin(GL_POLYGON);

    // Create the 2nd ground triangle
    glVertex2i(1, 20);
    glVertex2i(2, 20);

    glVertex2i(1, 20);
    glVertex2i(2, 19);

    glVertex2i(2, 19);
    glVertex2i(2, 20);

    glEnd();

    // Color of ground strip
    glColor3f(0.8f, 0.8f, 0.8f);

    // Begin the polygon
    glBegin(GL_POLYGON);

    // Create the ground strip
    glVertex2i(1, 21);
    glVertex2i(22, 21);

    glVertex2i(2, 20);
    glVertex2i(22, 20);

    glVertex2i(22, 20);
    glVertex2i(22, 21);

    glVertex2i(2, 20);
    glVertex2i(1, 21);

    glEnd();



    // Color of big wall
    glColor3f(0.35f, 0.35f, 0.35f); //glColor3f(0.60f, 0.42f, 0.16f); -> brown

    // Begin the polygon
    glBegin(GL_POLYGON);

    // Create the big wall
    glVertex2i(2, 20);
    glVertex2i(2, 8);

    glVertex2i(2, 8);
    glVertex2i(22, 8);

    glVertex2i(22, 8);
    glVertex2i(22, 20);

    glVertex2i(22, 20);
    glVertex2i(2, 20);

    glEnd();



    // Color the perpendicular strip on front wall
    glColor3f(0.0f, 0.0f, 1.0f);//glColor3f(1.0f, 0.0f, 1.0f); -> pink

    // Begin the polygon
    glBegin(GL_POLYGON);

    // Create the perpendicular strip on front wall
    glVertex2i(2, 8);
    glVertex2i(3, 7);

    glVertex2i(3, 7);
    glVertex2i(22, 7);

    glVertex2i(22, 7);
    glVertex2i(22, 8);

    glVertex2i(22, 8);
    glVertex2i(2, 8);

    glEnd();

    // Color the perpendicular strip on perpendicular back wall
    glColor3f(0.0f, 0.0f, 1.0f);

    // Begin the polygon
    glBegin(GL_POLYGON);

    // Create the perpendicular strip on perpendicular back wall
    glVertex2i(3, 7);
    glVertex2i(4, 7);

    glVertex2i(4, 7);
    glVertex2i(11, 0);

    glVertex2i(11, 0);
    glVertex2i(10, 0);

    glVertex2i(10, 0);
    glVertex2i(3, 7);

    glEnd();

    // Color the perpendicular back wall
    glColor3f(0.35f, 0.35f, 0.35f);

    // Begin the polygon
    glBegin(GL_POLYGON);

    // Create the perpendicular back wall
    glVertex2i(4, 7);
    glVertex2i(8, 7);

    glVertex2i(8, 7);
    glVertex2i(15, 0);

    glVertex2i(15, 0);
    glVertex2i(11, 0);

    glVertex2i(11, 0);
    glVertex2i(4, 7);

    glEnd();

    // Sends all output to display
    glFlush();
}

// Driver Code
int main(int argc, char** argv)
{
    // Initialize the init function
    glutInit(&argc, argv);

    // Initialize the toolkit;
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    // Sets the display mode and
    // specify the colour scheme
    glutInitWindowSize(1200, 740);

    // Specify the window size
    glutInitWindowPosition(0, 0);

    // Sets the starting position
    // for the window
    glutCreateWindow("Basic wall structure");

    // Creates the window and
    // sets the title
    glutDisplayFunc(myDisplay);
    myInit();

    // Additional initializations
    glutMainLoop();

    // Go into a loop until event
    // occurs
    return 0;
}