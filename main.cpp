#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

void init(void) {
    glClearColor(0.0, 0.0, 0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 800.0, 0.0, 800.0);
}
void lineSegment(void) {



//grass field
glColor3f(  0.0,0.5,0.1 );
glBegin(GL_POLYGON);
glVertex3f (0,0,0.0);
glVertex3f (800,0, 0.0);
glVertex3f (800,400, 0.0);
glVertex3f (0,330 ,0.0);
glEnd();

//sky
glColor3f(  0.6,1,0.9  );
glBegin(GL_POLYGON);
glVertex3f (0,330 ,0.0);
glVertex3f (800,400, 0.0);
glVertex3f (800,800, 0.0);
glVertex3f (0,800 ,0.0);
glEnd();

//Flag ground
glColor3f (0.3,0,.3);
glBegin(GL_POLYGON);
glVertex3f (100,100,0.0);
glVertex3f (200,100, 0.0);
glVertex3f (200,150, 0.0);
glVertex3f (100,150 ,0.0);
glEnd();

//Flag stand
glColor3f (0.3,0.7,.4);
glBegin(GL_POLYGON);
glVertex3f (145,150,0.0);
glVertex3f (155,150, 0.0);
glVertex3f (155,600, 0.0);
glVertex3f (145,600 ,0.0);
glEnd();

//Flag square
glColor3f(  0.4,0,0.8 );
glBegin(GL_POLYGON);
glVertex3f (155,580,0.0);
glVertex3f (360,580, 0.0);
glVertex3f (360,450, 0.0);
glVertex3f (155,450 ,0.0);
glEnd();

//flag middle Line
glColor3f(1,0,0);
glBegin(GL_LINES);
glVertex3f(257.5, 450,0);
glVertex3f(257.5, 580,0);
glEnd();

// flag tringle bottom

glColor3f(1,1,0);
    glBegin(GL_TRIANGLES);
    glVertex3f(155,450,0);
    glVertex3f(257.5,450,0);
    glVertex3f(206.5,515.5,0);
    glEnd();


//right tringle
glColor3f(1,1,1);
    glBegin(GL_TRIANGLES);
    glVertex3f(257.5, 450,0);
    glVertex3f(257.5, 580,0);
    glVertex3f(206.5,515.5,0);
    glEnd();

//up tringle
glColor3f(0,0,1);
    glBegin(GL_TRIANGLES);
    glVertex3f(257.5, 580,0);
    glVertex3f (155,580,0.0);
    glVertex3f(206.5,515.5,0);
    glEnd();
//left
glColor3f(0.9,0.2,.0);
    glBegin(GL_TRIANGLES);
    glVertex3f (155,580,0.0);
    glVertex3f (155,450 ,0.0);
    glVertex3f(206.5,515.5,0);
    glEnd();

//human head
 float theta1;
    int posX1 =280 ;
    int posY1 =300;
    int radio1 = 20;

    glColor3f(0.9,0.7,0.6);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++){
        theta1 = i*3.1416/180;
        glVertex2f(posX1 + radio1*cos(theta1), posY1 + radio1*sin(theta1));
    }
    glEnd();

//neck
glColor3f(0.9,0.7,0.3);
    glBegin(GL_POLYGON);
    glVertex3f (275,280,0);
    glVertex3f (285,280 ,0.0);
    glVertex3f(285,260.5,0);
    glVertex3f(275,260.5,0);
    glEnd();
//body
glColor3f(1,0,0.7);
    glBegin(GL_POLYGON);
    glVertex3f (255,260,0);
    glVertex3f (305,260 ,0.0);
    glVertex3f(305,200.5,0);
    glVertex3f(255,200.5,0);
    glEnd();

//left leg

glColor3f(0.0,0.0,1);
    glBegin(GL_POLYGON);
    glVertex3f (260,200,0);
    glVertex3f (270,200 ,0.0);
    glVertex3f(270,160,0);
    glVertex3f(260,160,0);
    glEnd();

 //right leg

glColor3f(0.0,0.0,1);
    glBegin(GL_POLYGON);
    glVertex3f (290,200,0);
    glVertex3f (300,200 ,0.0);
    glVertex3f(300,160,0);
    glVertex3f(290,160,0);
    glEnd();

//left hand

glColor3f(1,0,0.7);
    glBegin(GL_POLYGON);
    glVertex3f (255,260,0);
    glVertex3f (255,245,0.0);
    glVertex3f(240,255.5,0);
    glVertex3f(240,260.5,0);
    glEnd();

glColor3f(1,0,0.7);
    glBegin(GL_POLYGON);
    glVertex3f (240,260,0);
    glVertex3f (255,260,0.0);
    glVertex3f(255,290,0);
    glVertex3f(240,290,0);
    glEnd();


glColor3f(0.9,0.7,0.3);
    glBegin(GL_TRIANGLES);
     glVertex3f(255,290,0);
    glVertex3f(240,290,0);
    glVertex3f(260,308,0);
    glEnd();

//Right hand

glColor3f(1,0,0.7);
    glBegin(GL_POLYGON);
    glVertex3f (305,260 ,0.0);
    glVertex3f (320,255,0.0);
    glVertex3f(320,245.5,0);
    glVertex3f(305,245.5,0);
    glEnd();


glColor3f(1,0,0.7);
    glBegin(GL_POLYGON);
    glVertex3f(320,245.5,0);
    glVertex3f(320,200,0);
    glVertex3f(310,200,0);
    glVertex3f(310,245.5,0);

    glEnd();



//tree steams

glColor3f( 0,.2,.1 );
    glBegin(GL_POLYGON);
    glVertex3f(750, 350,0);
    glVertex3f(755, 350,0);
    glVertex3f(755, 450,0);
    glVertex3f(750,450,0);
    glEnd();

glColor3f(0.1,0.9,0.4);
    glBegin(GL_TRIANGLES);
    glVertex3f(730,450,0);
    glVertex3f(775, 450,0);
    glVertex3f(752.5,500,0);
    glEnd();

    float theta;
    int posX = 260.5;
    int posY = 515.5;
    int radio = 30;

    glColor3f(0.9,0.2,.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++){
        theta = i*3.1416/180;
        glVertex2f(posX + radio*cos(theta), posY + radio*sin(theta));
    }
    glEnd();



    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(800,600);
    glutCreateWindow("Flag and Human Draw: Ashikul Aziz Siddique");
    init();
    glutDisplayFunc(lineSegment);
    glutMainLoop();
}
