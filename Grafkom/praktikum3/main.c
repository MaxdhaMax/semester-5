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

    while (!glfwWindowShouldClose(window)){
        setup_viewport(window);
        display();
        glPushMatrix();
        glTranslatef(glfwGetTime()*-30,90,0);
        glBegin(GL_QUADS);
            glColor3d(0.929,0.204,0.204);
            glVertex2d(117, 211);
            glVertex2d(377, 128);
            glVertex2d(437, 324);
            glVertex2d(205, 404);
        glEnd();
        glPopMatrix();
        glPushMatrix();
        glRotatef(glfwGetTime()*10, 0, 0, 1); // Berputar 30 derajat anticlockwise pada titik pusat (0,0)
        glBegin(GL_TRIANGLES);
            glColor3d(0, 255, 0);
            glVertex2d(437, 600);
            glVertex2d(725, 404);
            glVertex2d(805, 732);
        glEnd();
        glPopMatrix();
        glScalef(glfwGetTime()*0.75,0.25,1); // Sumbu X diperkecil menjadi 0.75 dan sumbu Y diperkecil menjadi 0.25
        glLineWidth(10);
        glBegin(GL_LINES);
           glColor3d(0,0.22,1);
           glVertex2d(731.03f,242.76f);
           glVertex2d(268.97f,605.24);
        glEnd();




        glfwSwapBuffers(window);
        glfwPollEvents();
        }

    //Fungsi Exit
    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
 }

