#include <GLFW/glfw3.h>
#include <iostream>
#include <list>
#include <iterator>

using namespace std;

/*
 * CLASSES DECLARATION
 */

// Rectangle class
class Rectangle{
public:
    double x=200, y=200;
    double prevY = 0;
    int red = 255, green = 255, blue = 255;
    int size = 20;

    void display()
    {
        //glBegin(GL_POLYGON);
            //glColor3ub(red, green, blue);
            //glVertex2f(-size + x,  size + y);
            //glVertex2f( size + x,  size + y);
            //glVertex2f( size + x, -size + y);
            //glVertex2f(-size + x, -size + y);
        //glEnd();
    }
    GLboolean isRectangleSelected(double xpos, double ypos){return GL_TRUE;}
    void doIfSelected(double xpos, double ypos){}
    void doIfKeyPressed(int key, int action){}
    void doIfClicked(int button, int action, double xpos, double ypos){}
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
        glVertex3d(474.0f, 539.5f, 0);
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




  glFlush();
 }




static void error_callback(int error, const char* description) {
    //fputs(description);
}

// Callback untuk merespons penekanan kunci pada keyboard
static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods){}

// Callback untuk merespons perubahan posisi kursor
static void cursor_position_callback(GLFWwindow* window, double xpos, double ypos){}

// Callback untuk merespons penekanan tombol pada mouse
void mouse_button_callback(GLFWwindow* window, int button, int action, int mods){}

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
        rect.display();


        /* Handling Frame Changes */
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    /* Destroying Windows */
    glfwDestroyWindow(window);
    glfwTerminate();
    //exit(EXIT_SUCCESS);
}

