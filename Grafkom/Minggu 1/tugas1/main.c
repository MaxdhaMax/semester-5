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
    glOrtho(0, 800, 800, 0, 1.f, -1.f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void display()
    {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); //warna background
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();

    //Segitiga awal
    glBegin(GL_POLYGON);//untuk mulai
    glColor3f(0.62,0.878,0.957);
    glVertex2f(216.4, 42.74);//Kordinat titik 1
    glVertex2f(152.08,138.74);//Titik kedua
    glVertex2f(316.08,111.08);//Titik kedua
    glEnd();

    //Trapesium1
    glBegin(GL_QUADS);//untuk mulai
    glColor3f(0.157,0.71,0.745);
    glVertex2d(316.08f,111.08f);//Titik 1
    glVertex2d(152.08f,138.74f);//Titik 2
    glVertex2d(106.08f,207.74f);//titik 3
    glVertex2d(393.08f,159.24f);//titik 4
    glEnd();

    glBegin(GL_QUADS);//untuk mulai
    glColor3f(0.278,0.388,0.667);
    glVertex2d(393,159);//Titik 1
    glVertex2d(106.0f,207.81f);//Titik 2
    glVertex2d(204.31f,268.0f);//titik 3
    glVertex2d(332.75f,243.6f);//titik 4
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.161,0.451,0.882);
    glVertex2f(202, 266.83);//Kordinat titik 1
    glVertex2f(282.25,319);//Titik kedua
    glVertex2f(332,244);//Titik kedua
    glEnd();

    glBegin(GL_QUADS);//untuk mulai
    glColor3f(0.847,0.008,0.984);
    glVertex2d(250,298);//Titik 1
    glVertex2d(286.07f,445.0f);//Titik 2
    glVertex2d(297,427);//titik 3
    glVertex2d(265.3f,308.0f);//titik 4
    glEnd();

    glBegin(GL_QUADS);//untuk mulai
    glColor3f(0.847,0.008,0.984);
    glVertex2d(292,304);//Titik 1
    glVertex2d(318, 420);//Titik 2
    glVertex2d(339,432);//titik 3
    glVertex2d(302, 288);//titik 4
    glEnd();

    }

 int main(void) {
        //Window
        GLFWwindow* window;
        glfwSetErrorCallback(error_callback);

        if (!glfwInit())exit(EXIT_FAILURE);
        window = glfwCreateWindow(500, 500, "Simple Example", NULL, NULL);

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
          glfwSwapBuffers(window);
          glfwPollEvents();
        }

    //Fungsi Exit
    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
 }
