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

void display()  {
  glClear(GL_COLOR_BUFFER_BIT);

  glFlush();
}

int main(void) {
    //Window
    GLFWwindow* window;
    glfwSetErrorCallback(error_callback);

    if (!glfwInit())exit(EXIT_FAILURE);
    window = glfwCreateWindow(1000, 1000, "Simple Example", NULL, NULL);

    if (!window){
        glfwTerminate();
        exit(EXIT_FAILURE);
        }

    glfwMakeContextCurrent(window);
    glfwSwapInterval(1);
    glfwSetKeyCallback(window, key_callback);
    int move;
    int naik;
    int kiri;
    int nutup;

    while (!glfwWindowShouldClose(window)){
        setup_viewport(window);
        display();



        glPushMatrix();
        move = glfwGetTime()*-90;
        if(move<(-110)) move = -110;
        glTranslatef( move,-120,0); // Bergeser ke kanan 100
        glBegin(GL_QUADS);
            glColor3d(0.161,0.714,0.965);
            glVertex2d(600, 278);
            glVertex2d(770.0f, 356.1f);
            glVertex2d(770.0f, 754.77f);
            glVertex2d(600, 810);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        naik = glfwGetTime()*-90;
        if(naik<(-125)) naik = -125;
        glTranslatef(-125,naik,0);
        glBegin(GL_QUADS);
            glColor3d(0.008,0.467,0.741);
            glVertex2d(260, 352);
            glVertex2d(612, 660);
            glVertex2d(612, 816);
            glVertex2d(204,392);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        kiri = glfwGetTime()*-65;
        if(kiri<(-130))kiri=-130;
        glTranslatef(kiri,-100,0);
        glBegin(GL_QUADS);
            glColor3d(0.016,0.431,0.678);
            glVertex2d(616, 264);
            glVertex2d(196, 676);
            glVertex2d(256, 712);
            glVertex2d(616,416);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        nutup = glfwGetTime()*85;
        if(nutup<(-30))nutup=-30;
        glRotatef(nutup, 0, 0, 1);
        glBegin(GL_POLYGON);
            glColor3d(1,1,1);
            glVertex2d(52, 64);
            glVertex2d(710, 64);
            glVertex2d(710, 712);
            glVertex2d(52, 712);
        glEnd();
        glPopMatrix();
        glfwSwapBuffers(window);
        glfwPollEvents();
        }

    //Fungsi Exit
    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
 }
