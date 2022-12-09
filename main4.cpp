#include <GL/Gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>
#include <windows.h>

//! Width of the OpenGL screen output.
const int screenWidth = 1080;
//! Height of the OpenGL screen output.
const int screenHeight = 760;
//! RGB color space is used along with single display buffer mode.
const int mode = GLUT_RGB | GLUT_SINGLE;

//! left bottom
const int pts[][2] = {
        {0, 0},
        {270, 0},
        {300, 150},
        {0, 150}};

//! right bottom
const int pts1[][2] = {
        {810, 0},
        {1080, 0},
        {1080, 150},
        {770, 150}};

//! left stairs_1
const int pts2[][2] = {
        {-40, 200},
        {170, 190},
        {170, 220},
        {-40, 230},
        {-30, 250},
        {180, 240},
        {180, 270},
        {-30, 280},
        {-20, 300},
        {190, 290},
        {190, 320},
        {-20, 330},
        {0, 350}};

//! left stairs_2
const int pts3[][2] = {
        {200, 350},
        {200, 230},
        {170, 190},
        {170, 220},
        {180, 240},
        {180, 270},
        {190, 290},
        {190, 320},
        {200, 340}};

//! right stairs_1
const int pts4[][2] = {
        {1120, 200},
        {910, 190},
        {910, 220},
        {1120, 230},
        {1110, 250},
        {900, 240},
        {900, 270},
        {1110, 280},
        {1100, 300},
        {890, 290},
        {890, 320},
        {1100, 330},
        {1080, 350}};

//! right stairs_2
const int pts5[][2] = {
        {880, 350},
        {880, 230},
        {910, 190},
        {910, 220},
        {900, 240},
        {900, 270},
        {890, 290},
        {890, 320},
        {880, 340}};

//! top_mid
const int pts6[][2] = {
        {280, 480},
        {280, 620},
        {800, 620},
        {800, 480}};

//! windows
const int pts7[][2] = {
        {310, 490},
        {310, 600},
        {420, 600},
        {420, 490}};

const int pts8[][2] = {
        {320, 500},
        {320, 590},
        {410, 590},
        {410, 500}};

const int pts9[][2] = {
        {460, 490},
        {460, 600},
        {620, 600},
        {620, 490}};

const int pts10[][2] = {
        {470, 500},
        {470, 590},
        {610, 590},
        {610, 500}};

const int pts11[][2] = {
        {660, 490},
        {660, 600},
        {770, 600},
        {770, 490}};

const int pts12[][2] = {
        {670, 500},
        {670, 590},
        {760, 590},
        {760, 500}};

const int pts13[][2] = {
        {120, 520},
        {120, 560},
        {240, 560},
        {240, 520}};

const int pts14[][2] = {
        {840, 520},
        {840, 560},
        {960, 560},
        {960, 520}};

const int pts15[][2] = {
        {320, 620},
        {320, 680},
        {360, 680},
        {360, 620},
        {440, 620},
        {440, 680},
        {480, 680},
        {480, 620},
        {600, 620},
        {600, 680},
        {640, 680},
        {640, 620},
        {720, 620},
        {720, 680},
        {760, 680},
        {760, 620}};

// Lines

//! walkway_1
const int p0[2] = {280, 40};
const int p1[2] = {800, 40};

//! walkway_2
const int p2[2] = {288, 80};
const int p3[2] = {788, 80};

//! walkway_3
const int p4[2] = {294, 120};
const int p5[2] = {780, 120};

//! stairs bottom_1
const int p6[2] = {170, 190};
const int p7[2] = {910, 190};

//! stairs bottom_2
const int p8[2] = {200, 230};
const int p9[2] = {880, 230};

//! stairs left
const int p10[2] = {200, 230};
const int p11[2] = {200, 350};

//! stairs right
const int p12[2] = {880, 230};
const int p13[2] = {880, 350};

//! platform
const int p14[2] = {0, 350};
const int p15[2] = {1080, 350};

//! mid_1
const int p16[2] = {0, 480};
const int p17[2] = {1080, 480};

//! mid_2
const int p18[2] = {240, 480};
const int p19[2] = {240, 350};

//! mid_3
const int p20[2] = {840, 480};
const int p21[2] = {840, 350};

//! top left
const int p22[2] = {0, 620};
const int p23[2] = {80, 600};
const int p24[2] = {80, 480};
const int p25[2] = {280, 600};

//! top right
const int p26[2] = {1080, 620};
const int p27[2] = {1000, 600};
const int p28[2] = {1000, 480};
const int p29[2] = {800, 600};

//! window lines
const int p30[2] = {160, 520};
const int p31[2] = {160, 560};
const int p32[2] = {200, 520};
const int p33[2] = {200, 560};

const int p34[2] = {920, 520};
const int p35[2] = {920, 560};
const int p36[2] = {880, 560};
const int p37[2] = {880, 520};

const int p38[2] = {350, 500};
const int p39[2] = {350, 590};
const int p40[2] = {380, 500};
const int p41[2] = {380, 590};
const int p42[2] = {320, 560};
const int p43[2] = {410, 560};
const int p44[2] = {320, 530};
const int p45[2] = {410, 530};

const int p46[2] = {700, 500};
const int p47[2] = {700, 590};
const int p48[2] = {730, 500};
const int p49[2] = {730, 590};
const int p50[2] = {670, 560};
const int p51[2] = {760, 560};
const int p52[2] = {670, 530};
const int p53[2] = {760, 530};

const int p54[2] = {490, 500};
const int p55[2] = {490, 590};
const int p56[2] = {520, 500};
const int p57[2] = {520, 590};
const int p58[2] = {560, 500};
const int p59[2] = {560, 590};
const int p60[2] = {590, 590};
const int p61[2] = {590, 500};
const int p62[2] = {470, 560};
const int p63[2] = {610, 560};
const int p64[2] = {470, 530};
const int p65[2] = {610, 530};

//! Roof Lines
const int p66[2] = {360, 670};
const int p67[2] = {440, 670};
const int p68[2] = {480, 670};
const int p69[2] = {600, 670};
const int p70[2] = {640, 670};
const int p71[2] = {720, 670};

//! Circle Lines
const int p72[2] = {485, 410};
const int p73[2] = {500, 410};
const int p74[2] = {580, 410};
const int p75[2] = {595, 410};
const int p76[2] = {540, 370};
const int p77[2] = {518, 442};
const int p78[2] = {562, 442};

//! Circles
const int center[2] = {540, 410};
const int radius = 40;

// Basic Routines

/*! \brief Plots a point on the OpenGL window based on the coordinates provided.
 *
 * @param x The x coordinate of the point to be plotted.
 * @param y The y coordinate of the point to be plotted.
 */
void drawDot(GLint x, GLint y) {
    glBegin(GL_POINTS);
    glVertex2i(x, y);
    glEnd();
}

/*! \brief Swaps two integer values.
 *
 * @param a The first value that needs to be swapped.
 * @param b The second value that needs to be swapped.
 */
void swap(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< myInit >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
/*! \brief Initializes several state variables of the OpenGL system with appropriate values.
 *
 * Background color is set to white. Drawing color is set to black. Point size is set to 2 pixels. The matrix mode is set to projection mode.
 */
void myInit(void) {
    glClearColor(1.0, 1.0, 1.0, 0.0);				 // sets the background color to a bright white
    glColor3f(0.0f, 0.0f, 0.0f);					 // sets the drawing color to black
    glPointSize(2.0);								 // sets the point size to 1 x 1 pixels
    glMatrixMode(GL_PROJECTION);					 // sets up the appropriate matrices
    glLoadIdentity();								 // TBE
    gluOrtho2D(0.0, screenWidth, 0.0, screenHeight); // TBE
}

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< Drawing Algorithms >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

/*! \brief Line drawing subroutine.
 *
 * This is an implementation of Bresenham Line algorithm for any two points in a cartesian coordinate system.
 * @param x0 The x coordinate of the starting point.
 * @param y0 The y coordinate of the starting point.
 * @param x1 The x coordinate of the end point.
 * @param y1 The y coordinate of the end point.
 */
void lineplot(int x0, int y0, int x1, int y1) {
    int dy = y1 - y0; // = a
    int dx = x1 - x0; // = -b

    // This is so that the line is always drawn towards positive x direction. This helps remove the minor issue of the line from P1 to P0 and the line from P0 to P1 not being rendered exactly the same (check slides, the Issues topic under Bresenham's technique).
    if (dx < 0) {
        swap(x0, x1);
        swap(y0, y1);
        dy = y1 - y0;
        dx = x1 - x0;
    }

    /*
        Dividing render routine into 4 subcategories:
        1) when m > 0 and dy < dx
        2) when m > 0 and dy > dx
        3) when m < 0 and dy < dx
        4) when m < 0 and dy > dx
    */
    if (dy >= 0 && abs(dy) <= dx) {
        int d = 2 * dy - dx;

        int incrE = 2 * dy;
        int incrNE = 2 * (dy - dx);

        int x = x0, y = y0;
        drawDot(x, y);

        while (x < x1) {
            if (d <= 0) { // choose E
                d += incrE;
            } else { // choose NE
                d += incrNE;
                y++;
            }
            x++;
            drawDot(x, y);
        }
    } else if (dy >= 0 && abs(dy) > dx) {
        int d = dy - 2 * dx;

        int incrN = -2 * dx;
        int incrNE = 2 * (dy - dx);

        int x = x0, y = y0;
        drawDot(x, y);

        while (y < y1) {
            if (d <= 0) { // choose NE
                d += incrNE;
                x++;
            } else { // choose N
                d += incrN;
            }
            y++;
            drawDot(x, y);
        }
    } else if (dy < 0 && abs(dy) <= dx) {
        int d = 2 * dy + dx;

        int incrE = 2 * dy;
        int incrSE = 2 * (dy + dx);

        int x = x0, y = y0;
        drawDot(x, y);

        while (x < x1) {
            if (d <= 0) { // choose SE
                d += incrSE;
                y--;
            } else { // choose E
                d += incrE;
            }
            x++;
            drawDot(x, y);
        }
    } else if (dy < 0 && abs(dy) > dx) {
        int d = dy + 2 * dx;

        int incrS = 2 * dx;
        int incrSE = 2 * (dy + dx);

        int x = x0, y = y0;
        drawDot(x, y);

        while (y > y1) {
            if (d <= 0) { // choose S
                d += incrS;
            } else { // choose SE
                d += incrSE;
                x++;
            }
            y--;
            drawDot(x, y);
        }
    }
}

/*! \brief Draws set of eight points for any given point in a circle.
 *
 * As for drawing circle, 8-lines of symmetry can be used, so this function draws set of eight points for any given point.
 * @param x The x coordinate of the point to be plotted.
 * @param y The y coordinate of the point to be plotted.
 * @param x0 Amount of x value by which the circle needs to be translated about its center.
 * @param y0 Amount of y value by which the circle needs to be translated about its center.
 */
void drawCircle(GLint x, GLint y, GLint x0, GLint y0) {
    glBegin(GL_POINTS);
    glVertex2i(x + x0, y + y0);
    glVertex2i(x + x0, -y + y0);
    glVertex2i(-x + x0, y + y0);
    glVertex2i(-x + x0, -y + y0);
    glVertex2i(y + x0, x + y0);
    glVertex2i(y + x0, -x + y0);
    glVertex2i(-y + x0, x + y0);
    glVertex2i(-y + x0, -x + y0);
    glEnd();
}

/*! \brief Draws set of four points for any given point in a semicircle.
 *
 * As for drawing semicircle, 4-lines of symmetry can be used, so this function draws set of four points for any given point.
 * @param x The x coordinate of the point to be plotted.
 * @param y The y coordinate of the point to be plotted.
 * @param x0 Amount of x value by which the semicircle needs to be translated about its center.
 * @param y0 Amount of y value by which the semicircle needs to be translated about its center.
 */
void drawHalfCircle(GLint x, GLint y, GLint x0, GLint y0) {
    glBegin(GL_POINTS);
    glVertex2i(x + x0, y + y0);
    glVertex2i(-x + x0, y + y0);
    glVertex2i(y + x0, x + y0);
    glVertex2i(-y + x0, x + y0);
    glEnd();
}

/*! \brief Circle drawing subroutine.
 *
 * This function only calculates the points for one half of a quadrant, and the rest parts are drawn exploiting the 8-line of symmetry of a circle.
 * @param x0 Amount of x value by which the circle needs to be translated about its center.
 * @param y0 Amount of y value by which the circle needs to be translated about its center.
 * @param r The radius of the circle.
 */
void circlePlot(int x0, int y0, int r) {
    int x = 0;
    int y = r;
    int d = 1 - r;
    int deltaE = 3;
    int deltaSE = -2 * r + 5;

    drawCircle(x, y, x0, y0);

    while (y > x) {
        if (d < 0) {
            d += deltaE;
            deltaE += 2;
            deltaSE += 2;
        } else {
            d += deltaSE;
            deltaE += 2;
            deltaSE += 4;
            y--;
        }
        x++;

        drawCircle(x, y, x0, y0);
    }
}

/*! \brief Semi-circle drawing subroutine.
 *
 * Draws the top half of the semicircle. This function only calculates the points for one half of a quadrant, and the rest parts are drawn using symmetry.
 * @param x0 Amount of x value by which the semicircle needs to be translated about its center.
 * @param y0 Amount of y value by which the semicircle needs to be translated about its center.
 * @param r The radius of the semicircle.
 */
void halfcirclePlot(int x0, int y0, int r) {
    int x = 0;
    int y = r;
    int d = 1 - r;
    int deltaE = 3;
    int deltaSE = -2 * r + 5;

    drawHalfCircle(x, y, x0, y0);

    while (y > x) {
        if (d < 0) {
            d += deltaE;
            deltaE += 2;
            deltaSE += 2;
        } else {
            d += deltaSE;
            deltaE += 2;
            deltaSE += 4;
            y--;
        }
        x++;

        drawHalfCircle(x, y, x0, y0);
    }
}

/*! \brief Ellipse drawing subroutine.
 *
 * Draws one quarter of an ellipse and makes use of the 4-line of symmetry of ellipse, to draw the other three quadrants.
 * @param a Length of the major axis of the ellipse.
 * @param n Length of the minor axis of the ellipse.
 * @param valx Amount of x value by which the ellipse needs to be translated about its center.
 * @param valy Amount of y value by which the ellipse needs to be translated about its center.
 */
void drawEllipse(int a, int b, GLint valx, GLint valy) {
    double d2;
    int x = 0;
    int y = b;
    double d1 = (b * b) - (a * a * b) + (0.25 * a * a);

    // plot point
    glVertex2i(x + valx, y + valy);

    while ((a * a) * (y - 0.5) > (b * b) * (x + 1)) {
        // region 1
        if (d1 < 0) // select e
            d1 += b * b * (2 * x + 3);
        else {
            d1 += b * b * (2 * x + 3) + a * a * (-2 * y + 2);
            y--;
        }
        x++;
        glVertex2i(x + valx, y + valy);
        glVertex2i(-x + valx, y + valy);
    }
    d2 = ((b * b) * (x + 0.5) * (x + 0.5)) + (a * a * (y - 1) * (y - 1)) - (a * a * b * b);
    while (y > 0) {
        // region 2
        if (d2 < 0) {
            d2 += (b * b * (2 * x + 2)) + ((a * a) * (-2 * y + 3));
            x++;
        } else
            d2 += ((a * a) * (-2 * y + 3));
        y--;
        glVertex2i(x + valx, y + valy);
        glVertex2i(-x + valx, y + valy);
    }
}

/*! \brief Plots the lines in a cyclic loop to create a polygon.
 *
 * @param pts Array of vertices of the polygon.
 * @param n Number of points in the polygon.
 */
void drawPolygon(const int pts[][2], int n) {
    for (int i = 0; i < n; ++i)
        lineplot(pts[i][0], pts[i][1], pts[(i + 1) % n][0], pts[(i + 1) % n][1]);
}

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< Display Function >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

/*! \brief The myDisplay function calls all the other drawing subroutines.
 *
 * All the things that would be displayed in the OpenGL window, would be initiated from this function.
 */
void myDisplay(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    int sz = sizeof(pts) / sizeof(pts[0]);
    drawPolygon(pts, sz);
    sz = sizeof(pts1) / sizeof(pts1[0]);
    drawPolygon(pts1, sz);
    sz = sizeof(pts2) / sizeof(pts2[0]);
    drawPolygon(pts2, sz);
    sz = sizeof(pts3) / sizeof(pts3[0]);
    drawPolygon(pts3, sz);
    sz = sizeof(pts4) / sizeof(pts4[0]);
    drawPolygon(pts4, sz);
    sz = sizeof(pts5) / sizeof(pts5[0]);
    drawPolygon(pts5, sz);
    sz = sizeof(pts6) / sizeof(pts6[0]);
    drawPolygon(pts6, sz);
    sz = sizeof(pts7) / sizeof(pts7[0]);
    drawPolygon(pts7, sz);
    sz = sizeof(pts8) / sizeof(pts8[0]);
    drawPolygon(pts8, sz);
    sz = sizeof(pts9) / sizeof(pts9[0]);
    drawPolygon(pts9, sz);
    sz = sizeof(pts10) / sizeof(pts10[0]);
    drawPolygon(pts10, sz);
    sz = sizeof(pts11) / sizeof(pts11[0]);
    drawPolygon(pts11, sz);
    sz = sizeof(pts12) / sizeof(pts12[0]);
    drawPolygon(pts12, sz);
    sz = sizeof(pts13) / sizeof(pts13[0]);
    drawPolygon(pts13, sz);
    sz = sizeof(pts14) / sizeof(pts14[0]);
    drawPolygon(pts14, sz);
    sz = sizeof(pts15) / sizeof(pts15[0]);
    drawPolygon(pts15, sz);

    lineplot(p0[0], p0[1], p1[0], p1[1]);
    lineplot(p2[0], p2[1], p3[0], p3[1]);
    lineplot(p4[0], p4[1], p5[0], p5[1]);
    lineplot(p6[0], p6[1], p7[0], p7[1]);
    lineplot(p8[0], p8[1], p9[0], p9[1]);
    lineplot(p10[0], p10[1], p11[0], p11[1]);
    lineplot(p12[0], p12[1], p13[0], p13[1]);
    lineplot(p14[0], p14[1], p15[0], p15[1]);
    lineplot(p16[0], p16[1], p17[0], p17[1]);
    lineplot(p18[0], p18[1], p19[0], p19[1]);
    lineplot(p20[0], p20[1], p21[0], p21[1]);
    lineplot(p22[0], p22[1], p23[0], p23[1]);
    lineplot(p23[0], p23[1], p24[0], p24[1]);
    lineplot(p23[0], p23[1], p25[0], p25[1]);
    lineplot(p26[0], p26[1], p27[0], p27[1]);
    lineplot(p27[0], p27[1], p28[0], p28[1]);
    lineplot(p27[0], p27[1], p29[0], p29[1]);
    lineplot(p30[0], p30[1], p31[0], p31[1]);
    lineplot(p32[0], p32[1], p33[0], p33[1]);
    lineplot(p34[0], p34[1], p35[0], p35[1]);
    lineplot(p36[0], p36[1], p37[0], p37[1]);
    lineplot(p38[0], p38[1], p39[0], p39[1]);
    lineplot(p40[0], p40[1], p41[0], p41[1]);
    lineplot(p42[0], p42[1], p43[0], p43[1]);
    lineplot(p44[0], p44[1], p45[0], p45[1]);
    lineplot(p46[0], p46[1], p47[0], p47[1]);
    lineplot(p48[0], p48[1], p49[0], p49[1]);
    lineplot(p50[0], p50[1], p51[0], p51[1]);
    lineplot(p52[0], p52[1], p53[0], p53[1]);
    lineplot(p54[0], p54[1], p55[0], p55[1]);
    lineplot(p56[0], p56[1], p57[0], p57[1]);
    lineplot(p58[0], p58[1], p59[0], p59[1]);
    lineplot(p60[0], p60[1], p61[0], p61[1]);
    lineplot(p62[0], p62[1], p63[0], p63[1]);
    lineplot(p64[0], p64[1], p65[0], p65[1]);
    lineplot(p66[0], p66[1], p67[0], p67[1]);
    lineplot(p68[0], p68[1], p69[0], p69[1]);
    lineplot(p70[0], p70[1], p71[0], p71[1]);
    lineplot(p72[0], p72[1], p73[0], p73[1]);
    lineplot(p74[0], p74[1], p75[0], p75[1]);
    lineplot(p76[0], p76[1], p77[0], p77[1]);
    lineplot(p76[0], p76[1], p78[0], p78[1]);

    circlePlot(center[0], center[1], radius);
    halfcirclePlot(center[0], center[1], radius + 15);

    glBegin(GL_POINTS);
    drawEllipse(140, 55, 540, 670);
    drawEllipse(60, 40, 540, 719);
    drawEllipse(90, 150, 540, -40);
    glEnd();

    glFlush();
}

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< main >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

/*! \brief The main function from where all the other functions are called.
 *
 * @param argc The count of arguments passed.
 * @param argv The argument list passed.
 */
int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(mode);
    glutInitWindowSize(screenWidth, screenHeight);
    glutInitWindowPosition(200, 20);
    glutCreateWindow("Block-C");
    myInit();
    glutDisplayFunc(myDisplay);
    glutMainLoop();
}