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
    double x=500, y=500;
    double prevY = 0;
    float red = 255, green = 255, blue = 255;
    int size = 100;
    bool Move = false;

    void display()
    {
        glBegin(GL_POLYGON);
        glColor3d(red,green,blue);
             glVertex2f(-size + x,  size + y);
            glVertex2f( size + x,  size + y);
            glVertex2f( size + x, -size + y);
            glVertex2f(-size + x, -size + y);
        glEnd();
    }

    GLboolean isRectangleSelected(double xpos, double ypos)
        {
        double left = x - size;
        double right = x + size;
        double top = y + size;
        double bottom = y - size;


        if((xpos > left) && (xpos < right) && (ypos < top) && (ypos > bottom))
            return GL_TRUE;
        else
            return GL_FALSE;
        }
    void doIfSelected(double xpos, double ypos)
        {}

    void doIfClicked(int button, int action, double xpos, double ypos){
        if (button == GLFW_MOUSE_BUTTON_LEFT && action == GLFW_PRESS && isRectangleSelected(xpos, ypos) == GL_TRUE){
            Move = true;
        }
        if (button == GLFW_MOUSE_BUTTON_LEFT && action == GLFW_RELEASE){
            Move = false;
        }
    }
    void doIfCursorMove(double xpos, double ypos)
        {
           if (Move == true)
           {
                x = xpos;
                y = ypos;
           }
        }

};
Rectangle rect;
/*
 * CALLBACKS FUNCTIONS
 */
static void error_callback(int error, const char* description)
{
    //fputs(description);
}

// Callback untuk merespons penekanan kunci pada keyboard
static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods){}

// Callback untuk merespons perubahan posisi kursor
static void cursor_position_callback(GLFWwindow* window, double xpos, double ypos)
    {
    rect.doIfSelected(xpos, ypos);
    rect.doIfCursorMove(xpos, ypos);
    }

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
    window = glfwCreateWindow(1000, 1000, "Interaction", NULL, NULL);
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
        glClearColor(0.3f,0.9f,0.882f, 1.f);
        glClear(GL_COLOR_BUFFER_BIT);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        glOrtho(0, 1000, 1000 , 0 , 1000.f, -1000.f);
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();

        /* Object Drawing*/
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

