#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <stdio.h>

    static void error_callback(int error, const char* description) {
      fputs(description, stderr);
    }
    static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods){
      if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
      glfwSetWindowShouldClose(window, GL_TRUE);
    }

    void setup_viewport(GLFWwindow* window)
{
    // setting viewports size, projection etc
    float ratio;
    int width, height;
    glfwGetFramebufferSize(window, &width, &height);
    ratio = width / (float) height;
    glViewport(0, 0, width, height);

    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 1200, 800, 0, 1.f, -1.f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

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
}

 int main(void) {
        //Window
        GLFWwindow* window;
        glfwSetErrorCallback(error_callback);

        if (!glfwInit())exit(EXIT_FAILURE);
        window = glfwCreateWindow(1000, 800, "Simple Example", NULL, NULL);

        if (!window){
          glfwTerminate();
          exit(EXIT_FAILURE);
        }

        glfwMakeContextCurrent(window);
        glfwSwapInterval(1);
        glfwSetKeyCallback(window, key_callback);

        while (!glfwWindowShouldClose(window)){
          int width, height;
          glfwGetFramebufferSize(window, &width, &height);
          glViewport(0, 0, width, height);
          //fungsi untuk menampilkan objek
          setup_viewport(window);
          display();
          display_nama();
          display_levelup();
          glfwSwapBuffers(window);
          glfwPollEvents();
        }

    //Fungsi Exit
    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
 }
