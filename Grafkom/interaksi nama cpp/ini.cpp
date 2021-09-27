#include <GLFW/glfw3.h>
#include <iostream>
#include <list>
#include <iterator>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

/*
 * CLASSES DECLARATION
 */
// Rectangle class
class Rectangle{
public:
    double x=1000, y=160;
    double prevY = 0;
    int red = 0, green = 0, blue = 0;
    int size1 = 143;
    int size2 = -73;
    int size3 = 125;
    int size4 = -66;
    void display()
    {
        glBegin(GL_QUADS);
            glColor3ub(red, green, blue);
            glVertex2f(-size1 + x,  size2 + y);
            glVertex2f( size3 + x,  size2 + y);
            glVertex2f( size3 + x, -size4 + y);
            glVertex2f(-size1 + x, -size4 + y);
        glEnd();
    }
    GLboolean isRectangleSelected(double xpos, double ypos){return GL_TRUE;}
    void doIfSelected(double xpos, double ypos){}
    void doIfKeyPressed(int key, int action){}
    void doIfClicked(int button, int action, double xpos, double ypos){
        if (button == GLFW_MOUSE_BUTTON_LEFT && action == GLFW_PRESS){
            x = xpos;
            y = ypos;
        }
    }

};
Rectangle rect;


  void display()
    {
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f); //warna background
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();

    glBegin(GL_QUADS);//untuk mulai
    glColor3f(1.0,0.0,0.0);
    glVertex2d(739,-1);//Titik 1
    glVertex2d(804,148);//Titik 2
    glVertex2d(834,154);//titik 3
    glVertex2d(763,-1);//titik 4
    glEnd();

    glBegin(GL_QUADS);//untuk mulai
    glColor3f(1.0,0.0,0.0);
    glVertex2d(823,129);//Titik 1
    glVertex2d(368,71);//Titik 2
    glVertex2d(381,94);//titik 3
    glVertex2d(835,155);//titik 4
    glEnd();

    glBegin(GL_QUADS);//untuk mulai
    glColor3f(1.0,0.0,0.0);
    glVertex2d(366,69);//Titik 1
    glVertex2d(696,737);//Titik 2
    glVertex2d(783,632);//titik 3
    glVertex2d(422,78);//titik 4
    glEnd();

    glBegin(GL_QUADS);//untuk mulai
    glColor3f(1.0,0.0,0.0);
    glVertex2d(695,737);//Titik 1
    glVertex2d(959,417);//Titik 2
    glVertex2d(921,410);//titik 3
    glVertex2d(633,608);//titik 4
    glEnd();

    glBegin(GL_QUADS);//untuk mulai
    glColor3f(1.0,0.0,0.0);
    glVertex2d(922,410);//Titik 1
    glVertex2d(44,261);//Titik 2
    glVertex2d(78,321);//titik 3
    glVertex2d(863,450);//titik 4
    glEnd();

    glBegin(GL_QUADS);//untuk mulai
    glColor3f(1.0,0.0,0.0);
    glVertex2d(77,320);//Titik 1
    glVertex2d(307,749);//Titik 2
    glVertex2d(453,781);//titik 3
    glVertex2d(203,339);//titik 4
    glEnd();

    glBegin(GL_QUADS);//untuk mulai
    glColor3f(1.0,0.0,0.0);
    glVertex2d(252,645);//Titik 1
    glVertex2d(0,575);//Titik 2
    glVertex2d(0,686);//titik 3
    glVertex2d(307,751);//titik 4
    glEnd();
    }

void display_nama()
{
    // Kanvas

    glBegin(GL_QUADS);//untuk mulai
    glColor3f(1.0,1.0,1.0);
    glVertex2d(730,176);//Titik 1
    glVertex2d(166.76f,228.9f);//Titik 2
    glVertex2d(126,417);//titik 3
    glVertex2d(730,355);//titik 4
    glEnd();

    glBegin(GL_QUADS);//untuk mulai
    glColor3f(0.0,0.0,0.0);
    glVertex2d(702,205);//Titik 1
    glVertex2d(198.8f,244.74f);//Titik 2
    glVertex2d(147,389);//titik 3
    glVertex2d(702.0f,322.76f);//titik 4
    glEnd();

    // Huruf

    // M
    glBegin(GL_QUADS);//untuk kiri
    glColor3f(0.98,0.886,0.149);
    glVertex2d(252.13f,356.58f);//Titik 1
    glVertex2d(241.83f,288.26f);//Titik 2
    glVertex2d(261.27f,285.39f);//titik 3
    glVertex2d(271.57f,353.21f);//titik 4
    glEnd();

    glBegin(GL_QUADS);//untuk atas
    glColor3f(0.98,0.886,0.149);
    glVertex2d(244.65f,305.21f);//Titik 1
    glVertex2d(318.96f,294.29f);//Titik 2
    glVertex2d(316.63f,277.33f);//titik 3
    glVertex2d(242.34f,288.75f);//titik 4
    glEnd();

    glBegin(GL_QUADS);//untuk kanan
    glColor3f(0.98,0.886,0.149);
    glVertex2d(307.51f,349.52f);//Titik 1
    glVertex2d(297.2f,281.21f);//Titik 2
    glVertex2d(316.65f,278.33f);//titik 3
    glVertex2d(326.95f,346.15f);//titik 4
    glEnd();

    glBegin(GL_QUADS);//untuk tengah
    glColor3f(0.98,0.886,0.149);
    glVertex2d(276.02f,290.28f);//Titik 1
    glVertex2d(281.19f,325.18f);//Titik 2
    glVertex2d(291.16f,323.99f);//titik 3
    glVertex2d(286.5f,289.08f);//titik 4
    glEnd();

    // A
    glBegin(GL_QUADS);//untuk kiri
    glColor3f(0.98,0.886,0.149);
    glVertex2d(336.97f,347.46f);//Titik 1
    glVertex2d(326.61f,276.14f);//Titik 2
    glVertex2d(341.08f,274.37f);//titik 3
    glVertex2d(350.44f,345.7f);//titik 4
    glEnd();

    glBegin(GL_QUADS);//untuk atas
    glColor3f(0.98,0.886,0.149);
    glVertex2d(327.12f,276.63f);//Titik 1
    glVertex2d(376.99f,269.18f);//Titik 2
    glVertex2d(378.73f,282.15f);//titik 3
    glVertex2d(328.85f,288.6f);//titik 4
    glEnd();

    glBegin(GL_QUADS);//untuk tengah
    glColor3f(0.98,0.886,0.149);
    glVertex2d(330.65f,304.57f);//Titik 1
    glVertex2d(380.52f,297.12f);//Titik 2
    glVertex2d(382.27f,310.09f);//titik 3
    glVertex2d(332.38f,316.54f);//titik 4
    glEnd();

    glBegin(GL_QUADS);//untuk kanan
    glColor3f(0.98,0.886,0.149);
    glVertex2d(362.02f,270.97f);//Titik 1
    glVertex2d(372.39f,342.78f);//Titik 2
    glVertex2d(387.86f,340.99f);//titik 3
    glVertex2d(376.98f,268.68f);//titik 4
    glEnd();

    // X

    glBegin(GL_QUADS);//untuk kanan
    glColor3f(0.98,0.886,0.149);
    glVertex2d(381.97f,268.09f);//Titik 1
    glVertex2d(444.19f,331.41f);//Titik 2
    glVertex2d(459.14f,329.13f);//titik 3
    glVertex2d(398.43f,265.77f);//titik 4
    glEnd();

    glBegin(GL_QUADS);//untuk kiri
    glColor3f(0.98,0.886,0.149);
    glVertex2d(403.32f,338.84f);//Titik 1
    glVertex2d(440.95f,259.57f);//Titik 2
    glVertex2d(457.3f,256.57f);//titik 3
    glVertex2d(418.24f,336.29f);//titik 4
    glEnd();

    // D
    glBegin(GL_QUADS);//untuk kiri
    glColor3f(0.98,0.886,0.149);
    glVertex2d(472.23f,254.86f);//Titik 1
    glVertex2d(479.56f,324.74f);//Titik 2
    glVertex2d(494.53f,322.95f);//titik 3
    glVertex2d(487.69f,252.57f);//titik 4
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.98,0.886,0.149);
    glVertex2d(488.0f,253.59f);//Titik 1
    glVertex2d(519.64f,286.83f);//Titik 2
    glVertex2d(493.81f,323.24f);//titik 3
    glEnd();

    // H
    glBegin(GL_QUADS);//untuk kiri
    glColor3f(0.98,0.886,0.149);
    glVertex2d(519.66f,250.46f);//Titik 1
    glVertex2d(527.44f,317.82f);//Titik 2
    glVertex2d(539.42f,316.59f);//titik 3
    glVertex2d(531.63f,248.73f);//titik 4
    glEnd();

    glBegin(GL_QUADS);//untuk kanan
    glColor3f(0.98,0.886,0.149);
    glVertex2d(553.56f,245.31f);//Titik 1
    glVertex2d(561.35f,312.67f);//Titik 2
    glVertex2d(573.33f,311.45f);//titik 3
    glVertex2d(565.53f,243.58f);//titik 4
    glEnd();

    glBegin(GL_QUADS);//untuk tengah
    glColor3f(0.98,0.886,0.149);
    glVertex2d(526.18f,277.84f);//Titik 1
    glVertex2d(562.12f,274.65f);//Titik 2
    glVertex2d(563.83f,285.62f);//titik 3
    glVertex2d(527.9f,289.31f);//titik 4
    glEnd();

    // A
    glBegin(GL_QUADS);//untuk kiri
    glColor3f(0.98,0.886,0.149);
    glVertex2d(585.86f,313.21f);//Titik 1
    glVertex2d(575.5f,241.89f);//Titik 2
    glVertex2d(590.0f,240.12f);//titik 3
    glVertex2d(599.33f,311.45f);//titik 4
    glEnd();

    glBegin(GL_QUADS);//untuk atas
    glColor3f(0.98,0.886,0.149);
    glVertex2d(576.01f,242.38f);//Titik 1
    glVertex2d(625.88f,234.93f);//Titik 2
    glVertex2d(627.63f,247.9f);//titik 3
    glVertex2d(577.74f,254.35f);//titik 4
    glEnd();

    glBegin(GL_QUADS);//untuk atas
    glColor3f(0.98,0.886,0.149);
    glVertex2d(610.91f,236.72f);//Titik 1
    glVertex2d(621.28f,308.53f);//Titik 2
    glVertex2d(636.75f,306.74f);//titik 3
    glVertex2d(625.87f,234.43f);//titik 4
    glEnd();

    glBegin(GL_QUADS);//untuk atas
    glColor3f(0.98,0.886,0.149);
    glVertex2d(579.55f,270.32f);//Titik 1
    glVertex2d(629.41f,262.87f);//Titik 2
    glVertex2d(631.16f,275.84f);//titik 3
    glVertex2d(581.27f,282.29f);//titik 4
    glEnd();
}

void display_levelup()
{
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(306.0f, 487.0f);
    glVertex2f(1142.0f, 563.0f);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(301.0f, 717.77f);
    glVertex2f(1139.01f, 766.96f);
    glEnd();

float naik;

    //Level
    glPushMatrix();
    naik = glfwGetTime()*-150;
    if(naik<(-230)) naik = -230;
    glTranslatef( 0,naik,0);
    // L
    glBegin(GL_QUADS);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(385.0f ,803.0f);
        glVertex2f(403.0f, 935.0f);
        glVertex2f(432.0f,923.0f);
        glVertex2f(417.0f, 743.0f);
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(415.5f ,882.0f);
        glVertex2f(466.5f,852.5f);
        glVertex2f(478.5f, 902.0f);
        glVertex2f(420.0f, 927.0f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    naik = glfwGetTime()*-145;
    if(naik<(-230)) naik = -230;
    glTranslatef( 0,naik,0);
    // E
    glBegin(GL_TRIANGLES);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(467.0f ,819.0f);
        glVertex2f(521.5f, 912.5f);
        glVertex2f(467.0f,879.9f);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(467.0f ,819.0f);
        glVertex2f(521.5f, 912.5f);
        glVertex2f(541.0f, 912.0f);
        glVertex2f(483.5f, 812.0f);
    glEnd();
    // bawah
    glBegin(GL_QUADS);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(521.5f ,885.0f);
        glVertex2f(540.5f, 911.5f);
        glVertex2f(572.0f, 911.5f);
        glVertex2f(579.5f, 869.5f);
    glEnd();
    // atas
    glBegin(GL_QUADS);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(466.5f ,818.0f);
        glVertex2f(519.5f, 797.0f);
        glVertex2f(531.5f, 811.0f);
        glVertex2f(477.5f, 836.5f);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(508.0f ,802.5f);
        glVertex2f(521.5f, 798.0f);
        glVertex2f(554.5f,839.0f);
        glVertex2f(539.5f, 844.0f);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(482.5f ,847.0f);
        glVertex2f(543.5f, 823.5f);
        glVertex2f(555.5f,840.0f);
        glVertex2f(490.5,860.0f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    naik = glfwGetTime()*-140;
    if(naik<(-230)) naik = -230;
    glTranslatef( 0,naik,0);
    // v
    glBegin(GL_QUADS);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(549.5f, 792.5f);
        glVertex2f(585.5f, 910.0f);
        glVertex2f(612.0f, 910.0f);
        glVertex2f(572.0f, 792.5f);
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(614.0f, 792.5f);
        glVertex2f(600.5f, 878.5f);
        glVertex2f(612.5f, 909.5f);
        glVertex2f(647.0f, 792.5f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    naik = glfwGetTime()*-135;
    if(naik<(-230)) naik = -230;
    glTranslatef( 0,naik,0);
    // E kedua
    glBegin(GL_TRIANGLES);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(625.0f ,878.9f);
        glVertex2f(625.0f, 818.0f);
        glVertex2f(679.5f,911.5f);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(625.0f ,818.0f);
        glVertex2f(642.0f, 811.0f);
        glVertex2f(699.5f,911.0f);
        glVertex2f(679.5f,911.5f);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(679.5f ,877.0f);
        glVertex2f(738.0f, 868.5f);
        glVertex2f(730.5f, 910.5f);
        glVertex2f(699.0f,910.5f);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(625.0f ,817.0f);
        glVertex2f(678.0f, 796.5f);
        glVertex2f(690.5f, 810.5f);
        glVertex2f(636.0f,835.5f);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(666.5f ,801.5f);
        glVertex2f(680.0f, 797.0f);
        glVertex2f(713.5f, 838.0f);
        glVertex2f(698.0f,843.0f);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(641.0f ,846.0f);
        glVertex2f(702.0f, 822.5f);
        glVertex2f(714.0f, 839.0f);
        glVertex2f(649.0f,859.0f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    naik = glfwGetTime()*-130;
    if(naik<(-230)) naik = -230;
    glTranslatef( 0,naik,0);
    // L
    glBegin(GL_QUADS);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(716.0f, 788.5f);
        glVertex2f(758.5f, 773.0f);
        glVertex2f(731.0f, 910.5f);
        glVertex2f(716.0f, 910.5f);
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(728.0f, 875.0f);
        glVertex2f(728.5f, 912.0f);
        glVertex2f(791.0f, 912.0f);
        glVertex2f(791.0f, 875.f);
    glEnd();
    glPopMatrix();


    //up
    glPushMatrix();
    naik = glfwGetTime()*-100;
    if(naik<(-205)) naik = -205;
    glTranslatef( 0,naik,0);
    //u
    glBegin(GL_QUADS);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(844.5f ,838.0f);
        glVertex2f(866.0f,  838.0f);
        glVertex2f( 866.0f,909.0f);
        glVertex2f(844.5f, 909.0f);
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(844.5f ,882.5f);
        glVertex2f(930.0f, 882.5f);
        glVertex2f(930.0f,908.5f);
        glVertex2f(855.5f, 908.5f);
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(902.5f ,798.0f);
        glVertex2f(902.5f, 909.0f);
        glVertex2f(929.5f,909.0f);
        glVertex2f(929.5f, 798.0f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    naik = glfwGetTime()*-95;
    if(naik<(-245)) naik = -245;
    glTranslatef( 0,naik,0);
    //P
    glBegin(GL_QUADS);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(950.5f ,840.0f);
        glVertex2f(1018.0f, 840.0f);
        glVertex2f(1018.0f,915.0f);
        glVertex2f(950.5f, 915.0f);
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(0.98,0.886,0.165);
         glVertex2f(950.5f, 915.0f);
        glVertex2f(982.0f, 915.0f);
        glVertex2f(982.0f,976.5);
        glVertex2f(950.5f,976.5f);
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(0.0,0.0,0.0);
         glVertex2f(970.5f, 860.5f);
        glVertex2f(1004.5f, 860.5f);
        glVertex2f(1004.5f,877.5f);
        glVertex2f(970.5f,877.5f);
    glEnd();

     glPopMatrix();



    glPushMatrix();
    naik = glfwGetTime()*-85;
    if(naik<(-250)) naik = -250;
    glTranslatef( 0,naik,0); // Bergeser ke kanan 100
    // !
    glBegin(GL_QUADS);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(1063.0f ,843.0f);
        glVertex2f( 1085.5f,  843.0f);
        glVertex2f( 1085.5f,920.5f);
        glVertex2f(1063.0f, 920.5f);
    glEnd();

    glBegin(GL_QUADS);
       glColor3f(0.98,0.886,0.165);
        glVertex2f(1062.0f ,949.5f);
        glVertex2f( 1089.0f,  949.5f);
        glVertex2f( 1089.0f,976.5f);
        glVertex2f(1062.0f, 976.5f);
    glEnd();
    glPopMatrix();


}

void display_lv()
{
    glBegin(GL_LINE_LOOP);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2f(857.0f ,  87.0f);
        glVertex2f( 1125.0f,  87.0f);
        glVertex2f( 1125.0f, 226.0f);
        glVertex2f(857.0f, 226.0f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(894.0f , 137.5f);
        glVertex2f( 921.5f,  115.0f);
        glVertex2f( 888.5f,  206.5f);
        glVertex2f( 874.5f,  209.0f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(899.0f , 175.5f);
        glVertex2f( 936.0f,  169.0f);
        glVertex2f( 936.0f,  198.0f);
        glVertex2f( 888.0f,  206.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(970.0f , 209.0f);
        glVertex2f( 970.0f,  180.5f);
        glVertex2f( 944.0f,  164.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(970.0f , 209.0f);
        glVertex2f( 970.0f,  180.5f);
        glVertex2f( 996.0f,  164.0f);
    glEnd();

    // 7
    glBegin(GL_QUADS);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(1057.5f , 140.0f);
        glVertex2f(1046.0f,  114.5f);
        glVertex2f(1108.5f,  114.5f);
        glVertex2f(1099.5f,  140.0f);
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(1079.0f , 191.0f);
        glVertex2f(1104.0f,  125.5f);
        glVertex2f(1082.5f,  125.5f);
        glVertex2f(1056.5f,  191.0f);
    glEnd();

}

void display_topeng()
{
   float muter;
    muter = glfwGetTime()*150;

    glPushMatrix();
    glTranslatef(1011.5, 365, 0);
    glRotatef(muter, 0.f, 1.f, 0.f);
    glTranslatef(-1011.5, -365, 0);

    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2f(917.5f , 339.5f);
        glVertex2f( 981.0f,  359.0f);
        glVertex2f( 1017.5f, 374.0f);
        glVertex2f(994.0f, 409.0f);
        glVertex2f(971.5f, 415.0f);
        glVertex2f(934.5f, 386.5f);
    glEnd();

    glBegin(GL_POLYGON);      // tengah topeng
        glColor3f(1.0, 1.0, 1.0);
        glVertex2f(992.5f , 410.0f);
        glVertex2f( 1017.5f,  374.0f);
        glVertex2f( 1040.5f, 410.0f);
        glVertex2f(1017.5f, 428.0f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2f(1017.0f , 374.5f);
        glVertex2f(1053.5f,  359.5f);
        glVertex2f(1117.0f, 340.0f);
        glVertex2f(1100.0f, 387.0f);
        glVertex2f(1063.0f, 415.5f);
        glVertex2f(1040.5f, 409.5f);
    glEnd();

    // dalam topeng
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(940.0f , 359.0f);
        glVertex2f(979.0f,  369.0f);
        glVertex2f(996.0f, 379.0f);
        glVertex2f(1005.0f, 396.0f);
        glVertex2f(979.0f, 396.0f);
        glVertex2f(957.0f, 389.0f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(1034.0f , 396.0f);
        glVertex2f(1043.0f,  379.0f);
        glVertex2f(1060.0f, 369.0f);
        glVertex2f(1099.0f, 359.0f);
        glVertex2f(1082.0f, 389.0f);
        glVertex2f(1060.0f, 396.0f);
    glEnd();
    glPopMatrix();
}

void display_scale()
{
float scale;
    glTranslatef(0, 15, 0);
    glScalef(glfwGetTime()*0.05,0.05,1);
    glBegin(GL_POLYGON);
        glColor3f(0.98,0.886,0.165);
        glVertex2f(82.0f ,  41.0f);
        glVertex2f( 1139.0f,  41.0f);
        glVertex2f( 1139.0f, 742.0f);
        glVertex2f(82.0f, 742.0f);
    glEnd();
}
/*
 * CALLBACKS FUNCTIONS
 */





static void error_callback(int error, const char* description) {
    //fputs(description);
}

// Callback untuk merespons penekanan kunci pada keyboard
static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods){}

// Callback untuk merespons perubahan posisi kursor
static void cursor_position_callback(GLFWwindow* window, double xpos, double ypos){}
// Callback untuk merespons penekanan tombol pada mouse
void mouse_button_callback(GLFWwindow* window, int button, int action, int mods){
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
    window = glfwCreateWindow(1100, 800, "Interaction", NULL, NULL);
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
        glOrtho(0, 1200, 1000 , 0 , 1000.f, -1000.f);
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();

        display();
        display_nama();
        display_levelup();
        display_lv();
        display_topeng();


        /* Object Drawing*/
        rect.display();

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
