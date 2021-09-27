#include <GLFW/glfw3.h>
#include <iostream>
#include <list>
#include <iterator>
#include <math.h>

using namespace std;

/*
 * CLASSES DECLARATION
 */

// Rectangle class
class Rectangle{
public:
    double x=190, y=250;
    double prevY = 0;
    int red = 0, green = 0, blue = 0;
    int size = 50;
    int counter = 0;

    void display_bola()
{
    int theta;
    glPushMatrix();
    int gerak;
    gerak = glfwGetTime()*-100;
    glTranslatef(200,550,0);



    glTranslatef(210.5, 220.5, 0);
    glRotatef(gerak,0,0,0);
    glTranslatef(-210.5, -220.5, 0);
    glBegin(GL_POLYGON);
    glColor3d(0.78,0.408,0.137);
    for(int i=0;i<360;i++)
        {
            theta=i*3.142/180;
            glVertex2f((x+size)+15*cos(theta),y+(size)+15*sin(theta));

        }
    glEnd();
    glPopMatrix();
}



    GLboolean isRectangleSelected(double xpos, double ypos){return GL_TRUE;}
    void doIfSelected(double xpos, double ypos){}
    void doIfKeyPressed(int key, int action){}
    void doIfClicked(int button, int action, double xpos, double ypos)
    {
        if (button == GLFW_MOUSE_BUTTON_LEFT && action == GLFW_PRESS){
                x = xpos;
                y = ypos;
        }
    }

};
Rectangle rect;

/*
 * CALLBACKS FUNCTIONS
 */

 void display()
 {
  glClearColor(0.325f,0.914f,0.878f, 1.0f); //warna background
  glClear(GL_COLOR_BUFFER_BIT);

  // TEMBOK TERANG

  glColor3f(0.859f,0.859f,0.859f);
    glBegin(GL_QUADS);
        glVertex3d(793.0f, 531.5f, 0);
        glVertex3d(585.5f, 653.5f, 0);
        glVertex3d(585.5f, 797.5f, 0);
        glVertex3d(795.5f, 673.5f, 0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(691.0f, 273.5f, 0);
        glVertex3d(691.0f, 399.0f, 0);
        glVertex3d(481.0f, 523.5f, 0);
        glVertex3d(481.0f, 396.0f, 0);
    glEnd();

    // GENTENG
    glColor3f(0.239,0.345,0.427);
    glBegin(GL_QUADS);
        glVertex3d(694.0f, 397.5f, 0);
        glVertex3d(802.5f, 526.0f, 0);
        glVertex3d(584.5f, 653.5f, 0);
        glVertex3d(477.0f, 526.0f, 0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(592.5f, 287.0f, 0);
        glVertex3d(699.0f, 260.0f, 0);
        glVertex3d(479.0f, 388.5f, 0);
        glVertex3d(372.0f, 417.0f, 0);
    glEnd();

    // Bayangan Genteng

    glColor3f(0.337,0.392,0.443);
    glBegin(GL_QUADS);
        glVertex3d(699.0f, 260.0f, 0);
        glVertex3d(479.0f, 388.5f, 0);
        glVertex3d(482.5f, 395.5f, 0);
        glVertex3d(700.5f, 267.0f, 0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(479.0f, 388.5f, 0);
        glVertex3d(372.0f, 417.0f, 0);
        glVertex3d(370.5f, 426.0f, 0);
        glVertex3d(482.5f, 395.5f, 0);
    glEnd();

    // Bayangan genteng Bawah
    glBegin(GL_QUADS);
        glVertex3d(477.0f, 526.0f, 0);
        glVertex3d(584.5f, 653.5f, 0);
        glVertex3d(577.0f, 657.5f,0);
        glVertex3d(477.0f, 541.5f,0);
    glEnd();

    // Tembok Samping
    glColor3f(0.671,0.718,0.718);
    glBegin(GL_QUADS);
        glVertex3d(380.0f, 423.0f, 0);
        glVertex3d(482.5f, 395.5f, 0);
        glVertex3d(482.5f, 521.0f, 0);
        glVertex3d(380.5f, 600.0f, 0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(479.0f, 517.5f, 0);
        glVertex3d(463.5f, 726.0f, 0);
        glVertex3d(380.0f, 677.0f, 0);
        glVertex3d(380.0f, 599.5f, 0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(476.5f, 541.5f, 0);
        glVertex3d(463.5f, 726.0f, 0);
        glVertex3d(576.5f, 791.5f, 0);
        glVertex3d(576.5f, 657.5f, 0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(576.5f, 791.5f, 0);
        glVertex3d(576.5f, 657.5f, 0);
        glVertex3d(585.5f, 653.5f, 0);
        glVertex3d(585.5f, 796.5f, 0);
    glEnd();

    // bayangan bawah banget

    glColor3f(0.918,0.937,0.945);
    glBegin(GL_QUADS);
        glVertex3d(380.0f, 677.5f, 0);
        glVertex3d(380.0f, 680.5f, 0);
        glVertex3d(584.5f, 800.5f, 0);
         glVertex3d(584.5f, 796.5f, 0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(584.5f, 800.5f, 0);
        glVertex3d(584.5f, 796.5f, 0);
        glVertex3d(795.0f, 674.5f, 0);
        glVertex3d(801.0f, 674.5f, 0);
    glEnd();

    // bagian bawah banget
    glColor3f(0.745,0.765,0.78);
    glBegin(GL_QUADS);
         glVertex3d(380.0f, 681.5f, 0);
         glVertex3d(380.0f, 701.0f, 0);
         glVertex3d(584.5f, 823.5f, 0);
         glVertex3d(584.5f, 800.5f, 0);
    glEnd();

    glBegin(GL_QUADS);
         glVertex3d(584.5f, 823.5f, 0);
         glVertex3d(584.5f, 800.5f, 0);
         glVertex3d(801.0f, 674.5f, 0);
         glVertex3d(801.0f, 695.0f, 0);
    glEnd();

    // RUMPUT
    glColor3f(0.412,0.792,0.404);
    glBegin(GL_TRIANGLES);
         glVertex3d(380.0f, 701.0f, 0);
         glVertex3d(197.0f, 797.0f, 0);
         glVertex3d(374.0f, 908.0f, 0);
    glEnd();

    glBegin(GL_POLYGON);
         glVertex3d(584.5f, 823.5f, 0);
         glVertex3d(380.0f, 701.0f, 0);
         glVertex3d(373.0f, 908.0f, 0);
         glVertex3d(479.0f, 973.0f, 0);
    glEnd();

     glBegin(GL_POLYGON);
         glVertex3d(584.5f, 823.5f, 0);
         glVertex3d(479.0f, 973.0f, 0);
         glVertex3d(610.0f, 1055.0f, 0);
         glVertex3d(720.0f, 981.0f, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
         glVertex3d(801.0f, 695.0f, 0);
         glVertex3d(852.0f, 899.0f, 0);
         glVertex3d(1011.0f, 796.0f, 0);
    glEnd();

    glBegin(GL_POLYGON);
         glVertex3d(584.5f, 823.5f, 0);
         glVertex3d(720.0f, 981.0f, 0);
         glVertex3d(852.0f, 899.0f, 0);
         glVertex3d(801.0f, 695.0f, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
         glVertex3d(380.0f, 701.0f, 0);
         glVertex3d(197.0f, 797.0f, 0);
         glVertex3d(81.0f, 727.0f, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
         glVertex3d(380.0f, 701.0f, 0);
         glVertex3d(81.0f, 727.0f, 0);
         glVertex3d(381,597,0);
    glEnd();

 glFlush();

 }


void display_jendela()
{
    glPushMatrix();            // JENDELA KANAN BAWAH
    glTranslatef(-45,20,0);
    glColor3f( 0.741,0.765,0.78);
    glBegin(GL_QUADS);       // badan jendela
        glVertex3d(732.0f, 618.0f, 0);
        glVertex3d(732.0f, 678.0f, 0);
        glVertex3d(694.0f, 700.5f, 0);
        glVertex3d(694.0f, 640.5f, 0);
    glEnd();

    glColor3f(0.937,0.953,0.965);
    glBegin(GL_QUADS);       // bayangan
        glVertex3d(694.0f, 700.75f, 0);
        glVertex3d(694.0f, 640.5f, 0);
        glVertex3d(691.0f, 695.5f, 0);
        glVertex3d(691.5f, 638.5f, 0);
    glEnd();

    glBegin(GL_QUADS);       // bayangan 2
        glVertex3d(694.0f, 640.5f, 0);
        glVertex3d(691.5f, 638.5f, 0);
        glVertex3d(729.0f, 616.0f, 0);
        glVertex3d(732.0f, 618.0f, 0);
    glEnd();

    glColor3f(0.337,0.392,0.443);
    glBegin(GL_QUADS);       // kaca
        glVertex3d(698.0f, 643.5f, 0);
        glVertex3d(710.5f, 636.5f, 0);
        glVertex3d(710.5f, 650.5f, 0);
        glVertex3d(698.0f, 658.0f, 0);
    glEnd();

    glBegin(GL_QUADS);       // kaca 2
        glVertex3d(715.5f, 633.0f, 0);
        glVertex3d(727.0f, 626.5f, 0);
        glVertex3d(727.0f, 640.5f, 0);
        glVertex3d(715.5f, 647.0f, 0);
    glEnd();

    glBegin(GL_QUADS);       // kaca 3
        glVertex3d(698.0f, 663.0f, 0);
        glVertex3d(710.5f, 656.5f, 0);
        glVertex3d(710.5f, 667.0f, 0);
        glVertex3d(698.0f, 673.5f, 0);
    glEnd();

    glBegin(GL_QUADS);       // kaca 4
        glVertex3d(715.5f, 652.5f, 0);
        glVertex3d(727.0f, 646.5f, 0);
        glVertex3d(727.0f, 657.5f, 0);
        glVertex3d(715.5f, 664.0f, 0);
    glEnd();

    glBegin(GL_QUADS);       // kaca 5
        glVertex3d(698.0f, 680.0f, 0);
        glVertex3d(710.0f, 673.5f, 0);
        glVertex3d(710.0f, 685.0f, 0);
        glVertex3d(698.0f, 692.0f, 0);
    glEnd();

    glBegin(GL_QUADS);       // kaca 6
        glVertex3d(715.5f, 670.0f, 0);
        glVertex3d(727.0f, 663.5f, 0);
        glVertex3d(727.0f, 675.0f, 0);
        glVertex3d(715.5f, 682.0f, 0);
    glEnd();

    glPopMatrix();

    glPushMatrix();            // JENDELA KIRI BAWAH
    glTranslatef(30,-20,0);
    glColor3f( 0.741,0.765,0.78);
    glBegin(GL_QUADS);       // badan jendela
        glVertex3d(732.0f, 618.0f, 0);
        glVertex3d(732.0f, 678.0f, 0);
        glVertex3d(694.0f, 700.5f, 0);
        glVertex3d(694.0f, 640.5f, 0);
    glEnd();

    glColor3f(0.937,0.953,0.965);
    glBegin(GL_QUADS);       // bayangan
        glVertex3d(694.0f, 700.75f, 0);
        glVertex3d(694.0f, 640.5f, 0);
        glVertex3d(691.0f, 695.5f, 0);
        glVertex3d(691.5f, 638.5f, 0);
    glEnd();

    glBegin(GL_QUADS);       // bayangan 2
        glVertex3d(694.0f, 640.5f, 0);
        glVertex3d(691.5f, 638.5f, 0);
        glVertex3d(729.0f, 616.0f, 0);
        glVertex3d(732.0f, 618.0f, 0);
    glEnd();

    glColor3f(0.337,0.392,0.443);
    glBegin(GL_QUADS);       // kaca
        glVertex3d(698.0f, 643.5f, 0);
        glVertex3d(710.5f, 636.5f, 0);
        glVertex3d(710.5f, 650.5f, 0);
        glVertex3d(698.0f, 658.0f, 0);
    glEnd();

    glBegin(GL_QUADS);       // kaca 2
        glVertex3d(715.5f, 633.0f, 0);
        glVertex3d(727.0f, 626.5f, 0);
        glVertex3d(727.0f, 640.5f, 0);
        glVertex3d(715.5f, 647.0f, 0);
    glEnd();

    glBegin(GL_QUADS);       // kaca 3
        glVertex3d(698.0f, 663.0f, 0);
        glVertex3d(710.5f, 656.5f, 0);
        glVertex3d(710.5f, 667.0f, 0);
        glVertex3d(698.0f, 673.5f, 0);
    glEnd();

    glBegin(GL_QUADS);       // kaca 4
        glVertex3d(715.5f, 652.5f, 0);
        glVertex3d(727.0f, 646.5f, 0);
        glVertex3d(727.0f, 657.5f, 0);
        glVertex3d(715.5f, 664.0f, 0);
    glEnd();

    glBegin(GL_QUADS);       // kaca 5
        glVertex3d(698.0f, 680.0f, 0);
        glVertex3d(710.0f, 673.5f, 0);
        glVertex3d(710.0f, 685.0f, 0);
        glVertex3d(698.0f, 692.0f, 0);
    glEnd();

    glBegin(GL_QUADS);       // kaca 6
        glVertex3d(715.5f, 670.0f, 0);
        glVertex3d(727.0f, 663.5f, 0);
        glVertex3d(727.0f, 675.0f, 0);
        glVertex3d(715.5f, 682.0f, 0);
    glEnd();

    glPopMatrix();

    glPushMatrix();            // JENDELA ATAS  KANAN
    glTranslatef(-80,-285,0);
    glColor3f( 0.741,0.765,0.78);
    glBegin(GL_QUADS);       // badan jendela
        glVertex3d(732.0f, 618.0f, 0);
        glVertex3d(732.0f, 678.0f, 0);
        glVertex3d(694.0f, 700.5f, 0);
        glVertex3d(694.0f, 640.5f, 0);
    glEnd();

    glColor3f(0.937,0.953,0.965);
    glBegin(GL_QUADS);       // bayangan
        glVertex3d(694.0f, 700.75f, 0);
        glVertex3d(694.0f, 640.5f, 0);
        glVertex3d(691.0f, 695.5f, 0);
        glVertex3d(691.5f, 638.5f, 0);
    glEnd();

    glBegin(GL_QUADS);       // bayangan 2
        glVertex3d(694.0f, 640.5f, 0);
        glVertex3d(691.5f, 638.5f, 0);
        glVertex3d(729.0f, 616.0f, 0);
        glVertex3d(732.0f, 618.0f, 0);
    glEnd();

    glColor3f(0.337,0.392,0.443);
    glBegin(GL_QUADS);       // kaca
        glVertex3d(698.0f, 643.5f, 0);
        glVertex3d(710.5f, 636.5f, 0);
        glVertex3d(710.5f, 650.5f, 0);
        glVertex3d(698.0f, 658.0f, 0);
    glEnd();

    glBegin(GL_QUADS);       // kaca 2
        glVertex3d(715.5f, 633.0f, 0);
        glVertex3d(727.0f, 626.5f, 0);
        glVertex3d(727.0f, 640.5f, 0);
        glVertex3d(715.5f, 647.0f, 0);
    glEnd();

    glBegin(GL_QUADS);       // kaca 3
        glVertex3d(698.0f, 663.0f, 0);
        glVertex3d(710.5f, 656.5f, 0);
        glVertex3d(710.5f, 667.0f, 0);
        glVertex3d(698.0f, 673.5f, 0);
    glEnd();

    glBegin(GL_QUADS);       // kaca 4
        glVertex3d(715.5f, 652.5f, 0);
        glVertex3d(727.0f, 646.5f, 0);
        glVertex3d(727.0f, 657.5f, 0);
        glVertex3d(715.5f, 664.0f, 0);
    glEnd();

    glBegin(GL_QUADS);       // kaca 5
        glVertex3d(698.0f, 680.0f, 0);
        glVertex3d(710.0f, 673.5f, 0);
        glVertex3d(710.0f, 685.0f, 0);
        glVertex3d(698.0f, 692.0f, 0);
    glEnd();

    glBegin(GL_QUADS);       // kaca 6
        glVertex3d(715.5f, 670.0f, 0);
        glVertex3d(727.0f, 663.5f, 0);
        glVertex3d(727.0f, 675.0f, 0);
        glVertex3d(715.5f, 682.0f, 0);
    glEnd();

    glPopMatrix();

    glPushMatrix();            // JENDELA ATAS  KIRI
    glTranslatef(-155,-240,0);
    glColor3f( 0.741,0.765,0.78);
    glBegin(GL_QUADS);       // badan jendela
        glVertex3d(732.0f, 618.0f, 0);
        glVertex3d(732.0f, 678.0f, 0);
        glVertex3d(694.0f, 700.5f, 0);
        glVertex3d(694.0f, 640.5f, 0);
    glEnd();

    glColor3f(0.937,0.953,0.965);
    glBegin(GL_QUADS);       // bayangan
        glVertex3d(694.0f, 700.5f, 0);
        glVertex3d(694.0f, 640.5f, 0);
        glVertex3d(691.0f, 638.5f, 0);
        glVertex3d(691.0f, 669.0f, 0);
    glEnd();

    glBegin(GL_QUADS);       // bayangan 2
        glVertex3d(694.0f, 640.5f, 0);
        glVertex3d(691.5f, 638.5f, 0);
        glVertex3d(732.0f, 616.0f, 0);
        glVertex3d(732.0f, 618.0f, 0);
    glEnd();

    glColor3f(0.337,0.392,0.443);
    glBegin(GL_QUADS);       // kaca
        glVertex3d(698.0f, 643.5f, 0);
        glVertex3d(710.5f, 636.5f, 0);
        glVertex3d(710.5f, 650.5f, 0);
        glVertex3d(698.0f, 658.0f, 0);
    glEnd();

    glBegin(GL_QUADS);       // kaca 2
        glVertex3d(715.5f, 633.0f, 0);
        glVertex3d(727.0f, 626.5f, 0);
        glVertex3d(727.0f, 640.5f, 0);
        glVertex3d(715.5f, 647.0f, 0);
    glEnd();

    glBegin(GL_QUADS);       // kaca 3
        glVertex3d(698.0f, 663.0f, 0);
        glVertex3d(710.5f, 656.5f, 0);
        glVertex3d(710.5f, 667.0f, 0);
        glVertex3d(698.0f, 673.5f, 0);
    glEnd();

    glBegin(GL_QUADS);       // kaca 4
        glVertex3d(715.5f, 652.5f, 0);
        glVertex3d(727.0f, 646.5f, 0);
        glVertex3d(727.0f, 657.5f, 0);
        glVertex3d(715.5f, 664.0f, 0);
    glEnd();

    glBegin(GL_QUADS);       // kaca 5
        glVertex3d(698.0f, 680.0f, 0);
        glVertex3d(710.0f, 673.5f, 0);
        glVertex3d(710.0f, 685.0f, 0);
        glVertex3d(698.0f, 692.0f, 0);
    glEnd();

    glBegin(GL_QUADS);       // kaca 6
        glVertex3d(715.5f, 670.0f, 0);
        glVertex3d(727.0f, 663.5f, 0);
        glVertex3d(727.0f, 675.0f, 0);
        glVertex3d(715.5f, 682.0f, 0);
    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(-35,25,0);
    glColor3f(0.741,0.765,0.78);
    glBegin(GL_QUADS);       // dasar jendala
        glVertex3d(449.0f, 416.0f, 0);
        glVertex3d(487.0f, 438.5f, 0);
        glVertex3d(487.0f, 498.5f, 0);
        glVertex3d(449.0f, 476.0f, 0);
    glEnd();

    glColor3f(0.937,0.953,0.965);
    glBegin(GL_QUADS);       // BAYANGAN 1
        glVertex3d(449.0f, 416.0f, 0);
        glVertex3d(487.0f, 438.5f, 0);
        glVertex3d(489.5f, 436.5f, 0);
        glVertex3d(452.0f, 414.0f, 0);
    glEnd();

    glBegin(GL_QUADS);       // BAYANGAN 1
        glVertex3d(487.0f, 438.5f, 0);
        glVertex3d(487.0f, 498.75f, 0);
        glVertex3d(490.0f, 497.0f, 0);
        glVertex3d(489.5f, 436.5f, 0);
    glEnd();

    glColor3f(0.937,0.953,0.965);
    glBegin(GL_QUADS);       // BAYANGAN 1
        glVertex3d(449.0f, 416.0f, 0);
        glVertex3d(487.0f, 438.5f, 0);
        glVertex3d(489.5f, 436.5f, 0);
        glVertex3d(452.0f, 414.0f, 0);
    glEnd();

    glColor3f(0.337,0.392,0.443);
    glBegin(GL_QUADS);        // kaca 1
        glVertex3d(454.0f, 424.5f, 0);
        glVertex3d(465.5f, 431.0f, 0);
        glVertex3d(465.5f, 445.5f, 0);
        glVertex3d(454.0f, 438.5f, 0);
    glEnd();

    glBegin(GL_QUADS);        // kaca 2
        glVertex3d(470.5f, 434.5f, 0);
        glVertex3d(483.0f, 441.5f, 0);
        glVertex3d(483.0f, 456.0f, 0);
        glVertex3d(470.5f, 448.5f, 0);
    glEnd();

     glBegin(GL_QUADS);        // kaca 3
        glVertex3d(454.0f, 444.0f, 0);
        glVertex3d(465.0f, 450.5f, 0);
        glVertex3d(465.0f, 462.0f, 0);
        glVertex3d(453.5f, 455.5f, 0);
    glEnd();

    glBegin(GL_QUADS);        // kaca 4
        glVertex3d(471.0f, 454.5f, 0);
        glVertex3d(482.5f, 461.0f, 0);
        glVertex3d(482.5f, 472.5f, 0);
        glVertex3d(471.0f, 468.0f, 0);
    glEnd();

    glBegin(GL_QUADS);        // kaca 5
        glVertex3d(454.0f, 461.5f, 0);
        glVertex3d(465.0f, 468.0f, 0);
        glVertex3d(465.0f, 480.0f, 0);
        glVertex3d(454.0f, 473.0f, 0);
    glEnd();

    glBegin(GL_QUADS);        // kaca 5
        glVertex3d(471.0f, 471.5f, 0);
        glVertex3d(482.5f, 478.0f, 0);
        glVertex3d(482.5f, 490.0f, 0);
        glVertex3d(471.0f, 483.0f, 0);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(65,225,0);
    glColor3f(0.741,0.765,0.78);
    glBegin(GL_QUADS);       // dasar jendala
        glVertex3d(449.0f, 416.0f, 0);
        glVertex3d(487.0f, 438.5f, 0);
        glVertex3d(487.0f, 498.5f, 0);
        glVertex3d(449.0f, 476.0f, 0);
    glEnd();

    glColor3f(0.937,0.953,0.965);
    glBegin(GL_QUADS);       // BAYANGAN 1
        glVertex3d(449.0f, 416.0f, 0);
        glVertex3d(487.0f, 438.5f, 0);
        glVertex3d(489.5f, 436.5f, 0);
        glVertex3d(452.0f, 414.0f, 0);
    glEnd();

    glBegin(GL_QUADS);       // BAYANGAN 1
        glVertex3d(487.0f, 438.5f, 0);
        glVertex3d(487.0f, 498.75f, 0);
        glVertex3d(490.0f, 497.0f, 0);
        glVertex3d(489.5f, 436.5f, 0);
    glEnd();

    glColor3f(0.937,0.953,0.965);
    glBegin(GL_QUADS);       // BAYANGAN 1
        glVertex3d(449.0f, 416.0f, 0);
        glVertex3d(487.0f, 438.5f, 0);
        glVertex3d(489.5f, 436.5f, 0);
        glVertex3d(452.0f, 414.0f, 0);
    glEnd();

    glColor3f(0.337,0.392,0.443);
    glBegin(GL_QUADS);        // kaca 1
        glVertex3d(454.0f, 424.5f, 0);
        glVertex3d(465.5f, 431.0f, 0);
        glVertex3d(465.5f, 445.5f, 0);
        glVertex3d(454.0f, 438.5f, 0);
    glEnd();

    glBegin(GL_QUADS);        // kaca 2
        glVertex3d(470.5f, 434.5f, 0);
        glVertex3d(483.0f, 441.5f, 0);
        glVertex3d(483.0f, 456.0f, 0);
        glVertex3d(470.5f, 448.5f, 0);
    glEnd();

     glBegin(GL_QUADS);        // kaca 3
        glVertex3d(454.0f, 444.0f, 0);
        glVertex3d(465.0f, 450.5f, 0);
        glVertex3d(465.0f, 462.0f, 0);
        glVertex3d(453.5f, 455.5f, 0);
    glEnd();

    glBegin(GL_QUADS);        // kaca 4
        glVertex3d(471.0f, 454.5f, 0);
        glVertex3d(482.5f, 461.0f, 0);
        glVertex3d(482.5f, 472.5f, 0);
        glVertex3d(471.0f, 468.0f, 0);
    glEnd();

    glBegin(GL_QUADS);        // kaca 5
        glVertex3d(454.0f, 461.5f, 0);
        glVertex3d(465.0f, 468.0f, 0);
        glVertex3d(465.0f, 480.0f, 0);
        glVertex3d(454.0f, 473.0f, 0);
    glEnd();

    glBegin(GL_QUADS);        // kaca 5
        glVertex3d(471.0f, 471.5f, 0);
        glVertex3d(482.5f, 478.0f, 0);
        glVertex3d(482.5f, 490.0f, 0);
        glVertex3d(471.0f, 483.0f, 0);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-30,30,0);
    glColor3f(0.741,0.765,0.78);
    glBegin(GL_QUADS);            // BASE
        glVertex3d(448.0f,510.0f,0);
        glVertex3d(472.0f,524.5f,0);
        glVertex3d(472.0f,664.5f,0);
        glVertex3d(448.0f,649.0f,0);
    glEnd();

    glColor3f(0.937,0.953,0.965);
    glBegin(GL_QUADS);            // bayangan
        glVertex3d(448.0f,510.0f,0);
        glVertex3d(472.0f,524.5f,0);
        glVertex3d(475.0f,523.0f,0);
        glVertex3d(450.0f,507.5f,0);
    glEnd();

    glBegin(GL_QUADS);            // bayangan 2
        glVertex3d(472.0f,524.5f,0);
        glVertex3d(475.0f,523.0f,0);
        glVertex3d(475.0f,660.5f,0);
        glVertex3d(472.0f,664.5f,0);
    glEnd();

    glColor3f(0.337,0.392,0.443);
    glBegin(GL_QUADS);            // kaca 1
        glVertex3d(452.5f,518.0f,0);
        glVertex3d(467.0f,527.5f,0);
        glVertex3d(467.0f,544.5f,0);
        glVertex3d(452.5f,535.5f,0);
    glEnd();

    glBegin(GL_QUADS);            // kaca 2
        glVertex3d(452.5f,540.5f,0);
        glVertex3d(467.0f,550.5f,0);
        glVertex3d(467.0f,562.0f,0);
        glVertex3d(452.5f,552.5f,0);
    glEnd();

    glBegin(GL_QUADS);            // kaca 3
        glVertex3d(452.0f,558.5f,0);
        glVertex3d(467.0f,567.5f,0);
        glVertex3d(467.0f,579.5f,0);
        glVertex3d(452.0f,570.5f,0);
    glEnd();

    glBegin(GL_QUADS);            // kaca 4
        glVertex3d(452.0f,576.5f,0);
        glVertex3d(467.0f,584.5f,0);
        glVertex3d(467.0f,597.5f,0);
        glVertex3d(452.0f,588.5f,0);
    glEnd();

    glBegin(GL_QUADS);            // kaca 5
        glVertex3d(452.0f,593.5f,0);
        glVertex3d(467.0f,602.5f,0);
        glVertex3d(467.0f,616.5f,0);
        glVertex3d(452.0f,607.0f,0);
    glEnd();

    glBegin(GL_QUADS);            // kaca 6
        glVertex3d(452.0f,613.0f,0);
        glVertex3d(467.0f,621.5f,0);
        glVertex3d(467.0f,634.5f,0);
        glVertex3d(452.0f,625.5f,0);
    glEnd();

    glBegin(GL_QUADS);            // kaca 7
        glVertex3d(452.0f,630.0f,0);
        glVertex3d(467.0f,639.69f,0);
        glVertex3d(467.0f,656.0f,0);
        glVertex3d(452.0f,646.5f,0);
        glVertex3d(452.0f,646.5f,0);
    glEnd();

    glPopMatrix();
}

void display_pintuTangga()
{
    glPushMatrix();
    glTranslatef(-35,20,0);
    glColor3f(0.741,0.765,0.78);
    glBegin(GL_QUADS);            // Base
        glVertex3d(496.5f,706.0f,0);
        glVertex3d(496.5f,596.5f,0);
        glVertex3d(534.0f,618.5f,0);
        glVertex3d(534.0f,730.5f,0);
    glEnd();

    glColor3f(0.937,0.953,0.965);
    glBegin(GL_QUADS);            // Bayangan
        glVertex3d(496.5f,596.0f,0);
        glVertex3d(534.0f,618.5f,0);
        glVertex3d(537.5f,617.0f,0);
        glVertex3d(499.5f,593.5f,0);
    glEnd();
    glBegin(GL_QUADS);            // Bayangan 2
        glVertex3d(534.0f,618.5f,0);
        glVertex3d(537.5f,617.0f,0);
        glVertex3d(537.0f,730.0f,0);
        glVertex3d(534.0f,730.5f,0);
    glEnd();

    glPushMatrix();
    glTranslatef(0,0,0);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_QUADS);            // tangga 1
        glVertex3d(494.0f,705.0f,0);
        glVertex3d(535.0f,731.0f,0);
        glVertex3d(524.0f,740.5f,0);
        glVertex3d(479.5f,713.0f,0);
    glEnd();
    glColor3f(0.741,0.765,0.78);
    glBegin(GL_QUADS);            // tangga 1 bayangan
        glVertex3d(524.0f,740.5f,0);
        glVertex3d(479.5f,713.0f,0);
        glVertex3d(479.5f,720.0f,0);
        glVertex3d(524.0f,746.0f,0);
    glEnd();
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_QUADS);            // tangga 2
        glVertex3d(479.5f,720.0f,0);
        glVertex3d(524.0f,746.0f,0);
        glVertex3d(512.5f,753.0f,0);
        glVertex3d(467.0f,727.0f,0);
    glEnd();
    glColor3f(0.741,0.765,0.78);
    glBegin(GL_QUADS);            // tangga 2 bayangan
        glVertex3d(512.5f,753.0f,0);
        glVertex3d(467.0f,727.0f,0);
        glVertex3d(467.0f,734.5f,0);
        glVertex3d(512.5f,761.0f,0);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);            // tangga 3
        glVertex3d(467.0f,734.5f,0);
        glVertex3d(512.5f,761.0f,0);
        glVertex3d(500.0f,769.0f,0);
        glVertex3d(454.5f,742.0f,0);
    glEnd();
    glColor3f(0.741,0.765,0.78);
    glBegin(GL_QUADS);            // tangga 3 bayangan
        glVertex3d(500.0f,769.0f,0);
        glVertex3d(454.5f,742.0f,0);
        glVertex3d(454.5f,748.5f,0);
        glVertex3d(500.0f,774.0f,0);
    glEnd();

    // pinggir tangga
    glColor3f(0.671,0.718,0.718);
    glBegin(GL_QUADS);
        glVertex3d(500.0f,769.0f,0);
        glVertex3d(500.0f,774.0f,0);
        glVertex3d(539.5f,754.5f,0);
        glVertex3d(539.5f,744.0f,0);
    glEnd();
    glBegin(GL_QUADS);
        glVertex3d(512.5f,753.0f,0);
        glVertex3d(512.5f,761.0f,0);
        glVertex3d(539.5f,744.0f,0);
        glVertex3d(539.5f,738.0f,0);
    glEnd();
    glBegin(GL_QUADS);
        glVertex3d(524.0f,740.5f,0);
        glVertex3d(524.0f,746.0f,0);
        glVertex3d(539.5f,738.0f,0);
         glVertex3d(535.0f,731.0f,0);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex3d(539.5f,738.0f,0);
        glVertex3d(535.0f,731.0f,0);
        glVertex3d(539.5f,731.5f,0);
    glEnd();
    glPopMatrix();

    glPushMatrix();         // PINTU
    glTranslatef(-35,18,0);
    glColor3f(0.757,0.216,0.165);
    glBegin(GL_QUADS);
        glVertex3d(496.0f,597.0f,0);
        glVertex3d(532.5f,619.0f,0);
        glVertex3d(532.5f,730.5f,0);
        glVertex3d(496.0f,707.5f,0);
    glEnd();


}

void display_pohon_depan()
{
    glPushMatrix();
    glTranslatef(-20,-180,0);
    // POHON KECIL
    // BATANG
    glColor3f(0.486,0.298,0.078);
    glBegin(GL_QUADS);
        glVertex3d(647.5f,1129.0f,0);
        glVertex3d(661.5f,1129.0f,0);
        glVertex3d(661.5f,1165.5f,0);
        glVertex3d(647.5f,1165.0f,0);
    glEnd();

    // DAUN

    glColor3f(0.122,0.545,0.216);
    glBegin(GL_TRIANGLE_FAN);
        glVertex3d(647.5f,1135.0f,0);
        glVertex3d(640.5f,1129.49f,0);
        glVertex3d(632.0f,1130.0f,0);
        glVertex3d(628.89f,1120.5f,0);
        glVertex3d(628.5f,1118.0f,0);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
        glVertex3d(662.5f,1132.5f,0);
        glVertex3d(669.5f,1125.99f,0);
        glVertex3d(678.0f,1126.5f,0);
        glVertex3d(680.11f,1117.0f,0);
        glVertex3d(692.0f,1115.0f,0);
        glVertex3d(692.0f,1107.0f,0);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex3d(617.5f,1109.5f,0);
        glVertex3d(647.5f,1135.0f,0);
        glVertex3d(662.5f,1132.5f,0);
        glVertex3d(688.5f,1060.5f,0);
    glEnd();

    glBegin(GL_TRIANGLES);
        glVertex3d(617.5f,1109.5f,0);
        glVertex3d(616.5f,1086.0f,0);
        glVertex3d(688.5f,1060.5f,0);
    glEnd();

     glBegin(GL_TRIANGLES);
         glVertex3d(688.5f,1060.5f,0);
        glVertex3d(616.5f,1086.0f,0);
        glVertex3d(620.0f,1069.0f,0);
    glEnd();

    glBegin(GL_TRIANGLES);
        glVertex3d(688.5f,1060.5f,0);
        glVertex3d(662.5f,1132.5f,0);
        glVertex3d(693.0f,1106.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(688.5f,1060.5f,0);
        glVertex3d(620.0f,1069.0f,0);
        glVertex3d(627.5f,1032.0f,0);
        glVertex3d(683.0f,1037.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(627.5f,1032.0f,0);
        glVertex3d(683.0f,1037.5f,0);
        glVertex3d(676.5f,1013.0f,0);
        glVertex3d(634.0f,1008.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(676.5f,1013.0f,0);
        glVertex3d(634.0f,1008.5f,0);
        glVertex3d(644.0f,975.0f,0);
        glVertex3d(665.5f,979.0f,0);
    glEnd();

     glBegin(GL_TRIANGLES);
        glVertex3d(644.0f,975.0f,0);
        glVertex3d(665.5f,979.0f,0);
        glVertex3d(653.5f,960.0f,0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(70,-180,0);
    //pohon besar
    // Batang
    glColor3f(0.486,0.298,0.078);
    glBegin(GL_QUADS);
        glVertex3d(500.0f,1135.0f,0);
        glVertex3d(514.0f,1135.0f,0);
        glVertex3d(514.0f,1171.0f,0);
        glVertex3d(500.0f,1171.0f,0);
    glEnd();

    //Daun
    glColor3f(0.122,0.545,0.216);
    glBegin(GL_TRIANGLES);
        glVertex3d(500.0f,1146.5f,0);
        glVertex3d(469.0f,1119.5f,0);
        glVertex3d(500.0f,1059.0f,0);
    glEnd();
    glBegin(GL_QUADS);
        glVertex3d(500.0f,1121.5f,0);
        glVertex3d(500.0f,1059.0f,0);
        glVertex3d(542.0f,1059.0f,0);
        glVertex3d(545.0f,1120.0f,0);
    glEnd();
    glBegin(GL_QUADS);
        glVertex3d(500.0f,1121.5f,0);
        glVertex3d(515.5f,1121.5f,0);
        glVertex3d(515.5f,1135.0f,0);
        glVertex3d(500.0f,1135.0f,0);
    glEnd();
     glBegin(GL_TRIANGLES);
        glVertex3d(512.5f,1121.5f,0);
        glVertex3d(542.0f,1120.0f,0);
        glVertex3d(513.5f,1146.0f,0);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex3d(469.0f,1119.5f,0);
        glVertex3d(466.0f,1106.5f,0);
        glVertex3d(480.5f,1098.0f,0);
    glEnd();
    glBegin(GL_QUADS);
        glVertex3d(466.0f,1106.5f,0);
        glVertex3d(480.5f,1098.0f,0);
        glVertex3d(489.0f,1082.0f,0);
        glVertex3d(466.0f,1089.5f,0);
    glEnd();
    glBegin(GL_QUADS);
        glVertex3d(466.0f,1089.5f,0);
        glVertex3d(489.0f,1082.0f,0);
        glVertex3d(501.5f,1059.5f,0);
        glVertex3d(472.5f,1049.0f,0);
    glEnd();
    glBegin(GL_QUADS);
        glVertex3d(472.5f,1049.0f,0);
        glVertex3d(501.5f,1059.5f,0);
        glVertex3d(520.0f,967.5f,0);
        glVertex3d(491.5f,960.0f,0);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex3d(501.5f,1059.5f,0);
        glVertex3d(520.0f,967.5f,0);
        glVertex3d(542.0f,1060.0f,0);
    glEnd();
    glBegin(GL_QUADS);
        glVertex3d(491.5f,960.0f,0);
        glVertex3d(520.0f,967.5f,0);
        glVertex3d(511.0f,938.5f,0);
        glVertex3d(499.5f,938.5f,0);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex3d(499.5f,938.5f,0);
        glVertex3d(511.5f,939.0f,0);
        glVertex3d(506.0f,930.0f,0);
    glEnd();
    glPopMatrix();
}

void display_pohon_samping()
{
    glPushMatrix();
    glTranslatef(200,-380,0);
    // POHON KECIL
    // BATANG
    glColor3f(0.486,0.298,0.078);
    glBegin(GL_QUADS);
        glVertex3d(647.5f,1129.0f,0);
        glVertex3d(661.5f,1129.0f,0);
        glVertex3d(661.5f,1165.5f,0);
        glVertex3d(647.5f,1165.0f,0);
    glEnd();

    // DAUN

    glColor3f(0.122,0.545,0.216);
    glBegin(GL_TRIANGLE_FAN);
        glVertex3d(647.5f,1135.0f,0);
        glVertex3d(640.5f,1129.49f,0);
        glVertex3d(632.0f,1130.0f,0);
        glVertex3d(628.89f,1120.5f,0);
        glVertex3d(628.5f,1118.0f,0);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
        glVertex3d(662.5f,1132.5f,0);
        glVertex3d(669.5f,1125.99f,0);
        glVertex3d(678.0f,1126.5f,0);
        glVertex3d(680.11f,1117.0f,0);
        glVertex3d(692.0f,1115.0f,0);
        glVertex3d(692.0f,1107.0f,0);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex3d(617.5f,1109.5f,0);
        glVertex3d(647.5f,1135.0f,0);
        glVertex3d(662.5f,1132.5f,0);
        glVertex3d(688.5f,1060.5f,0);
    glEnd();

    glBegin(GL_TRIANGLES);
        glVertex3d(617.5f,1109.5f,0);
        glVertex3d(616.5f,1086.0f,0);
        glVertex3d(688.5f,1060.5f,0);
    glEnd();

     glBegin(GL_TRIANGLES);
         glVertex3d(688.5f,1060.5f,0);
        glVertex3d(616.5f,1086.0f,0);
        glVertex3d(620.0f,1069.0f,0);
    glEnd();

    glBegin(GL_TRIANGLES);
        glVertex3d(688.5f,1060.5f,0);
        glVertex3d(662.5f,1132.5f,0);
        glVertex3d(693.0f,1106.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(688.5f,1060.5f,0);
        glVertex3d(620.0f,1069.0f,0);
        glVertex3d(627.5f,1032.0f,0);
        glVertex3d(683.0f,1037.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(627.5f,1032.0f,0);
        glVertex3d(683.0f,1037.5f,0);
        glVertex3d(676.5f,1013.0f,0);
        glVertex3d(634.0f,1008.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(676.5f,1013.0f,0);
        glVertex3d(634.0f,1008.5f,0);
        glVertex3d(644.0f,975.0f,0);
        glVertex3d(665.5f,979.0f,0);
    glEnd();

     glBegin(GL_TRIANGLES);
        glVertex3d(644.0f,975.0f,0);
        glVertex3d(665.5f,979.0f,0);
        glVertex3d(653.5f,960.0f,0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(300,-400,0);
    //pohon besar
    // Batang
    glColor3f(0.486,0.298,0.078);
    glBegin(GL_QUADS);
        glVertex3d(500.0f,1135.0f,0);
        glVertex3d(514.0f,1135.0f,0);
        glVertex3d(514.0f,1171.0f,0);
        glVertex3d(500.0f,1171.0f,0);
    glEnd();

    //Daun
    glColor3f(0.122,0.545,0.216);
    glBegin(GL_TRIANGLES);
        glVertex3d(500.0f,1146.5f,0);
        glVertex3d(469.0f,1119.5f,0);
        glVertex3d(500.0f,1059.0f,0);
    glEnd();
    glBegin(GL_QUADS);
        glVertex3d(500.0f,1121.5f,0);
        glVertex3d(500.0f,1059.0f,0);
        glVertex3d(542.0f,1059.0f,0);
        glVertex3d(545.0f,1120.0f,0);
    glEnd();
    glBegin(GL_QUADS);
        glVertex3d(500.0f,1121.5f,0);
        glVertex3d(515.5f,1121.5f,0);
        glVertex3d(515.5f,1135.0f,0);
        glVertex3d(500.0f,1135.0f,0);
    glEnd();
     glBegin(GL_TRIANGLES);
        glVertex3d(512.5f,1121.5f,0);
        glVertex3d(542.0f,1120.0f,0);
        glVertex3d(513.5f,1146.0f,0);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex3d(469.0f,1119.5f,0);
        glVertex3d(466.0f,1106.5f,0);
        glVertex3d(480.5f,1098.0f,0);
    glEnd();
    glBegin(GL_QUADS);
        glVertex3d(466.0f,1106.5f,0);
        glVertex3d(480.5f,1098.0f,0);
        glVertex3d(489.0f,1082.0f,0);
        glVertex3d(466.0f,1089.5f,0);
    glEnd();
    glBegin(GL_QUADS);
        glVertex3d(466.0f,1089.5f,0);
        glVertex3d(489.0f,1082.0f,0);
        glVertex3d(501.5f,1059.5f,0);
        glVertex3d(472.5f,1049.0f,0);
    glEnd();
    glBegin(GL_QUADS);
        glVertex3d(472.5f,1049.0f,0);
        glVertex3d(501.5f,1059.5f,0);
        glVertex3d(520.0f,967.5f,0);
        glVertex3d(491.5f,960.0f,0);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex3d(501.5f,1059.5f,0);
        glVertex3d(520.0f,967.5f,0);
        glVertex3d(542.0f,1060.0f,0);
    glEnd();
    glBegin(GL_QUADS);
        glVertex3d(491.5f,960.0f,0);
        glVertex3d(520.0f,967.5f,0);
        glVertex3d(511.0f,938.5f,0);
        glVertex3d(499.5f,938.5f,0);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex3d(499.5f,938.5f,0);
        glVertex3d(511.5f,939.0f,0);
        glVertex3d(506.0f,930.0f,0);
    glEnd();
    glPopMatrix();
}


void display_pohon_belakang()
{
    glPushMatrix();
    glTranslatef(-340,-460,0);
    // POHON KECIL
    // BATANG
    glColor3f(0.486,0.298,0.078);
    glBegin(GL_QUADS);
        glVertex3d(647.5f,1129.0f,0);
        glVertex3d(661.5f,1129.0f,0);
        glVertex3d(661.5f,1165.5f,0);
        glVertex3d(647.5f,1165.0f,0);
    glEnd();

    // DAUN

    glColor3f(0.122,0.545,0.216);
    glBegin(GL_TRIANGLE_FAN);
        glVertex3d(647.5f,1135.0f,0);
        glVertex3d(640.5f,1129.49f,0);
        glVertex3d(632.0f,1130.0f,0);
        glVertex3d(628.89f,1120.5f,0);
        glVertex3d(628.5f,1118.0f,0);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
        glVertex3d(662.5f,1132.5f,0);
        glVertex3d(669.5f,1125.99f,0);
        glVertex3d(678.0f,1126.5f,0);
        glVertex3d(680.11f,1117.0f,0);
        glVertex3d(692.0f,1115.0f,0);
        glVertex3d(692.0f,1107.0f,0);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex3d(617.5f,1109.5f,0);
        glVertex3d(647.5f,1135.0f,0);
        glVertex3d(662.5f,1132.5f,0);
        glVertex3d(688.5f,1060.5f,0);
    glEnd();

    glBegin(GL_TRIANGLES);
        glVertex3d(617.5f,1109.5f,0);
        glVertex3d(616.5f,1086.0f,0);
        glVertex3d(688.5f,1060.5f,0);
    glEnd();

     glBegin(GL_TRIANGLES);
         glVertex3d(688.5f,1060.5f,0);
        glVertex3d(616.5f,1086.0f,0);
        glVertex3d(620.0f,1069.0f,0);
    glEnd();

    glBegin(GL_TRIANGLES);
        glVertex3d(688.5f,1060.5f,0);
        glVertex3d(662.5f,1132.5f,0);
        glVertex3d(693.0f,1106.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(688.5f,1060.5f,0);
        glVertex3d(620.0f,1069.0f,0);
        glVertex3d(627.5f,1032.0f,0);
        glVertex3d(683.0f,1037.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(627.5f,1032.0f,0);
        glVertex3d(683.0f,1037.5f,0);
        glVertex3d(676.5f,1013.0f,0);
        glVertex3d(634.0f,1008.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(676.5f,1013.0f,0);
        glVertex3d(634.0f,1008.5f,0);
        glVertex3d(644.0f,975.0f,0);
        glVertex3d(665.5f,979.0f,0);
    glEnd();

     glBegin(GL_TRIANGLES);
        glVertex3d(644.0f,975.0f,0);
        glVertex3d(665.5f,979.0f,0);
        glVertex3d(653.5f,960.0f,0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-250,-440,0);
    //pohon besar
    // Batang
    glColor3f(0.486,0.298,0.078);
    glBegin(GL_QUADS);
        glVertex3d(500.0f,1135.0f,0);
        glVertex3d(514.0f,1135.0f,0);
        glVertex3d(514.0f,1171.0f,0);
        glVertex3d(500.0f,1171.0f,0);
    glEnd();

    //Daun
    glColor3f(0.122,0.545,0.216);
    glBegin(GL_TRIANGLES);
        glVertex3d(500.0f,1146.5f,0);
        glVertex3d(469.0f,1119.5f,0);
        glVertex3d(500.0f,1059.0f,0);
    glEnd();
    glBegin(GL_QUADS);
        glVertex3d(500.0f,1121.5f,0);
        glVertex3d(500.0f,1059.0f,0);
        glVertex3d(542.0f,1059.0f,0);
        glVertex3d(545.0f,1120.0f,0);
    glEnd();
    glBegin(GL_QUADS);
        glVertex3d(500.0f,1121.5f,0);
        glVertex3d(515.5f,1121.5f,0);
        glVertex3d(515.5f,1135.0f,0);
        glVertex3d(500.0f,1135.0f,0);
    glEnd();
     glBegin(GL_TRIANGLES);
        glVertex3d(512.5f,1121.5f,0);
        glVertex3d(542.0f,1120.0f,0);
        glVertex3d(513.5f,1146.0f,0);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex3d(469.0f,1119.5f,0);
        glVertex3d(466.0f,1106.5f,0);
        glVertex3d(480.5f,1098.0f,0);
    glEnd();
    glBegin(GL_QUADS);
        glVertex3d(466.0f,1106.5f,0);
        glVertex3d(480.5f,1098.0f,0);
        glVertex3d(489.0f,1082.0f,0);
        glVertex3d(466.0f,1089.5f,0);
    glEnd();
    glBegin(GL_QUADS);
        glVertex3d(466.0f,1089.5f,0);
        glVertex3d(489.0f,1082.0f,0);
        glVertex3d(501.5f,1059.5f,0);
        glVertex3d(472.5f,1049.0f,0);
    glEnd();
    glBegin(GL_QUADS);
        glVertex3d(472.5f,1049.0f,0);
        glVertex3d(501.5f,1059.5f,0);
        glVertex3d(520.0f,967.5f,0);
        glVertex3d(491.5f,960.0f,0);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex3d(501.5f,1059.5f,0);
        glVertex3d(520.0f,967.5f,0);
        glVertex3d(542.0f,1060.0f,0);
    glEnd();
    glBegin(GL_QUADS);
        glVertex3d(491.5f,960.0f,0);
        glVertex3d(520.0f,967.5f,0);
        glVertex3d(511.0f,938.5f,0);
        glVertex3d(499.5f,938.5f,0);
    glEnd();
    glBegin(GL_TRIANGLES);
        glVertex3d(499.5f,938.5f,0);
        glVertex3d(511.5f,939.0f,0);
        glVertex3d(506.0f,930.0f,0);
    glEnd();
    glPopMatrix();
}



void display_scale()
{
float scale;
    glTranslatef(0, 1150, 0);
    glScalef(glfwGetTime()*0.05,0.05,1);
    glBegin(GL_POLYGON);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(82.0f ,  41.0f);
        glVertex2f( 1139.0f,  41.0f);
        glVertex2f( 1139.0f, 742.0f);
        glVertex2f(82.0f, 742.0f);
    glEnd();
}




static void error_callback(int error, const char* description) {
    //fputs(description);
}

// Callback untuk merespons penekanan kunci pada keyboard
static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods){}

// Callback untuk merespons perubahan posisi kursor
static void cursor_position_callback(GLFWwindow* window, double xpos, double ypos){}

// Callback untuk merespons penekanan tombol pada mouse
void mouse_button_callback(GLFWwindow* window, int button, int action, int mods)
{
    double xpos, ypos;
    glfwGetCursorPos(window, &xpos, &ypos);
    rect.doIfClicked(button, action, xpos, ypos);

}

/*
 * MAIN FUNCTION
 */
int main(void) {
    /* Creating Windows */
    GLFWwindow* window;
    glfwSetErrorCallback(error_callback);
    if (!glfwInit());
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
    window = glfwCreateWindow(1200, 1200, "Interaction", NULL, NULL);
    if (!window){
        glfwTerminate();
    }
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1);

    /* Registering Callbacks */
    glfwSetKeyCallback(window, key_callback);
    glfwSetCursorPosCallback(window, cursor_position_callback);
    glfwSetMouseButtonCallback(window, mouse_button_callback);


    /* MAIN LOOP */
    while (!glfwWindowShouldClose(window)){
        /* Preparing Frame Creation */
        float ratio;
        int width, height;
        glfwGetFramebufferSize(window, &width, &height);
        ratio = width / (float) height;
        glViewport(0, 0, width, height);
        glClear(GL_COLOR_BUFFER_BIT);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        glOrtho(0, 1100, 1400 , 0 , 1.f, -1.f);
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();



        /* Object Drawing*/

        display();
        display_jendela();
        display_pintuTangga();
        display_pohon_depan();
        display_pohon_samping();
        display_pohon_belakang();

        rect.display_bola();


        display_scale();


        /* Handling Frame Changes */
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    /* Destroying Windows */
    glfwDestroyWindow(window);
    glfwTerminate();
    //exit(EXIT_SUCCESS);
}

