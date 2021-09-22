#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

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
    glOrtho(0, 1200, 1000, 0, 1.f, -1.f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void display()  {
  glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
  glClear(GL_COLOR_BUFFER_BIT);

  glFlush();
}

void display_balingK()
{
    glColor3d(0.976,0.702,0.141);
    glBegin(GL_TRIANGLES);
        glVertex3d(289.5f, 98.0f, 0);
        glVertex3d(379.5f, 208.0f, 0);
        glVertex3d(268, 241, 0);
    glEnd();

    glColor3d(0.976,0.702,0.141);
    glBegin(GL_QUADS);
        glVertex3d(379.5f, 208.0f, 0);
        glVertex3d(436, 279, 0);
        glVertex3d(337.5f, 329.5f,0);
        glVertex3d(268, 241, 0);
    glEnd();

    glColor3d(0.976,0.702,0.141);
    glBegin(GL_TRIANGLES);
        glVertex3d(268.0f, 241.0f, 0);
        glVertex3d(294, 274, 0);
        glVertex3d(273.5f, 282.0f,0);
    glEnd();

    glColor3d(0.976,0.702,0.141);
    glBegin(GL_QUADS);
        glVertex3d(273.5f, 282.0f,0);
        glVertex3d(294, 274, 0);
        glVertex3d(317.0f, 302.5f,0);
        glVertex3d(302.0f, 309.0f,0);
    glEnd();

    glColor3d(0.976,0.702,0.141);
    glBegin(GL_TRIANGLES);
        glVertex3d(273.5f, 282.0f,0);
        glVertex3d(302.0f, 309.0f,0);
        glVertex3d(282.5f, 317.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(317.0f, 302.5f,0);
        glVertex3d(282.5f, 317.5f,0);
        glVertex3d(294.0f, 343.5f,0);
        glVertex3d(337.5f, 329.5f,0);
    glEnd();

    // segitiga bawah

    glColor3d(0.976,0.702,0.141);
    glBegin(GL_TRIANGLES);
        glVertex3d(294.0f,343.5f,0);
        glVertex3d(317.0f,336.0f,0);
        glVertex3d(312.5f,355.5f,0);
    glEnd();

    glColor3d(0.976,0.702,0.141);
    glBegin(GL_POLYGON);
        glVertex3d(317.0f,336.0f,0);
        glVertex3d(312.5f,355.5f,0);
        glVertex3d(338.5f,367.5f,0);
        glVertex3d(337.0f,330.0f,0);
    glEnd();

     glBegin(GL_QUADS);
        glVertex3d(336.5f, 330.0f,0);
        glVertex3d(338.5f,367.5f,0);
        glVertex3d(357.0f,374.0f,0);
        glVertex3d(365.0f, 315.0f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(365.0f, 315.0f,0);
        glVertex3d(357.0f,374.0f,0);
        glVertex3d(377.5f,380.5f,0);
        glVertex3d(391.5f,302.0f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(377.5f,380.5f,0);
        glVertex3d(391.5f,302.0f,0);
         glVertex3d(406.0f, 311.5f,0);
        glVertex3d(393.0f,384.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(406.0f, 311.5f,0);
        glVertex3d(393.0f,384.5f,0);
        glVertex3d(411.0f, 388.5f,0);
        glVertex3d(422.5f,321.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(411.0f, 388.5f,0);
        glVertex3d(422.5f,321.5f,0);
        glVertex3d(436.5f, 330.0f,0);
        glVertex3d(425.5f,392.0f,0);
    glEnd();

    // segitiga besar
     glBegin(GL_TRIANGLES);
        glVertex3d(391.0f,302.0f,0);
         glVertex3d(436.0f, 330.0f,0);
        glVertex3d(427.0f, 283.5f,0);
    glEnd();

    // segitiga kecil
    glBegin(GL_TRIANGLES);
        glVertex3d(436.0f, 330.0f,0);
        glVertex3d(430.0f, 364.0f,0);
        glVertex3d(453.0f, 365.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(430.0f, 364.0f,0);
        glVertex3d(425.5f,392.0f,0);
        glVertex3d(468.5f, 396.5f,0);
        glVertex3d(454.5f,366.0f,0);
    glEnd();

     glBegin(GL_TRIANGLES);
        glVertex3d(450.0f, 365.5f,0);
        glVertex3d(447.0f, 351.5f,0);
        glVertex3d(461.0f, 366.0f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(453.0f, 365.5f,0);
        glVertex3d(468.5f, 396.5f,0);
        glVertex3d(479.5f, 396.0f,0);
        glVertex3d(461.0f,366.0f,0);
    glEnd();

    glBegin(GL_TRIANGLES);
        glVertex3d(461.0f, 366.0f,0);
        glVertex3d(479.5f, 396.0f,0);
        glVertex3d(493.0f, 394.0f,0);
    glEnd();

    glBegin(GL_TRIANGLES);
        glVertex3d(477.5f, 396.0f,0);
        glVertex3d(492.5f, 388.5f,0);
        glVertex3d(492.5f, 392.5f,0);
    glEnd();

    // BAYANGAN
    glColor3d(1.,0.827,0.141);
     glBegin(GL_TRIANGLES);
        glVertex3d(295.0f, 344.0f,0);
        glVertex3d(307.0f, 360.5f,0);
        glVertex3d(312.5f, 355,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(307.0f, 360.5f,0);
        glVertex3d(312.5f, 355.0f,0);
        glVertex3d(326.5f, 361.5f,0);
        glVertex3d(318.5f, 376.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(326.5f, 361.5f,0);
        glVertex3d(318.5f, 376.0f,0);
        glVertex3d(327.5f, 388.0f,0);
        glVertex3d(339.0f, 367.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(327.5f, 388.0f,0);
        glVertex3d(339.0f, 367.5f,0);
        glVertex3d(357.0f, 374.0f,0);
        glVertex3d(340.5f, 405.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(357.0f, 374.0f,0);
        glVertex3d(340.5f, 405.5f,0);
        glVertex3d(356.5f, 427.0f,0);
        glVertex3d(377.0f, 380.0f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(356.5f, 427.0f,0);
        glVertex3d(377.0f, 380.0f,0);
        glVertex3d(392.5f, 384.5f,0);
        glVertex3d(373.0f, 448.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(392.5f, 384.5f,0);
        glVertex3d(373.0f, 448.5f,0);
        glVertex3d(389.5f, 471.0f,0);
        glVertex3d(410.5f, 388.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(389.5f, 471.0f,0);
        glVertex3d(410.5f, 388.5f,0);
        glVertex3d(429.5f, 393.0f,0);
        glVertex3d(409.0f, 474.0f,0);
    glEnd();

    glBegin(GL_TRIANGLES);
        glVertex3d(389.5f, 471.0f,0);
        glVertex3d(409.0f, 474.0f,0);
        glVertex3d(396.0f, 477.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(429.5f, 393.0f,0);
        glVertex3d(409.0f, 474.0f,0);
        glVertex3d(423.0f, 469.5f,0);
        glVertex3d(442.5f, 393.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(423.0f, 469.5f,0);
        glVertex3d(442.5f, 393.5f,0);
        glVertex3d(453.5f, 394.5f,0);
        glVertex3d(436.5f, 463.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(453.5f, 394.5f,0);
        glVertex3d(436.5f, 463.5f,0);
        glVertex3d(447.5f, 457.0f,0);
        glVertex3d(460.5f, 395.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(447.5f, 457.0f,0);
        glVertex3d(460.5f, 395.5f,0);
        glVertex3d(468.5f, 396.5f,0);
        glVertex3d(460.5f, 447.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(468.5f, 396.5f,0);
        glVertex3d(460.5f, 447.5f,0);
        glVertex3d(472.5f, 436.0f,0);
        glVertex3d(478.5f, 396.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(472.5f, 436.0f,0);
        glVertex3d(478.5f, 396.5f,0);
        glVertex3d(486.5f, 395.5f,0);
        glVertex3d(483.5f, 423.5f,0);
    glEnd();

     glBegin(GL_QUADS);
        glVertex3d(486.5f, 395.5f,0);
        glVertex3d(483.5f, 423.5f,0);
        glVertex3d(491.5f, 411.5f,0);
        glVertex3d(491.5f, 395.0f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(491.5f, 401.0f,0);
        glVertex3d(491.5f, 411.5f,0);
        glVertex3d(495.0f, 406.0f,0);
    glEnd();
}

void display_balingB()
{
    glPushMatrix();
    glTranslatef(717.5, 583.5, 0);
    glRotatef(100, 0, 0, 1);
    glTranslatef(-717.5, -583.5, 0);

    glTranslatef(80,450,0);
    glColor3d(0.082,0.431,0.71);
    glBegin(GL_TRIANGLES);
        glVertex3d(289.5f, 98.0f, 0);
        glVertex3d(379.5f, 208.0f, 0);
        glVertex3d(268, 241, 0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(379.5f, 208.0f, 0);
        glVertex3d(436, 279, 0);
        glVertex3d(337.5f, 329.5f,0);
        glVertex3d(268, 241, 0);
    glEnd();

    glBegin(GL_TRIANGLES);
        glVertex3d(268.0f, 241.0f, 0);
        glVertex3d(294, 274, 0);
        glVertex3d(273.5f, 282.0f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(273.5f, 282.0f,0);
        glVertex3d(294, 274, 0);
        glVertex3d(317.0f, 302.5f,0);
        glVertex3d(302.0f, 309.0f,0);
    glEnd();

    glBegin(GL_TRIANGLES);
        glVertex3d(273.5f, 282.0f,0);
        glVertex3d(302.0f, 309.0f,0);
        glVertex3d(282.5f, 317.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(317.0f, 302.5f,0);
        glVertex3d(282.5f, 317.5f,0);
        glVertex3d(294.0f, 343.5f,0);
        glVertex3d(337.5f, 329.5f,0);
    glEnd();

    // segitiga bawah


    glBegin(GL_TRIANGLES);
        glVertex3d(294.0f,343.5f,0);
        glVertex3d(317.0f,336.0f,0);
        glVertex3d(312.5f,355.5f,0);
    glEnd();


    glBegin(GL_POLYGON);
        glVertex3d(317.0f,336.0f,0);
        glVertex3d(312.5f,355.5f,0);
        glVertex3d(338.5f,367.5f,0);
        glVertex3d(337.0f,330.0f,0);
    glEnd();

     glBegin(GL_QUADS);
        glVertex3d(336.5f, 330.0f,0);
        glVertex3d(338.5f,367.5f,0);
        glVertex3d(357.0f,374.0f,0);
        glVertex3d(365.0f, 315.0f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(365.0f, 315.0f,0);
        glVertex3d(357.0f,374.0f,0);
        glVertex3d(377.5f,380.5f,0);
        glVertex3d(391.5f,302.0f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(377.5f,380.5f,0);
        glVertex3d(391.5f,302.0f,0);
         glVertex3d(406.0f, 311.5f,0);
        glVertex3d(393.0f,384.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(406.0f, 311.5f,0);
        glVertex3d(393.0f,384.5f,0);
        glVertex3d(411.0f, 388.5f,0);
        glVertex3d(422.5f,321.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(411.0f, 388.5f,0);
        glVertex3d(422.5f,321.5f,0);
        glVertex3d(436.5f, 330.0f,0);
        glVertex3d(425.5f,392.0f,0);
    glEnd();

    // segitiga besar
     glBegin(GL_TRIANGLES);
        glVertex3d(391.0f,302.0f,0);
         glVertex3d(436.0f, 330.0f,0);
        glVertex3d(427.0f, 283.5f,0);
    glEnd();

    // segitiga kecil
    glBegin(GL_TRIANGLES);
        glVertex3d(436.0f, 330.0f,0);
        glVertex3d(430.0f, 364.0f,0);
        glVertex3d(453.0f, 365.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(430.0f, 364.0f,0);
        glVertex3d(425.5f,392.0f,0);
        glVertex3d(468.5f, 396.5f,0);
        glVertex3d(454.5f,366.0f,0);
    glEnd();

     glBegin(GL_TRIANGLES);
        glVertex3d(450.0f, 365.5f,0);
        glVertex3d(447.0f, 351.5f,0);
        glVertex3d(461.0f, 366.0f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(453.0f, 365.5f,0);
        glVertex3d(468.5f, 396.5f,0);
        glVertex3d(479.5f, 396.0f,0);
        glVertex3d(461.0f,366.0f,0);
    glEnd();

    glBegin(GL_TRIANGLES);
        glVertex3d(461.0f, 366.0f,0);
        glVertex3d(479.5f, 396.0f,0);
        glVertex3d(493.0f, 394.0f,0);
    glEnd();

    glBegin(GL_TRIANGLES);
        glVertex3d(477.5f, 396.0f,0);
        glVertex3d(492.5f, 388.5f,0);
        glVertex3d(492.5f, 392.5f,0);
    glEnd();

    // BAYANGAN
    glColor3d(0.431,0.792,0.937);
     glBegin(GL_TRIANGLES);
        glVertex3d(295.0f, 344.0f,0);
        glVertex3d(307.0f, 360.5f,0);
        glVertex3d(312.5f, 355,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(307.0f, 360.5f,0);
        glVertex3d(312.5f, 355.0f,0);
        glVertex3d(326.5f, 361.5f,0);
        glVertex3d(318.5f, 376.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(326.5f, 361.5f,0);
        glVertex3d(318.5f, 376.0f,0);
        glVertex3d(327.5f, 388.0f,0);
        glVertex3d(339.0f, 367.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(327.5f, 388.0f,0);
        glVertex3d(339.0f, 367.5f,0);
        glVertex3d(357.0f, 374.0f,0);
        glVertex3d(340.5f, 405.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(357.0f, 374.0f,0);
        glVertex3d(340.5f, 405.5f,0);
        glVertex3d(356.5f, 427.0f,0);
        glVertex3d(377.0f, 380.0f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(356.5f, 427.0f,0);
        glVertex3d(377.0f, 380.0f,0);
        glVertex3d(392.5f, 384.5f,0);
        glVertex3d(373.0f, 448.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(392.5f, 384.5f,0);
        glVertex3d(373.0f, 448.5f,0);
        glVertex3d(389.5f, 471.0f,0);
        glVertex3d(410.5f, 388.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(389.5f, 471.0f,0);
        glVertex3d(410.5f, 388.5f,0);
        glVertex3d(429.5f, 393.0f,0);
        glVertex3d(409.0f, 474.0f,0);
    glEnd();

    glBegin(GL_TRIANGLES);
        glVertex3d(389.5f, 471.0f,0);
        glVertex3d(409.0f, 474.0f,0);
        glVertex3d(396.0f, 477.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(429.5f, 393.0f,0);
        glVertex3d(409.0f, 474.0f,0);
        glVertex3d(423.0f, 469.5f,0);
        glVertex3d(442.5f, 393.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(423.0f, 469.5f,0);
        glVertex3d(442.5f, 393.5f,0);
        glVertex3d(453.5f, 394.5f,0);
        glVertex3d(436.5f, 463.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(453.5f, 394.5f,0);
        glVertex3d(436.5f, 463.5f,0);
        glVertex3d(447.5f, 457.0f,0);
        glVertex3d(460.5f, 395.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(447.5f, 457.0f,0);
        glVertex3d(460.5f, 395.5f,0);
        glVertex3d(468.5f, 396.5f,0);
        glVertex3d(460.5f, 447.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(468.5f, 396.5f,0);
        glVertex3d(460.5f, 447.5f,0);
        glVertex3d(472.5f, 436.0f,0);
        glVertex3d(478.5f, 396.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(472.5f, 436.0f,0);
        glVertex3d(478.5f, 396.5f,0);
        glVertex3d(486.5f, 395.5f,0);
        glVertex3d(483.5f, 423.5f,0);
    glEnd();

     glBegin(GL_QUADS);
        glVertex3d(486.5f, 395.5f,0);
        glVertex3d(483.5f, 423.5f,0);
        glVertex3d(491.5f, 411.5f,0);
        glVertex3d(491.5f, 395.0f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(491.5f, 401.0f,0);
        glVertex3d(491.5f, 411.5f,0);
        glVertex3d(495.0f, 406.0f,0);
    glEnd();

    glPopMatrix();
}

void display_balingM()
{
    glPushMatrix();
    glTranslatef(717.5, 583.5, 0);
    glRotatef(180, 0, 0, 1);
    glTranslatef(-717.5, -583.5, 0);

     glTranslatef(460,370,0);
    glColor3d(0.831,0.118,0.165);
    glBegin(GL_TRIANGLES);
        glVertex3d(289.5f, 98.0f, 0);
        glVertex3d(379.5f, 208.0f, 0);
        glVertex3d(268, 241, 0);
    glEnd();


    glBegin(GL_QUADS);
        glVertex3d(379.5f, 208.0f, 0);
        glVertex3d(436, 279, 0);
        glVertex3d(337.5f, 329.5f,0);
        glVertex3d(268, 241, 0);
    glEnd();


    glBegin(GL_TRIANGLES);
        glVertex3d(268.0f, 241.0f, 0);
        glVertex3d(294, 274, 0);
        glVertex3d(273.5f, 282.0f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(273.5f, 282.0f,0);
        glVertex3d(294, 274, 0);
        glVertex3d(317.0f, 302.5f,0);
        glVertex3d(302.0f, 309.0f,0);
    glEnd();


    glBegin(GL_TRIANGLES);
        glVertex3d(273.5f, 282.0f,0);
        glVertex3d(302.0f, 309.0f,0);
        glVertex3d(282.5f, 317.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(317.0f, 302.5f,0);
        glVertex3d(282.5f, 317.5f,0);
        glVertex3d(294.0f, 343.5f,0);
        glVertex3d(337.5f, 329.5f,0);
    glEnd();

    // segitiga bawah


    glBegin(GL_TRIANGLES);
        glVertex3d(294.0f,343.5f,0);
        glVertex3d(317.0f,336.0f,0);
        glVertex3d(312.5f,355.5f,0);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex3d(317.0f,336.0f,0);
        glVertex3d(312.5f,355.5f,0);
        glVertex3d(338.5f,367.5f,0);
        glVertex3d(337.0f,330.0f,0);
    glEnd();

     glBegin(GL_QUADS);
        glVertex3d(336.5f, 330.0f,0);
        glVertex3d(338.5f,367.5f,0);
        glVertex3d(357.0f,374.0f,0);
        glVertex3d(365.0f, 315.0f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(365.0f, 315.0f,0);
        glVertex3d(357.0f,374.0f,0);
        glVertex3d(377.5f,380.5f,0);
        glVertex3d(391.5f,302.0f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(377.5f,380.5f,0);
        glVertex3d(391.5f,302.0f,0);
         glVertex3d(406.0f, 311.5f,0);
        glVertex3d(393.0f,384.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(406.0f, 311.5f,0);
        glVertex3d(393.0f,384.5f,0);
        glVertex3d(411.0f, 388.5f,0);
        glVertex3d(422.5f,321.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(411.0f, 388.5f,0);
        glVertex3d(422.5f,321.5f,0);
        glVertex3d(436.5f, 330.0f,0);
        glVertex3d(425.5f,392.0f,0);
    glEnd();

    // segitiga besar
     glBegin(GL_TRIANGLES);
        glVertex3d(391.0f,302.0f,0);
         glVertex3d(436.0f, 330.0f,0);
        glVertex3d(427.0f, 283.5f,0);
    glEnd();

    // segitiga kecil
    glBegin(GL_TRIANGLES);
        glVertex3d(436.0f, 330.0f,0);
        glVertex3d(430.0f, 364.0f,0);
        glVertex3d(453.0f, 365.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(430.0f, 364.0f,0);
        glVertex3d(425.5f,392.0f,0);
        glVertex3d(468.5f, 396.5f,0);
        glVertex3d(454.5f,366.0f,0);
    glEnd();

     glBegin(GL_TRIANGLES);
        glVertex3d(450.0f, 365.5f,0);
        glVertex3d(447.0f, 351.5f,0);
        glVertex3d(461.0f, 366.0f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(453.0f, 365.5f,0);
        glVertex3d(468.5f, 396.5f,0);
        glVertex3d(479.5f, 396.0f,0);
        glVertex3d(461.0f,366.0f,0);
    glEnd();

    glBegin(GL_TRIANGLES);
        glVertex3d(461.0f, 366.0f,0);
        glVertex3d(479.5f, 396.0f,0);
        glVertex3d(493.0f, 394.0f,0);
    glEnd();

    glBegin(GL_TRIANGLES);
        glVertex3d(477.5f, 396.0f,0);
        glVertex3d(492.5f, 388.5f,0);
        glVertex3d(492.5f, 392.5f,0);
    glEnd();

    // BAYANGAN
    glColor3d(1.,0.494,0.518);
     glBegin(GL_TRIANGLES);
        glVertex3d(295.0f, 344.0f,0);
        glVertex3d(307.0f, 360.5f,0);
        glVertex3d(312.5f, 355,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(307.0f, 360.5f,0);
        glVertex3d(312.5f, 355.0f,0);
        glVertex3d(326.5f, 361.5f,0);
        glVertex3d(318.5f, 376.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(326.5f, 361.5f,0);
        glVertex3d(318.5f, 376.0f,0);
        glVertex3d(327.5f, 388.0f,0);
        glVertex3d(339.0f, 367.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(327.5f, 388.0f,0);
        glVertex3d(339.0f, 367.5f,0);
        glVertex3d(357.0f, 374.0f,0);
        glVertex3d(340.5f, 405.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(357.0f, 374.0f,0);
        glVertex3d(340.5f, 405.5f,0);
        glVertex3d(356.5f, 427.0f,0);
        glVertex3d(377.0f, 380.0f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(356.5f, 427.0f,0);
        glVertex3d(377.0f, 380.0f,0);
        glVertex3d(392.5f, 384.5f,0);
        glVertex3d(373.0f, 448.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(392.5f, 384.5f,0);
        glVertex3d(373.0f, 448.5f,0);
        glVertex3d(389.5f, 471.0f,0);
        glVertex3d(410.5f, 388.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(389.5f, 471.0f,0);
        glVertex3d(410.5f, 388.5f,0);
        glVertex3d(429.5f, 393.0f,0);
        glVertex3d(409.0f, 474.0f,0);
    glEnd();

    glBegin(GL_TRIANGLES);
        glVertex3d(389.5f, 471.0f,0);
        glVertex3d(409.0f, 474.0f,0);
        glVertex3d(396.0f, 477.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(429.5f, 393.0f,0);
        glVertex3d(409.0f, 474.0f,0);
        glVertex3d(423.0f, 469.5f,0);
        glVertex3d(442.5f, 393.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(423.0f, 469.5f,0);
        glVertex3d(442.5f, 393.5f,0);
        glVertex3d(453.5f, 394.5f,0);
        glVertex3d(436.5f, 463.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(453.5f, 394.5f,0);
        glVertex3d(436.5f, 463.5f,0);
        glVertex3d(447.5f, 457.0f,0);
        glVertex3d(460.5f, 395.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(447.5f, 457.0f,0);
        glVertex3d(460.5f, 395.5f,0);
        glVertex3d(468.5f, 396.5f,0);
        glVertex3d(460.5f, 447.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(468.5f, 396.5f,0);
        glVertex3d(460.5f, 447.5f,0);
        glVertex3d(472.5f, 436.0f,0);
        glVertex3d(478.5f, 396.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(472.5f, 436.0f,0);
        glVertex3d(478.5f, 396.5f,0);
        glVertex3d(486.5f, 395.5f,0);
        glVertex3d(483.5f, 423.5f,0);
    glEnd();

     glBegin(GL_QUADS);
        glVertex3d(486.5f, 395.5f,0);
        glVertex3d(483.5f, 423.5f,0);
        glVertex3d(491.5f, 411.5f,0);
        glVertex3d(491.5f, 395.0f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(491.5f, 401.0f,0);
        glVertex3d(491.5f, 411.5f,0);
        glVertex3d(495.0f, 406.0f,0);
    glEnd();
    glPopMatrix();
}


void display_balingH()
{
    glPushMatrix();
    glTranslatef(717.5, 583.5, 0);
    glRotatef(260, 0, 0, 1);
    glTranslatef(-717.5, -583.5, 0);

     glTranslatef(450,5,0);
    glColor3d(0.024,0.502,0.243);
    glBegin(GL_TRIANGLES);
        glVertex3d(289.5f, 98.0f, 0);
        glVertex3d(379.5f, 208.0f, 0);
        glVertex3d(268, 241, 0);
    glEnd();


    glBegin(GL_QUADS);
        glVertex3d(379.5f, 208.0f, 0);
        glVertex3d(436, 279, 0);
        glVertex3d(337.5f, 329.5f,0);
        glVertex3d(268, 241, 0);
    glEnd();


    glBegin(GL_TRIANGLES);
        glVertex3d(268.0f, 241.0f, 0);
        glVertex3d(294, 274, 0);
        glVertex3d(273.5f, 282.0f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(273.5f, 282.0f,0);
        glVertex3d(294, 274, 0);
        glVertex3d(317.0f, 302.5f,0);
        glVertex3d(302.0f, 309.0f,0);
    glEnd();


    glBegin(GL_TRIANGLES);
        glVertex3d(273.5f, 282.0f,0);
        glVertex3d(302.0f, 309.0f,0);
        glVertex3d(282.5f, 317.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(317.0f, 302.5f,0);
        glVertex3d(282.5f, 317.5f,0);
        glVertex3d(294.0f, 343.5f,0);
        glVertex3d(337.5f, 329.5f,0);
    glEnd();

    // segitiga bawah


    glBegin(GL_TRIANGLES);
        glVertex3d(294.0f,343.5f,0);
        glVertex3d(317.0f,336.0f,0);
        glVertex3d(312.5f,355.5f,0);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex3d(317.0f,336.0f,0);
        glVertex3d(312.5f,355.5f,0);
        glVertex3d(338.5f,367.5f,0);
        glVertex3d(337.0f,330.0f,0);
    glEnd();

     glBegin(GL_QUADS);
        glVertex3d(336.5f, 330.0f,0);
        glVertex3d(338.5f,367.5f,0);
        glVertex3d(357.0f,374.0f,0);
        glVertex3d(365.0f, 315.0f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(365.0f, 315.0f,0);
        glVertex3d(357.0f,374.0f,0);
        glVertex3d(377.5f,380.5f,0);
        glVertex3d(391.5f,302.0f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(377.5f,380.5f,0);
        glVertex3d(391.5f,302.0f,0);
         glVertex3d(406.0f, 311.5f,0);
        glVertex3d(393.0f,384.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(406.0f, 311.5f,0);
        glVertex3d(393.0f,384.5f,0);
        glVertex3d(411.0f, 388.5f,0);
        glVertex3d(422.5f,321.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(411.0f, 388.5f,0);
        glVertex3d(422.5f,321.5f,0);
        glVertex3d(436.5f, 330.0f,0);
        glVertex3d(425.5f,392.0f,0);
    glEnd();

    // segitiga besar
     glBegin(GL_TRIANGLES);
        glVertex3d(391.0f,302.0f,0);
         glVertex3d(436.0f, 330.0f,0);
        glVertex3d(427.0f, 283.5f,0);
    glEnd();

    // segitiga kecil
    glBegin(GL_TRIANGLES);
        glVertex3d(436.0f, 330.0f,0);
        glVertex3d(430.0f, 364.0f,0);
        glVertex3d(453.0f, 365.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(430.0f, 364.0f,0);
        glVertex3d(425.5f,392.0f,0);
        glVertex3d(468.5f, 396.5f,0);
        glVertex3d(454.5f,366.0f,0);
    glEnd();

     glBegin(GL_TRIANGLES);
        glVertex3d(450.0f, 365.5f,0);
        glVertex3d(447.0f, 351.5f,0);
        glVertex3d(461.0f, 366.0f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(453.0f, 365.5f,0);
        glVertex3d(468.5f, 396.5f,0);
        glVertex3d(479.5f, 396.0f,0);
        glVertex3d(461.0f,366.0f,0);
    glEnd();

    glBegin(GL_TRIANGLES);
        glVertex3d(461.0f, 366.0f,0);
        glVertex3d(479.5f, 396.0f,0);
        glVertex3d(493.0f, 394.0f,0);
    glEnd();

    glBegin(GL_TRIANGLES);
        glVertex3d(477.5f, 396.0f,0);
        glVertex3d(492.5f, 388.5f,0);
        glVertex3d(492.5f, 392.5f,0);
    glEnd();

    // BAYANGAN
    glColor3d(0.263,0.765,0.18);
     glBegin(GL_TRIANGLES);
        glVertex3d(295.0f, 344.0f,0);
        glVertex3d(307.0f, 360.5f,0);
        glVertex3d(312.5f, 355,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(307.0f, 360.5f,0);
        glVertex3d(312.5f, 355.0f,0);
        glVertex3d(326.5f, 361.5f,0);
        glVertex3d(318.5f, 376.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(326.5f, 361.5f,0);
        glVertex3d(318.5f, 376.0f,0);
        glVertex3d(327.5f, 388.0f,0);
        glVertex3d(339.0f, 367.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(327.5f, 388.0f,0);
        glVertex3d(339.0f, 367.5f,0);
        glVertex3d(357.0f, 374.0f,0);
        glVertex3d(340.5f, 405.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(357.0f, 374.0f,0);
        glVertex3d(340.5f, 405.5f,0);
        glVertex3d(356.5f, 427.0f,0);
        glVertex3d(377.0f, 380.0f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(356.5f, 427.0f,0);
        glVertex3d(377.0f, 380.0f,0);
        glVertex3d(392.5f, 384.5f,0);
        glVertex3d(373.0f, 448.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(392.5f, 384.5f,0);
        glVertex3d(373.0f, 448.5f,0);
        glVertex3d(389.5f, 471.0f,0);
        glVertex3d(410.5f, 388.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(389.5f, 471.0f,0);
        glVertex3d(410.5f, 388.5f,0);
        glVertex3d(429.5f, 393.0f,0);
        glVertex3d(409.0f, 474.0f,0);
    glEnd();

    glBegin(GL_TRIANGLES);
        glVertex3d(389.5f, 471.0f,0);
        glVertex3d(409.0f, 474.0f,0);
        glVertex3d(396.0f, 477.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(429.5f, 393.0f,0);
        glVertex3d(409.0f, 474.0f,0);
        glVertex3d(423.0f, 469.5f,0);
        glVertex3d(442.5f, 393.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(423.0f, 469.5f,0);
        glVertex3d(442.5f, 393.5f,0);
        glVertex3d(453.5f, 394.5f,0);
        glVertex3d(436.5f, 463.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(453.5f, 394.5f,0);
        glVertex3d(436.5f, 463.5f,0);
        glVertex3d(447.5f, 457.0f,0);
        glVertex3d(460.5f, 395.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(447.5f, 457.0f,0);
        glVertex3d(460.5f, 395.5f,0);
        glVertex3d(468.5f, 396.5f,0);
        glVertex3d(460.5f, 447.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(468.5f, 396.5f,0);
        glVertex3d(460.5f, 447.5f,0);
        glVertex3d(472.5f, 436.0f,0);
        glVertex3d(478.5f, 396.5f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(472.5f, 436.0f,0);
        glVertex3d(478.5f, 396.5f,0);
        glVertex3d(486.5f, 395.5f,0);
        glVertex3d(483.5f, 423.5f,0);
    glEnd();

     glBegin(GL_QUADS);
        glVertex3d(486.5f, 395.5f,0);
        glVertex3d(483.5f, 423.5f,0);
        glVertex3d(491.5f, 411.5f,0);
        glVertex3d(491.5f, 395.0f,0);
    glEnd();

    glBegin(GL_QUADS);
        glVertex3d(491.5f, 401.0f,0);
        glVertex3d(491.5f, 411.5f,0);
        glVertex3d(495.0f, 406.0f,0);
    glEnd();
    glPopMatrix();
}


void display_batang()
{
    glPushMatrix();
    glTranslatef(-250,-200,0);
    glColor3d(0.957,0.769,0.576);
    glBegin(GL_QUADS);
        glVertex3d(705.0f, 574.47f, 0);
        glVertex3d(731.0f, 574.47f, 0);
        glVertex3d(731.0f, 1110.47f, 0);
        glVertex3d(705.0f, 1110.47f, 0);
    glEnd();
    glPopMatrix();
}

void display_lingkaran()
{
    int theta;
    glPushMatrix();
    glTranslatef(-50,0,0);
    glBegin(GL_POLYGON);
    glColor3d(0.1f,0.1f,0.1f);
    for(int i=0;i<360;i++)
        {
            theta=i*3.142/180;
            glVertex2f(501.0f+20*cos(theta),395.5f+20*sin(theta));

        }
    glEnd();
    glPopMatrix();
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

    while (!glfwWindowShouldClose(window)){
        setup_viewport(window);
        display();
        display_batang();

        move = glfwGetTime()*-100;
        glPushMatrix();
        glTranslatef(456.5, 400.5, 0);
        glRotatef(move, 0, 0, 1);
        glTranslatef(-456.5, -400.5, 0);

        display_balingB();
        display_balingM();
        display_balingH();
        display_balingK();

        glPopMatrix();

        glfwSwapBuffers(window);
        glfwPollEvents();
        }

    //Fungsi Exit
    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
 }

