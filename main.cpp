using namespace std;
#include<cstdio>
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>
#include <string>
# define PI           3.14159265358979323846


GLfloat sunPosition8 = 0;
GLfloat sunPosition = -1.3;
GLfloat sunPosition2 = 0;
GLfloat sunSpeed = 0.0056f;
GLfloat sunSpeed2 = 0.013f;
GLfloat sunSpeed3 = 0.013f;
GLfloat crowdPosition1 = 0;
GLfloat crowdPosition12 = 0;
GLfloat crowdPosition2 = 0;
GLfloat crowdPosition3 = 0;
GLfloat crowdPosition4 = 0;
GLfloat crowdPosition5 = 0;
GLfloat crowdPosition6 = 0;
GLfloat crowdPosition7 = 0;
GLfloat crowdPosition8 = 0;
GLfloat crowdPosition9 = 0;
GLfloat crowdPosition10 = 0;
GLfloat crowdSpeed = 0.0185f;
GLfloat carPosition1 = 0.0f;
GLfloat carPosition2 = 0.0f;
GLfloat carSpeed = 0.05f;


GLfloat ncrowdPosition12 = 0;
GLfloat ncrowdPosition2 = 0;
GLfloat ncrowdPosition3 = 0;
GLfloat ncrowdPosition4 = 0;
GLfloat ncrowdPosition5 = 0;
GLfloat ncrowdPosition6 = 0;
GLfloat ncrowdPosition7 = 0;
GLfloat ncrowdPosition8 = 0;
GLfloat ncrowdPosition9 = 0;
GLfloat ncrowdPosition10 = 0;
GLfloat ncarPosition1 = 0.0f;
GLfloat ncarPosition2 = 0.0f;
GLfloat ncrowdSpeed = 0.0185f;
GLfloat ncarSpeed = 0.05f;

GLfloat moonPosition;
GLfloat moonSpeed = 0.0059f;

GLfloat birdposition = 0;
GLfloat birdspeed = 0.1f;
GLfloat birdposition1 = 0;
GLfloat birdspeed1 = 0.1f;


void birdupdate(int value) {
    if(birdposition >1.5)
        birdposition = -1.0f;
    birdposition += birdspeed;
	glutPostRedisplay();
	glutTimerFunc(500, birdupdate, 0);
}

void birdupdate1(int value) {
    if(birdposition1 >1.5)
        birdposition1 = -1.0f;
    birdposition1 += birdspeed1;
	glutPostRedisplay();
	glutTimerFunc(500, birdupdate1, 0);
}

void Mouse(int key,int star,int x,int y)
{
    if(key==GLUT_LEFT_BUTTON)
    {
        birdspeed1=0.1f;
        birdspeed=0.1f;
    }
    else if(key==GLUT_RIGHT_BUTTON)
    {
        birdspeed1=0.0f;
        birdspeed=0.0f;
    }
}



void morning(int b);
void snowView();
void rainyView();


void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'w':
    glutDisplayFunc(snowView);
    break;
case 'r':
     glutDisplayFunc(rainyView);
    break;


glutPostRedisplay();


	}
}



void soundMorning()
{

    PlaySound("morning.wav", NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);

}
void soundNoon()
{

    PlaySound("noon.wav", NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);

}
void soundNight()
{

    PlaySound("night.wav", NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);

}
void soundOff()
{

    PlaySound(NULL, NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);

}


void moonUpdate(int value) {


    moonPosition -= moonSpeed;

	glutPostRedisplay();

	glutTimerFunc(100, moonUpdate, 0);
}



void carUpdate1(int value) {
    if(carPosition1 <-1.6)
        carPosition1 = 1.0f;
    carPosition1 -= carSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, carUpdate1, 0);
}

void carUpdate2(int value) {
    if(carPosition2 <-.2)
        carPosition2 = 2.4f;
    carPosition2 -= carSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, carUpdate2, 0);
}


void sunUpdate(int value) {

    if(sunPosition8 >.5)
        sunPosition8 = .5;
    sunPosition8 += sunSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, sunUpdate, 0);
}

void sunSetUpdate(int value) {

    if(sunPosition >.8)
        sunPosition = .8;

    sunPosition += sunSpeed2;
    if(sunPosition >.8)
    sunPosition2 -= sunSpeed3;
	glutPostRedisplay();

	glutTimerFunc(100, sunSetUpdate, 0);
}

void crowdUpdate1(int value) {

    if(crowdPosition1 >1.9)
        crowdPosition1 = -.2;
    crowdPosition1 += crowdSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, crowdUpdate1, 0);
}

void crowdUpdate12(int value) {

    if(crowdPosition12 >1.9)
        crowdPosition12 = -.2;
    crowdPosition12 += crowdSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, crowdUpdate12, 0);
}

void crowdUpdate2(int value) {

    if(crowdPosition2 >1.7)
        crowdPosition2 = -.4;
    crowdPosition2 += crowdSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, crowdUpdate2, 0);
}

void crowdUpdate3(int value) {

    if(crowdPosition3 >1.5)
        crowdPosition3 = -.6;
    crowdPosition3 += crowdSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, crowdUpdate3, 0);
}

void crowdUpdate4(int value) {

    if(crowdPosition4 >1.3)
        crowdPosition4 = -.8;
    crowdPosition4 += crowdSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, crowdUpdate4, 0);
}

void crowdUpdate5(int value) {

    if(crowdPosition5 >1.1)
        crowdPosition5 = -1;
    crowdPosition5 += crowdSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, crowdUpdate5, 0);
}

void crowdUpdate6(int value) {

    if(crowdPosition6 >.9)
        crowdPosition6 = -1.2;
    crowdPosition6 += crowdSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, crowdUpdate6, 0);
}


void crowdUpdate7(int value) {

    if(crowdPosition7 >.7)
        crowdPosition7 = -1.4;
    crowdPosition7 += crowdSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, crowdUpdate7, 0);
}

void crowdUpdate8(int value) {

    if(crowdPosition8 >.5)
        crowdPosition8 = -1.6;
    crowdPosition8 += crowdSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, crowdUpdate8, 0);
}

void crowdUpdate9(int value) {

    if(crowdPosition9 >.3)
        crowdPosition9 = -1.8;
    crowdPosition9 += crowdSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, crowdUpdate9, 0);
}

void crowdUpdate10(int value) {

    if(crowdPosition10 >.1)
        crowdPosition10 = -2;
    crowdPosition10 += crowdSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, crowdUpdate10, 0);
}


void ncarUpdate1(int value) {
    if(ncarPosition1 <-1.6)
        ncarPosition1 = 1.0f;
    ncarPosition1 -= ncarSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, ncarUpdate1, 0);
}

void ncarUpdate2(int value) {
    if(ncarPosition2 <-.2)
        ncarPosition2 = 2.4f;
    ncarPosition2 -= ncarSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, ncarUpdate2, 0);
}



void ncrowdUpdate12(int value) {

    if(ncrowdPosition12 >1.9)
        ncrowdPosition12 = -.2;
    ncrowdPosition12 += ncrowdSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, ncrowdUpdate12, 0);
}

void ncrowdUpdate2(int value) {

    if(ncrowdPosition2 >1.7)
        ncrowdPosition2 = -.4;
    ncrowdPosition2 += ncrowdSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, ncrowdUpdate2, 0);
}

void ncrowdUpdate3(int value) {

    if(ncrowdPosition3 >1.5)
        ncrowdPosition3 = -.6;
    ncrowdPosition3 += ncrowdSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, ncrowdUpdate3, 0);
}

void ncrowdUpdate4(int value) {

    if(ncrowdPosition4 >1.3)
        ncrowdPosition4 = -.8;
    ncrowdPosition4 += ncrowdSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, ncrowdUpdate4, 0);
}

void ncrowdUpdate5(int value) {

    if(ncrowdPosition5 >1.1)
        ncrowdPosition5 = -1;
    ncrowdPosition5 += ncrowdSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, ncrowdUpdate5, 0);
}

void ncrowdUpdate6(int value) {

    if(ncrowdPosition6 >.9)
        ncrowdPosition6 = -1.2;
    ncrowdPosition6 += ncrowdSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, ncrowdUpdate6, 0);
}


void ncrowdUpdate7(int value) {

    if(ncrowdPosition7 >.7)
        ncrowdPosition7 = -1.4;
    ncrowdPosition7 += ncrowdSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, ncrowdUpdate7, 0);
}

void ncrowdUpdate8(int value) {

    if(ncrowdPosition8 >.5)
        ncrowdPosition8 = -1.6;
    ncrowdPosition8 += ncrowdSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, ncrowdUpdate8, 0);
}

void ncrowdUpdate9(int value) {

    if(ncrowdPosition9 >.3)
        ncrowdPosition9 = -1.8;
    ncrowdPosition9 += ncrowdSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, ncrowdUpdate9, 0);
}

void ncrowdUpdate10(int value) {

    if(ncrowdPosition10 >.1)
        ncrowdPosition10 = -2;
    ncrowdPosition10 += ncrowdSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, ncrowdUpdate10, 0);
}


//===================================================================================================== WinterView start

GLfloat position28 = 0.0f;
GLfloat speed28 = 0.015f;
GLfloat position29 = 0.0f;
GLfloat speed29 = 0.015f;
GLfloat position30 = 0.0f;
GLfloat speed30 = 0.015f;
GLfloat position41 = 0.0f;
GLfloat speed41 = 0.1f;

GLfloat position52 = 0.0f;
GLfloat speed52= 0.1f;
void update61(int value) {


    if(position41 +2.0)
    position41 = -1.0f;

    position41 += speed41;

    if(position52 +1.0)
        position52 =- 1.0f;

    position52 += speed52;


	glutPostRedisplay();


	glutTimerFunc(100, update61, 0);
}
void update28(int value) {

    if(position28 <-2.0)
        position28 = 1.0f;

    position28 -= speed28;

	glutPostRedisplay();


	glutTimerFunc(100, update28, 0);
}
void update29(int value) {

    if(position29 <-2.0)
        position29 = 1.0f;

    position29 -= speed29;

	glutPostRedisplay();


	glutTimerFunc(100, update29, 0);
}
void update30(int value) {

    if(position30 <-2.0)
        position30 = 1.0f;

    position30 -= speed28;

	glutPostRedisplay();


	glutTimerFunc(100, update30, 0);
}

//====================================================================================================== WinterView end


//====================================================================================================== RainyView start

GLfloat position4 = 0.0f;
GLfloat speed4 = 0.1f;

GLfloat position5 = 0.0f;
GLfloat speed5 = 0.1f;


void update6(int value) {


    if(position4 >+1.0)
    position4 = -1.0f;

    position4 += speed4;  ///speed3 for snow

    if(position5 >+1.0)
        position5 =- 1.0f;

    position5 += speed5;


	glutPostRedisplay();


	glutTimerFunc(100, update6, 0);
}

//====================================================================================================== RainyView end




void nightView()
{

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    //SKY================================================================================================
    glBegin(GL_QUADS);  //------------------------------------------------
    glColor3ub(0, 0, 128);
    glVertex2f(-1,1);
    glVertex2f(1,1);
    glVertex2f(1,0);
    glVertex2f(-1,0);
    glEnd();


    glBegin(GL_LINES);  //stars-----------------------------
    glColor3ub(245, 245, 245);
    glVertex2f(-.8,.8);
    glVertex2f(-.77,.77);
    glVertex2f(-.77,.8);
    glVertex2f(-.8,.77);
    glVertex2f(-.785,.8);
    glVertex2f(-.785,.77);
    glVertex2f(-.8,.785);
    glVertex2f(-.77,.785);
    glEnd();


    glTranslatef(.2,0.0f, 0.0f);
    glBegin(GL_LINES);  //stars-----------------------------
    glColor3ub(245, 245, 245);
    glVertex2f(-.8,.8);
    glVertex2f(-.77,.77);
    glVertex2f(-.77,.8);
    glVertex2f(-.8,.77);
    glVertex2f(-.785,.8);
    glVertex2f(-.785,.77);
    glVertex2f(-.8,.785);
    glVertex2f(-.77,.785);
    glEnd();

    glTranslatef(.2,0.0f, 0.0f);
    glBegin(GL_LINES);  //stars-----------------------------
    glColor3ub(245, 245, 245);
    glVertex2f(-.8,.8);
    glVertex2f(-.77,.77);
    glVertex2f(-.77,.8);
    glVertex2f(-.8,.77);
    glVertex2f(-.785,.8);
    glVertex2f(-.785,.77);
    glVertex2f(-.8,.785);
    glVertex2f(-.77,.785);
    glEnd();

    glTranslatef(.2,0.0f, 0.0f);
    glBegin(GL_LINES);  //stars-----------------------------
    glColor3ub(245, 245, 245);
    glVertex2f(-.8,.8);
    glVertex2f(-.77,.77);
    glVertex2f(-.77,.8);
    glVertex2f(-.8,.77);
    glVertex2f(-.785,.8);
    glVertex2f(-.785,.77);
    glVertex2f(-.8,.785);
    glVertex2f(-.77,.785);
    glEnd();


    glTranslatef(.2,0.0f, 0.0f);
    glBegin(GL_LINES);  //stars-----------------------------
    glColor3ub(245, 245, 245);
    glVertex2f(-.8,.8);
    glVertex2f(-.77,.77);
    glVertex2f(-.77,.8);
    glVertex2f(-.8,.77);
    glVertex2f(-.785,.8);
    glVertex2f(-.785,.77);
    glVertex2f(-.8,.785);
    glVertex2f(-.77,.785);
    glEnd();


    glBegin(GL_LINES);  //stars-----------------------------
    glColor3ub(245, 245, 245);
    glVertex2f(-.8,.8);
    glVertex2f(-.77,.77);
    glVertex2f(-.77,.8);
    glVertex2f(-.8,.77);
    glVertex2f(-.785,.8);
    glVertex2f(-.785,.77);
    glVertex2f(-.8,.785);
    glVertex2f(-.77,.785);
    glEnd();


    glBegin(GL_LINES);  //stars-----------------------------
    glColor3ub(245, 245, 245);
    glVertex2f(-.8,.8);
    glVertex2f(-.77,.77);
    glVertex2f(-.77,.8);
    glVertex2f(-.8,.77);
    glVertex2f(-.785,.8);
    glVertex2f(-.785,.77);
    glVertex2f(-.8,.785);
    glVertex2f(-.77,.785);
    glEnd();


    glTranslatef(.2,0.0f, 0.0f);
    glBegin(GL_LINES);  //stars-----------------------------
    glColor3ub(245, 245, 245);
    glVertex2f(-.8,.8);
    glVertex2f(-.77,.77);
    glVertex2f(-.77,.8);
    glVertex2f(-.8,.77);
    glVertex2f(-.785,.8);
    glVertex2f(-.785,.77);
    glVertex2f(-.8,.785);
    glVertex2f(-.77,.785);
    glEnd();

    glTranslatef(.2,0.0f, 0.0f);
    glBegin(GL_LINES);  //stars-----------------------------
    glColor3ub(245, 245, 245);
    glVertex2f(-.8,.8);
    glVertex2f(-.77,.77);
    glVertex2f(-.77,.8);
    glVertex2f(-.8,.77);
    glVertex2f(-.785,.8);
    glVertex2f(-.785,.77);
    glVertex2f(-.8,.785);
    glVertex2f(-.77,.785);
    glEnd();

    glTranslatef(.2,0.0f, 0.0f);
    glBegin(GL_LINES);  //stars-----------------------------
    glColor3ub(245, 245, 245);
    glVertex2f(-.8,.8);
    glVertex2f(-.77,.77);
    glVertex2f(-.77,.8);
    glVertex2f(-.8,.77);
    glVertex2f(-.785,.8);
    glVertex2f(-.785,.77);
    glVertex2f(-.8,.785);
    glVertex2f(-.77,.785);
    glEnd();


    glTranslatef(.2,0.0f, 0.0f);
    glBegin(GL_LINES);  //stars-----------------------------
    glColor3ub(245, 245, 245);
    glVertex2f(-.8,.8);
    glVertex2f(-.77,.77);
    glVertex2f(-.77,.8);
    glVertex2f(-.8,.77);
    glVertex2f(-.785,.8);
    glVertex2f(-.785,.77);
    glVertex2f(-.8,.785);
    glVertex2f(-.77,.785);
    glEnd();


    glBegin(GL_LINES);  //stars-----------------------------
    glColor3ub(245, 245, 245);
    glVertex2f(-.8,.8);
    glVertex2f(-.77,.77);
    glVertex2f(-.77,.8);
    glVertex2f(-.8,.77);
    glVertex2f(-.785,.8);
    glVertex2f(-.785,.77);
    glVertex2f(-.8,.785);
    glVertex2f(-.77,.785);
    glEnd();


    glBegin(GL_LINES);  //stars-----------------------------
    glColor3ub(245, 245, 245);
    glVertex2f(-.8,.8);
    glVertex2f(-.77,.77);
    glVertex2f(-.77,.8);
    glVertex2f(-.8,.77);
    glVertex2f(-.785,.8);
    glVertex2f(-.785,.77);
    glVertex2f(-.8,.785);
    glVertex2f(-.77,.785);
    glEnd();

    glLoadIdentity();




    //glTranslatef(-.1,0.2f, 0.0f);
    glBegin(GL_LINES);  //stars-----------------------------
    glColor3ub(245, 245, 245);
    glVertex2f(-.9,.6);
    glVertex2f(-.87,.57);
    glVertex2f(-.87,.6);
    glVertex2f(-.9,.57);
    glVertex2f(-.885,.6);
    glVertex2f(-.885,.57);
    glVertex2f(-.9,.585);
    glVertex2f(-.87,.585);
    glEnd();


    glTranslatef(.2,0.0f, 0.0f);
   glBegin(GL_LINES);  //stars-----------------------------
    glColor3ub(245, 245, 245);
    glVertex2f(-.9,.6);
    glVertex2f(-.87,.57);
    glVertex2f(-.87,.6);
    glVertex2f(-.9,.57);
    glVertex2f(-.885,.6);
    glVertex2f(-.885,.57);
    glVertex2f(-.9,.585);
    glVertex2f(-.87,.585);
    glEnd();

    glTranslatef(.2,0.0f, 0.0f);
    glBegin(GL_LINES);  //stars-----------------------------
    glColor3ub(245, 245, 245);
    glVertex2f(-.9,.6);
    glVertex2f(-.87,.57);
    glVertex2f(-.87,.6);
    glVertex2f(-.9,.57);
    glVertex2f(-.885,.6);
    glVertex2f(-.885,.57);
    glVertex2f(-.9,.585);
    glVertex2f(-.87,.585);
    glEnd();

    glTranslatef(.2,0.0f, 0.0f);
    glBegin(GL_LINES);  //stars-----------------------------
    glColor3ub(245, 245, 245);
    glVertex2f(-.9,.6);
    glVertex2f(-.87,.57);
    glVertex2f(-.87,.6);
    glVertex2f(-.9,.57);
    glVertex2f(-.885,.6);
    glVertex2f(-.885,.57);
    glVertex2f(-.9,.585);
    glVertex2f(-.87,.585);
    glEnd();


    glTranslatef(.2,0.0f, 0.0f);
    glBegin(GL_LINES);  //stars-----------------------------
    glColor3ub(245, 245, 245);
    glVertex2f(-.9,.6);
    glVertex2f(-.87,.57);
    glVertex2f(-.87,.6);
    glVertex2f(-.9,.57);
    glVertex2f(-.885,.6);
    glVertex2f(-.885,.57);
    glVertex2f(-.9,.585);
    glVertex2f(-.87,.585);
    glEnd();




    glTranslatef(.2,0.0f, 0.0f);
    glBegin(GL_LINES);  //stars-----------------------------
    glColor3ub(245, 245, 245);
    glVertex2f(-.9,.6);
    glVertex2f(-.87,.57);
    glVertex2f(-.87,.6);
    glVertex2f(-.9,.57);
    glVertex2f(-.885,.6);
    glVertex2f(-.885,.57);
    glVertex2f(-.9,.585);
    glVertex2f(-.87,.585);
    glEnd();

    glTranslatef(.2,0.0f, 0.0f);
    glBegin(GL_LINES);  //stars-----------------------------
    glColor3ub(245, 245, 245);
    glVertex2f(-.9,.6);
    glVertex2f(-.87,.57);
    glVertex2f(-.87,.6);
    glVertex2f(-.9,.57);
    glVertex2f(-.885,.6);
    glVertex2f(-.885,.57);
    glVertex2f(-.9,.585);
    glVertex2f(-.87,.585);
    glEnd();

    glTranslatef(.2,0.0f, 0.0f);
    glBegin(GL_LINES);  //stars-----------------------------
    glColor3ub(245, 245, 245);
    glVertex2f(-.9,.6);
    glVertex2f(-.87,.57);
    glVertex2f(-.87,.6);
    glVertex2f(-.9,.57);
    glVertex2f(-.885,.6);
    glVertex2f(-.885,.57);
    glVertex2f(-.9,.585);
    glVertex2f(-.87,.585);
    glEnd();

    glTranslatef(.2,0.0f, 0.0f);
    glBegin(GL_LINES);  //stars-----------------------------
    glColor3ub(245, 245, 245);
    glVertex2f(-.9,.6);
    glVertex2f(-.87,.57);
    glVertex2f(-.87,.6);
    glVertex2f(-.9,.57);
    glVertex2f(-.885,.6);
    glVertex2f(-.885,.57);
    glVertex2f(-.9,.585);
    glVertex2f(-.87,.585);
    glEnd();


    glTranslatef(.2,0.0f, 0.0f);
    glBegin(GL_LINES);  //stars-----------------------------
    glColor3ub(245, 245, 245);
    glVertex2f(-.9,.6);
    glVertex2f(-.87,.57);
    glVertex2f(-.87,.6);
    glVertex2f(-.9,.57);
    glVertex2f(-.885,.6);
    glVertex2f(-.885,.57);
    glVertex2f(-.9,.585);
    glVertex2f(-.87,.585);
    glEnd();

    glTranslatef(.2,0.0f, 0.0f);
    glBegin(GL_LINES);  //stars-----------------------------
    glColor3ub(245, 245, 245);
    glVertex2f(-.9,.6);
    glVertex2f(-.87,.57);
    glVertex2f(-.87,.6);
    glVertex2f(-.9,.57);
    glVertex2f(-.885,.6);
    glVertex2f(-.885,.57);
    glVertex2f(-.9,.585);
    glVertex2f(-.87,.585);
    glEnd();

    glLoadIdentity();


    glBegin(GL_LINES);  //stars-----------------------------
    glColor3ub(245, 245, 245);
    glVertex2f(-.8,.4);
    glVertex2f(-.77,.37);
    glVertex2f(-.77,.4);
    glVertex2f(-.8,.37);
    glVertex2f(-.785,.4);
    glVertex2f(-.785,.37);
    glVertex2f(-.8,.385);
    glVertex2f(-.77,.385);
    glEnd();

    glTranslatef(1.6,0,0);
    glBegin(GL_LINES);  //stars-----------------------------
    glColor3ub(245, 245, 245);
    glVertex2f(-.8,.4);
    glVertex2f(-.77,.37);
    glVertex2f(-.77,.4);
    glVertex2f(-.8,.37);
    glVertex2f(-.785,.4);
    glVertex2f(-.785,.37);
    glVertex2f(-.8,.385);
    glVertex2f(-.77,.385);
    glEnd();

    glLoadIdentity();


    glTranslatef(-.1,-.2,0);
    glBegin(GL_LINES);  //stars-----------------------------
    glColor3ub(245, 245, 245);
    glVertex2f(-.8,.4);
    glVertex2f(-.77,.37);
    glVertex2f(-.77,.4);
    glVertex2f(-.8,.37);
    glVertex2f(-.785,.4);
    glVertex2f(-.785,.37);
    glVertex2f(-.8,.385);
    glVertex2f(-.77,.385);
    glEnd();
    glLoadIdentity();


    glTranslatef(1.7,-.2,0);
    glBegin(GL_LINES);  //stars-----------------------------
    glColor3ub(245, 245, 245);
    glVertex2f(-.8,.4);
    glVertex2f(-.77,.37);
    glVertex2f(-.77,.4);
    glVertex2f(-.8,.37);
    glVertex2f(-.785,.4);
    glVertex2f(-.785,.37);
    glVertex2f(-.8,.385);
    glVertex2f(-.77,.385);
    glEnd();


    glLoadIdentity();


    glPushMatrix();
    glTranslatef(0,moonPosition, 0.0f);
    int s;  // moon-------------------------------------------------------

    GLfloat sx=.5f; GLfloat sy=2.1f; GLfloat radiuss =.05f;
    int triangleAmounts = 200;


    GLfloat twicePis = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 204);
    glVertex2f(sx, sy);
    for(s = 0; s <= triangleAmounts;s++)
    {
        glVertex2f(
        sx + (radiuss * cos(s *  twicePis / triangleAmounts)),
        sy + (radiuss * sin(s * twicePis / triangleAmounts))
            );
    }
    glEnd();
    glPopMatrix();


    //--------------------------------------------------------------------- flag
 glBegin(GL_QUADS);//flagstick
                glColor3ub(100,100,100);
                glVertex2f(-.97,.0);
                glVertex2f(-.96,.0);
                glVertex2f(-.96,.4);
                glVertex2f(-.97,.4);
                glEnd();

                glBegin(GL_QUADS);//flag
                glColor3ub(0, 153, 115);
                glVertex2f(-.96,.24);
                glVertex2f(-.83,.24);
                glVertex2f(-.83,.38);
                glVertex2f(-.96,.38);
                glEnd();


                int q;  // flag circle-----------------------

    GLfloat sxx=-.9f; GLfloat syy=.31f; GLfloat radiusss =.03f;
    int triangleAmountss = 200;


    GLfloat twicePiss = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 71, 71);
    glVertex2f(sxx, syy);
    for(q = 0; q <= triangleAmountss;q++)
    {
        glVertex2f(
        sxx + (radiusss * cos(q *  twicePiss / triangleAmountss)),
        syy + (radiusss * sin(q * twicePiss / triangleAmountss))
            );
    }
    glEnd();



    //UPPER STRUCTURE==========================================================================================
    glBegin(GL_QUADS);  //upper center block---------
    glColor3ub(165,165,165);
    glVertex2f(-.15,.62);
    glVertex2f(.15,.62);
    glVertex2f(.15,.5);
    glVertex2f(-.15,.5);
    glEnd();

    glBegin(GL_QUADS);  //upper right block 1---------
    glColor3ub(180,180,180);
    glVertex2f(.15,.62);
    glVertex2f(.185,.59);
    glVertex2f(.185,.5);
    glVertex2f(.15,.5);
    glEnd();


    glBegin(GL_QUADS);  //upper right block 2---------
    glColor3ub(170,170,170);
    glVertex2f(.185,.59);
    glVertex2f(.25,.59);
    glVertex2f(.25,.4);
    glVertex2f(.185,.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(.25,.59);
    glVertex2f(.32,.56);
    glVertex2f(.32,.3);
    glVertex2f(.25,.3);
    glEnd();




    glScalef(-1.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);  //upper left block 1---------
    glColor3ub(180,180,180);
    glVertex2f(.15,.62);
    glVertex2f(.185,.59);
    glVertex2f(.185,.5);
    glVertex2f(.15,.5);
    glEnd();

    glBegin(GL_QUADS);  //upper left block 2---------
    glColor3ub(170,170,170);
    glVertex2f(.185,.59);
    glVertex2f(.25,.59);
    glVertex2f(.25,.4);
    glVertex2f(.185,.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(.25,.59);
    glVertex2f(.32,.56);
    glVertex2f(.32,.3);
    glVertex2f(.25,.3);
    glEnd();

    glLoadIdentity();



     //UPPER STRUCTURE LINES==========================================================================
    glBegin(GL_LINES);
    glColor3ub(175,175,175);
    glVertex2f(-.15,.56);
    glVertex2f(.15,.56);
    glVertex2f(.15,.56);
    glVertex2f(.185,.53);
    glVertex2f(.185,.53);
    glVertex2f(.25,.53);
    glVertex2f(.185,.48);
    glVertex2f(.25,.48);
    glVertex2f(.25,.53);
    glVertex2f(.32,.50);
    glEnd();


    glScalef(-1.0f, 1.0f, 0.0f);
    glBegin(GL_LINES);
    glColor3ub(175,175,175);
    glVertex2f(.185,.53);
    glVertex2f(.25,.53);
    glVertex2f(.185,.48);
    glVertex2f(.25,.48);
    glVertex2f(.25,.53);
    glVertex2f(.32,.50);
    glEnd();
    glLoadIdentity();



    //Upper STRUCTURE CIRCLES & TRIANGLES=======================================================================================

    glBegin(GL_QUADS);
    glColor3ub(110,110,110);
    glVertex2f(-.1,.56);
    glVertex2f(.1,.56);
    glVertex2f(.1,.5);
    glVertex2f(-.1,.5);
    glEnd();

    int j;  // upper right circle

    GLfloat a=.285f; GLfloat b=.518f; GLfloat radius2 =.03f;
    int triangleAmount2 = 30;


    GLfloat twicePi2 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(110,110,110);
    glVertex2f(a, b);
    for(j = 0; j <= triangleAmount2;j++)
    {
        glVertex2f(
        a + (radius2 * cos(j *  twicePi2 / triangleAmount2)),
        b + (radius2 * sin(j * twicePi2 / triangleAmount2))
            );
    }
    glEnd();


    //int j;  // upper left circle

    //GLfloat a=-.285f; GLfloat b=-.518f; GLfloat radius2 =.03f;
    //int triangleAmount2 = 30;


    //GLfloat twicePi2 = 2.0f * PI;
    GLfloat e=-.285f;  // upper left circle
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(110,110,110);
    glVertex2f(e, b);
    for(j = 0; j <= triangleAmount2;j++)
    {
        glVertex2f(
        e + (radius2 * cos(j *  twicePi2 / triangleAmount2)),
        b + (radius2 * sin(j * twicePi2 / triangleAmount2))
            );
    }
    glEnd();



    //STRUCTURE ==========================================================================================
    glBegin(GL_QUADS);  //center block---------
    glColor3ub(150,150,150);
    glVertex2f(-.05,.5);
    glVertex2f(.05,.5);
    glVertex2f(.05,0);
    glVertex2f(-.05,0);
    glEnd();

    glBegin(GL_QUADS);  //right block 1--------
    glColor3ub(160,160,160);
    glVertex2f(.05,.52);
    glVertex2f(.22,.52);
    glVertex2f(.22,0);
    glVertex2f(.05,0);
    glEnd();

    glBegin(GL_QUADS);  //right block 2--------
    glColor3ub(150,150,150);
    glVertex2f(.22,.45);
    glVertex2f(.35,.48);
    glVertex2f(.35,0);
    glVertex2f(.22,0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160,160,160);
    glVertex2f(.35,.48);
    glVertex2f(.48,.45);
    glVertex2f(.48,0);
    glVertex2f(.35,0);
    glEnd();

    glBegin(GL_QUADS);  //right block 3---------
    glColor3ub(142,142,142);
    glVertex2f(.48,.44);
    glVertex2f(.5,.45);
    glVertex2f(.5,0);
    glVertex2f(.48,0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160,160,160);
    glVertex2f(.5,.45);
    glVertex2f(.63,.42);
    glVertex2f(.63,0);
    glVertex2f(.5,0);
    glEnd();

    glBegin(GL_QUADS);  //right block 4---------
    glColor3ub(150,150,150);
    glVertex2f(.63,.40);
    glVertex2f(.76,.40);
    glVertex2f(.76,.0);
    glVertex2f(.63,.0);
    glEnd();







    glScalef(-1.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);  //left block 1------------
    glColor3ub(160,160,160);
    glVertex2f(.05,.52);
    glVertex2f(.22,.52);
    glVertex2f(.22,0);
    glVertex2f(.05,0);
    glEnd();

    glBegin(GL_QUADS);  //left block 2-----------
    glColor3ub(150,150,150);
    glVertex2f(.22,.45);
    glVertex2f(.35,.48);
    glVertex2f(.35,0);
    glVertex2f(.22,0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160,160,160);
    glVertex2f(.35,.48);
    glVertex2f(.48,.45);
    glVertex2f(.48,0);
    glVertex2f(.35,0);
    glEnd();

    glBegin(GL_QUADS);  //left block 3----------
    glColor3ub(142,142,142);
    glVertex2f(.48,.44);
    glVertex2f(.5,.45);
    glVertex2f(.5,0);
    glVertex2f(.48,0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160,160,160);
    glVertex2f(.5,.45);
    glVertex2f(.63,.42);
    glVertex2f(.63,0);
    glVertex2f(.5,0);
    glEnd();

    glBegin(GL_QUADS);  //left block 4---------
    glColor3ub(150,150,150);
    glVertex2f(.63,.40);
    glVertex2f(.76,.40);
    glVertex2f(.76,.0);
    glVertex2f(.63,.0);
    glEnd();
    glLoadIdentity();








    //STRUCTURE LINES==========================================================================
    glBegin(GL_LINES);
    glColor3ub(175,175,175);
    //glVertex2f(-.05,.5);  //center block-----------
    //glVertex2f(-.05,0);
    glVertex2f(-.05,.5);
    glVertex2f(.05,.5);
    //glVertex2f(.05,.5);
    //glVertex2f(.05,0);
    glVertex2f(0,.5);
    glVertex2f(0,0);
    glVertex2f(-.05,.45);
    glVertex2f(.05,.45);
    glVertex2f(-.05,.4);
    glVertex2f(.05,.4);
    glVertex2f(-.05,.35);
    glVertex2f(.05,.35);
    glVertex2f(-.05,.3);
    glVertex2f(.05,.3);
    glVertex2f(-.05,.25);
    glVertex2f(.05,.25);
    glVertex2f(-.05,.2);
    glVertex2f(.05,.2);
    glVertex2f(-.05,.15);
    glVertex2f(.05,.15);
    glVertex2f(-.05,.1);
    glVertex2f(.05,.1);
    glVertex2f(-.05,.05);
    glVertex2f(.05,.05);


    glVertex2f(.05,.52);  //right block 1------------
    glVertex2f(.05,.5);
    glVertex2f(.05,.52);
    glVertex2f(.22,.52);
    //glVertex2f(.22,.52);
    //glVertex2f(.22,.0);
    glVertex2f(.135,.52);
    glVertex2f(.135,.0);
    glVertex2f(.185,.52);
    glVertex2f(.185,.0);
    glVertex2f(.085,.52);
    glVertex2f(.085,.0);
    glVertex2f(.05,.47);
    glVertex2f(.22,.47);
    glVertex2f(.05,.42);
    glVertex2f(.22,.42);
    glVertex2f(.05,.37);
    glVertex2f(.22,.37);
    glVertex2f(.05,.32);
    glVertex2f(.22,.32);
    glVertex2f(.05,.27);
    glVertex2f(.22,.27);
    glVertex2f(.05,.22);
    glVertex2f(.22,.22);
    glVertex2f(.05,.17);
    glVertex2f(.22,.17);
    glVertex2f(.05,.12);
    glVertex2f(.22,.12);
    glVertex2f(.05,.07);
    glVertex2f(.22,.07);
    glVertex2f(.05,.02);
    glVertex2f(.22,.02);

    glVertex2f(.22,.45);  //right block 2------------
    glVertex2f(.35,.48);
    glVertex2f(.35,.48);
    glVertex2f(.48,.45);
    glVertex2f(48,.45);
    glVertex2f(.48,0);
    glVertex2f(.22,.4);
    glVertex2f(.35,.43);
    glVertex2f(.22,.35);
    glVertex2f(.35,.38);
    glVertex2f(.22,.3);
    glVertex2f(.35,.33);
    glVertex2f(.22,.25);
    glVertex2f(.35,.28);
    glVertex2f(.22,.2);
    glVertex2f(.35,.23);
    glVertex2f(.22,.15);
    glVertex2f(.35,.18);
    glVertex2f(.22,.1);
    glVertex2f(.35,.13);
    glVertex2f(.22,.05);
    glVertex2f(.35,.08);
    glVertex2f(.22,.0);
    glVertex2f(.35,.03);
    glVertex2f(.48,.4);
    glVertex2f(.35,.43);
    glVertex2f(.48,.35);
    glVertex2f(.35,.38);
    glVertex2f(.48,.3);
    glVertex2f(.35,.33);
    glVertex2f(.48,.25);
    glVertex2f(.35,.28);
    glVertex2f(.48,.2);
    glVertex2f(.35,.23);
    glVertex2f(.48,.15);
    glVertex2f(.35,.18);
    glVertex2f(.48,.1);
    glVertex2f(.35,.13);
    glVertex2f(.48,.05);
    glVertex2f(.35,.08);
    glVertex2f(.48,.0);
    glVertex2f(.35,.03);
    glVertex2f(.25,.46);
    glVertex2f(.25,.0);
    glVertex2f(.31,.47);
    glVertex2f(.31,.0);
    glVertex2f(.38,.47);
    glVertex2f(.38,.0);
    glVertex2f(.44,.46);
    glVertex2f(.44,.0);


    glVertex2f(.48,.44);  //right block 3---------------------
    glVertex2f(.5,.45);
    glVertex2f(.48,.39);
    glVertex2f(.5,.40);
    glVertex2f(.48,.34);
    glVertex2f(.5,.35);
    glVertex2f(.48,.39);
    glVertex2f(.5,.40);
    glVertex2f(.48,.34);
    glVertex2f(.5,.35);
    glVertex2f(.48,.29);
    glVertex2f(.5,.30);
    glVertex2f(.48,.24);
    glVertex2f(.5,.25);
    glVertex2f(.48,.19);
    glVertex2f(.5,.20);
    glVertex2f(.48,.14);
    glVertex2f(.5,.15);
    glVertex2f(.48,.09);
    glVertex2f(.5,.1);
    glVertex2f(.48,.04);
    glVertex2f(.5,.05);
    glVertex2f(.5,.45);
    glVertex2f(.63,.42);
    glVertex2f(.5,.40);
    glVertex2f(.63,.37);
    glVertex2f(.5,.35);
    glVertex2f(.63,.32);
    glVertex2f(.5,.30);
    glVertex2f(.63,.27);
    glVertex2f(.5,.25);
    glVertex2f(.63,.22);
    glVertex2f(.5,.20);
    glVertex2f(.63,.17);
    glVertex2f(.5,.15);
    glVertex2f(.63,.12);
    glVertex2f(.5,.10);
    glVertex2f(.63,.07);
    glVertex2f(.5,.05);
    glVertex2f(.63,.02);
    glVertex2f(.55,.44);
    glVertex2f(.55,.0);
    glVertex2f(.6,.43);
    glVertex2f(.6,.0);

    glVertex2f(.63,.40);   //right block 4-----------------
    glVertex2f(.76,.40);
    glVertex2f(.63,.35);
    glVertex2f(.76,.35);
    glVertex2f(.63,.30);
    glVertex2f(.76,.30);
    glVertex2f(.63,.25);
    glVertex2f(.76,.25);
    glVertex2f(.63,.20);
    glVertex2f(.76,.20);
    glVertex2f(.63,.15);
    glVertex2f(.76,.15);
    glVertex2f(.63,.10);
    glVertex2f(.76,.10);
    glVertex2f(.63,.05);
    glVertex2f(.76,.05);
    glVertex2f(.68,.40);
    glVertex2f(.68,.0);
    glVertex2f(.73,.40);
    glVertex2f(.73,.0);
    glEnd();



    glScalef(-1.0f, 1.0f, 0.0f);
    glBegin(GL_LINES);
    glColor3ub(175,175,175);
    glVertex2f(.05,.52);  //left block 1-------------------
    glVertex2f(.05,.5);
    glVertex2f(.05,.52);
    glVertex2f(.22,.52);
    //glVertex2f(.22,.52);
    //glVertex2f(.22,.0);
    glVertex2f(.135,.52);
    glVertex2f(.135,.0);
    glVertex2f(.185,.52);
    glVertex2f(.185,.0);
    glVertex2f(.085,.52);
    glVertex2f(.085,.0);
    glVertex2f(.05,.47);
    glVertex2f(.22,.47);
    glVertex2f(.05,.42);
    glVertex2f(.22,.42);
    glVertex2f(.05,.37);
    glVertex2f(.22,.37);
    glVertex2f(.05,.32);
    glVertex2f(.22,.32);
    glVertex2f(.05,.27);
    glVertex2f(.22,.27);
    glVertex2f(.05,.22);
    glVertex2f(.22,.22);
    glVertex2f(.05,.17);
    glVertex2f(.22,.17);
    glVertex2f(.05,.12);
    glVertex2f(.22,.12);
    glVertex2f(.05,.07);
    glVertex2f(.22,.07);
    glVertex2f(.05,.02);
    glVertex2f(.22,.02);

    glVertex2f(.22,.45);  //left block 2----------------
    glVertex2f(.35,.48);
    glVertex2f(.35,.48);
    glVertex2f(.48,.45);
    glVertex2f(48,.45);
    glVertex2f(.48,0);
    glVertex2f(.22,.4);
    glVertex2f(.35,.43);
    glVertex2f(.22,.35);
    glVertex2f(.35,.38);
    glVertex2f(.22,.3);
    glVertex2f(.35,.33);
    glVertex2f(.22,.25);
    glVertex2f(.35,.28);
    glVertex2f(.22,.2);
    glVertex2f(.35,.23);
    glVertex2f(.22,.15);
    glVertex2f(.35,.18);
    glVertex2f(.22,.1);
    glVertex2f(.35,.13);
    glVertex2f(.22,.05);
    glVertex2f(.35,.08);
    glVertex2f(.22,.0);
    glVertex2f(.35,.03);
    glVertex2f(.48,.4);
    glVertex2f(.35,.43);
    glVertex2f(.48,.35);
    glVertex2f(.35,.38);
    glVertex2f(.48,.3);
    glVertex2f(.35,.33);
    glVertex2f(.48,.25);
    glVertex2f(.35,.28);
    glVertex2f(.48,.2);
    glVertex2f(.35,.23);
    glVertex2f(.48,.15);
    glVertex2f(.35,.18);
    glVertex2f(.48,.1);
    glVertex2f(.35,.13);
    glVertex2f(.48,.05);
    glVertex2f(.35,.08);
    glVertex2f(.48,.0);
    glVertex2f(.35,.03);
    glVertex2f(.25,.46);
    glVertex2f(.25,.0);
    glVertex2f(.31,.47);
    glVertex2f(.31,.0);
    glVertex2f(.38,.47);
    glVertex2f(.38,.0);
    glVertex2f(.44,.46);
    glVertex2f(.44,.0);


    glVertex2f(.48,.44);  //left block 3-------------
    glVertex2f(.5,.45);
    glVertex2f(.48,.39);
    glVertex2f(.5,.40);
    glVertex2f(.48,.34);
    glVertex2f(.5,.35);
    glVertex2f(.48,.39);
    glVertex2f(.5,.40);
    glVertex2f(.48,.34);
    glVertex2f(.5,.35);
    glVertex2f(.48,.29);
    glVertex2f(.5,.30);
    glVertex2f(.48,.24);
    glVertex2f(.5,.25);
    glVertex2f(.48,.19);
    glVertex2f(.5,.20);
    glVertex2f(.48,.14);
    glVertex2f(.5,.15);
    glVertex2f(.48,.09);
    glVertex2f(.5,.1);
    glVertex2f(.48,.04);
    glVertex2f(.5,.05);
    glVertex2f(.5,.45);
    glVertex2f(.63,.42);
    glVertex2f(.5,.40);
    glVertex2f(.63,.37);
    glVertex2f(.5,.35);
    glVertex2f(.63,.32);
    glVertex2f(.5,.30);
    glVertex2f(.63,.27);
    glVertex2f(.5,.25);
    glVertex2f(.63,.22);
    glVertex2f(.5,.20);
    glVertex2f(.63,.17);
    glVertex2f(.5,.15);
    glVertex2f(.63,.12);
    glVertex2f(.5,.10);
    glVertex2f(.63,.07);
    glVertex2f(.5,.05);
    glVertex2f(.63,.02);
    glVertex2f(.55,.44);
    glVertex2f(.55,.0);
    glVertex2f(.6,.43);
    glVertex2f(.6,.0);

    glVertex2f(.63,.40);   //left block 4---------------
    glVertex2f(.76,.40);
    glVertex2f(.63,.35);
    glVertex2f(.76,.35);
    glVertex2f(.63,.30);
    glVertex2f(.76,.30);
    glVertex2f(.63,.25);
    glVertex2f(.76,.25);
    glVertex2f(.63,.20);
    glVertex2f(.76,.20);
    glVertex2f(.63,.15);
    glVertex2f(.76,.15);
    glVertex2f(.63,.10);
    glVertex2f(.76,.10);
    glVertex2f(.63,.05);
    glVertex2f(.76,.05);
    glVertex2f(.68,.40);
    glVertex2f(.68,.0);
    glVertex2f(.73,.40);
    glVertex2f(.73,.0);
    glEnd();
    glLoadIdentity();


    //STRUCTURE CIRCLES & TRIANGLES=======================================================================================

    int i;  // right circle

    GLfloat x=.29f; GLfloat y=.116f; GLfloat radius =.05f;
    int triangleAmount = 200;


    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(85,85,85);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(
        x + (radius * cos(i *  twicePi / triangleAmount)),
        y + (radius * sin(i * twicePi / triangleAmount))
            );
    }
    glEnd();


    glBegin(GL_TRIANGLES); // right triangle 1------------
    glColor3ub(85,85,85);
    glVertex2f(.36,.127);
    glVertex2f(.38,.38);
    glVertex2f(.41,.113);
    glEnd();

    glBegin(GL_QUADS);  // right square 1------------------
    glColor3ub(85,85,85);
    glVertex2f(.36,.079);
    glVertex2f(.41,.067);
    glVertex2f(.41,0);
    glVertex2f(.36,0);
    glEnd();

    //glTranslatef(.22,0,0);
    glBegin(GL_TRIANGLES); // right triangle 2-------------
    glColor3ub(85,85,85);
    glVertex2f(.58,.13);
    glVertex2f(.6,.33);
    glVertex2f(.62,.12);
    glEnd();

    glBegin(GL_QUADS);  // right square 2-------------------
    glColor3ub(85,85,85);
    glVertex2f(.58,.083);
    glVertex2f(.62,.074);
    glVertex2f(.62,0);
    glVertex2f(.58,0);
    glEnd();

    glBegin(GL_QUADS);  // right triangle 3-------------------
    glColor3ub(85,85,85);
    glVertex2f(.63,.049);
    glVertex2f(.68,.248);
    glVertex2f(.73,.049);
    glVertex2f(.63,.049);
    glEnd();



    glBegin(GL_QUADS);  // center square
    glColor3ub(85,85,85);
    glVertex2f(-.05,.1);
    glVertex2f(.05,.1);
    glVertex2f(.05,0);
    glVertex2f(-.05,0);
    glEnd();




    glScalef(-1.0f, 1.0f, 0.0f);
    //int i;  // left circle

    //GLfloat x=.29f; GLfloat y=.116f; GLfloat radius =.05f;
    //int triangleAmount = 200;


    //GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(85,85,85);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(
        x + (radius * cos(i *  twicePi / triangleAmount)),
        y + (radius * sin(i * twicePi / triangleAmount))
            );
    }
    glEnd();


    glBegin(GL_TRIANGLES); // left triangle 1------------
    glColor3ub(85,85,85);
    glVertex2f(.36,.127);
    glVertex2f(.38,.38);
    glVertex2f(.41,.113);
    glEnd();

    glBegin(GL_QUADS);  // left square 1------------------
    glColor3ub(85,85,85);
    glVertex2f(.36,.079);
    glVertex2f(.41,.067);
    glVertex2f(.41,0);
    glVertex2f(.36,0);
    glEnd();

    //glTranslatef(.22,0,0);
    glBegin(GL_TRIANGLES); // left triangle 2-------------
    glColor3ub(85,85,85);
    glVertex2f(.58,.13);
    glVertex2f(.6,.33);
    glVertex2f(.62,.12);
    glEnd();

    glBegin(GL_QUADS);  // left square 2-------------------
    glColor3ub(85,85,85);
    glVertex2f(.58,.083);
    glVertex2f(.62,.074);
    glVertex2f(.62,0);
    glVertex2f(.58,0);
    glEnd();

    glBegin(GL_QUADS);  // left triangle 3-------------------
    glColor3ub(85,85,85);
    glVertex2f(.63,.049);
    glVertex2f(.68,.248);
    glVertex2f(.73,.049);
    glVertex2f(.63,.049);
    glEnd();
    glLoadIdentity();


    //STAIRS==========================================================================================
    glBegin(GL_QUADS);  //stairs ------------------
    glColor3ub(194, 111, 111);
    glVertex2f(-1,0);
    glVertex2f(1,0);
    glVertex2f(1,-.05);
    glVertex2f(-1,-.05);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(194, 91, 91);
    glVertex2f(-1,-.05);
    glVertex2f(1,-.05);
    glVertex2f(1,-.1);
    glVertex2f(-1,-.1);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(184, 81, 81);
    glVertex2f(-1,-.1);
    glVertex2f(1,-.1);
    glVertex2f(1,-.15);
    glVertex2f(-1,-.15);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(174, 71, 71);
    glVertex2f(-1,-.15);
    glVertex2f(1,-.15);
    glVertex2f(1,-.2);
    glVertex2f(-1,-.2);
    glEnd();

    /*glBegin(GL_QUADS);  //stair right white lines-----------------
    glColor3ub(235, 235, 235);
    glVertex2f(.345,0);
    glVertex2f(.35,0);
    glVertex2f(.48,-.2);
    glVertex2f(.475,-.2);
    glEnd();

    glBegin(GL_QUADS);  //stair left white lines-----------------
    glColor3ub(255, 220, 220);
    glVertex2f(-.345,0);
    glVertex2f(-.35,0);
    glVertex2f(-.48,-.2);
    glVertex2f(-.475,-.2);
    glEnd();*/


    //GRASS==========================================================================================
    glBegin(GL_QUADS);
    glColor3ub(0, 153, 115);
    glVertex2f(-1,-.2);
    glVertex2f(1,-.2);
    glVertex2f(1,-.3);
    glVertex2f(-1,-.3);
    glEnd();


    //FOOTPATH==========================================================================================
    glBegin(GL_QUADS);
    glColor3ub(170,170,170);
    glVertex2f(-1,-.3);
    glVertex2f(1,-.3);
    glVertex2f(1,-.45);
    glVertex2f(-1,-.45);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(110,110,110);
    glVertex2f(-1,-.45);
    glVertex2f(1,-.45);
    glVertex2f(1,-.47);
    glVertex2f(-1,-.47);
    glEnd();


    //Passerby==========================================================================================
    glPushMatrix();
    glTranslatef(ncrowdPosition12,0.0f, 0.0f);
    glBegin(GL_QUADS);   // people 1
    glColor3ub(195, 42, 42);
    glVertex2f(-.81,-.26);
    glVertex2f(-.79,-.26);
    glVertex2f(-.79,-.32);
    glVertex2f(-.81,-.32);
    glEnd();

    glBegin(GL_POLYGON);  //legs
    glColor3ub(195, 195, 195);
    glVertex2f(-.81,-.32);
    glVertex2f(-.79,-.32);
    glVertex2f(-.778,-.39);
    glVertex2f(-.786,-.39);
    glVertex2f(-.795,-.32);
    glVertex2f(-.805,-.39);
    glVertex2f(-.815,-.39);
    glEnd();

    glBegin(GL_QUADS);   //hand
    glColor3ub(195, 195, 144);
    glVertex2f(-.8,-.28);
    glVertex2f(-.792,-.28);
    glVertex2f(-.78,-.32);
    glVertex2f(-.788,-.32);
    glEnd();

    glBegin(GL_QUADS);  // left shoe
    glColor3ub(30, 41, 41);
    glVertex2f(-.815,-.39);
    glVertex2f(-.805,-.39);
    glVertex2f(-.8,-.4);
    glVertex2f(-.815,-.4);
    glEnd();

    glBegin(GL_QUADS); //right shoe
    glColor3ub(30, 41, 41);
    glVertex2f(-.786,-.39);
    glVertex2f(-.778,-.39);
    glVertex2f(-.773,-.4);
    glVertex2f(-.786,-.4);
    glEnd();



     int p; //head

    GLfloat px=-.8f; GLfloat py=-.251f; GLfloat radiusp =.011f;
    //int triangleAmount = 200;


    //GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(30, 41, 41);
    glVertex2f(px, py);
    for(p = 0; p <= triangleAmount;p++)
    {
        glVertex2f(
        px + (radiusp * cos(p *  twicePi / triangleAmount)),
        py + (radiusp * sin(p * twicePi / triangleAmount))
            );
    }
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(ncrowdPosition2,0.0f, 0.0f);
    glTranslatef(.2,0.0f, 0.0f);
    glBegin(GL_QUADS);   // people 2
    glColor3ub(134, 134, 103);
    glVertex2f(-.81,-.26);
    glVertex2f(-.79,-.26);
    glVertex2f(-.79,-.32);
    glVertex2f(-.81,-.32);
    glEnd();

    glBegin(GL_POLYGON);  //legs
    glColor3ub(82, 32, 195);
    glVertex2f(-.81,-.32);
    glVertex2f(-.79,-.32);
    glVertex2f(-.778,-.39);
    glVertex2f(-.786,-.39);
    glVertex2f(-.795,-.32);
    glVertex2f(-.805,-.39);
    glVertex2f(-.815,-.39);
    glEnd();

    glBegin(GL_QUADS);   //hand
    glColor3ub(195, 195, 144);
    glVertex2f(-.8,-.28);
    glVertex2f(-.792,-.28);
    glVertex2f(-.78,-.32);
    glVertex2f(-.788,-.32);
    glEnd();

    glBegin(GL_QUADS);  // left shoe
    glColor3ub(30, 41, 41);
    glVertex2f(-.815,-.39);
    glVertex2f(-.805,-.39);
    glVertex2f(-.8,-.4);
    glVertex2f(-.815,-.4);
    glEnd();

    glBegin(GL_QUADS); //right shoe
    glColor3ub(30, 41, 41);
    glVertex2f(-.786,-.39);
    glVertex2f(-.778,-.39);
    glVertex2f(-.773,-.4);
    glVertex2f(-.786,-.4);
    glEnd();



     //int p; //head

    //GLfloat px=-.8f; GLfloat py=-.251f; GLfloat radiusp =.011f;
    //int triangleAmount = 200;


    //GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(30, 41, 41);
    glVertex2f(px, py);
    for(p = 0; p <= triangleAmount;p++)
    {
        glVertex2f(
        px + (radiusp * cos(p *  twicePi / triangleAmount)),
        py + (radiusp * sin(p * twicePi / triangleAmount))
            );
    }
    glEnd();
    glPopMatrix();
    glLoadIdentity();


    glPushMatrix();
    glTranslatef(ncrowdPosition3,0.0f, 0.0f);
    glTranslatef(.4,0.0f, 0.0f);
    glBegin(GL_QUADS);   // people 3
    glColor3ub(195, 70, 110);
    glVertex2f(-.81,-.26);
    glVertex2f(-.79,-.26);
    glVertex2f(-.79,-.32);
    glVertex2f(-.81,-.32);
    glEnd();

    glBegin(GL_POLYGON);  //legs
    glColor3ub(176, 195, 119);
    glVertex2f(-.81,-.32);
    glVertex2f(-.79,-.32);
    glVertex2f(-.778,-.39);
    glVertex2f(-.786,-.39);
    glVertex2f(-.795,-.32);
    glVertex2f(-.805,-.39);
    glVertex2f(-.815,-.39);
    glEnd();

    glBegin(GL_QUADS);   //hand
    glColor3ub(195, 195, 144);
    glVertex2f(-.8,-.28);
    glVertex2f(-.792,-.28);
    glVertex2f(-.78,-.32);
    glVertex2f(-.788,-.32);
    glEnd();

    glBegin(GL_QUADS);  // left shoe
    glColor3ub(30, 41, 41);
    glVertex2f(-.815,-.39);
    glVertex2f(-.805,-.39);
    glVertex2f(-.8,-.4);
    glVertex2f(-.815,-.4);
    glEnd();

    glBegin(GL_QUADS); //right shoe
    glColor3ub(30, 41, 41);
    glVertex2f(-.786,-.39);
    glVertex2f(-.778,-.39);
    glVertex2f(-.773,-.4);
    glVertex2f(-.786,-.4);
    glEnd();



     //int p; //head

    //GLfloat px=-.8f; GLfloat py=-.251f; GLfloat radiusp =.011f;
    //int triangleAmount = 200;


    //GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(30, 41, 41);
    glVertex2f(px, py);
    for(p = 0; p <= triangleAmount;p++)
    {
        glVertex2f(
        px + (radiusp * cos(p *  twicePi / triangleAmount)),
        py + (radiusp * sin(p * twicePi / triangleAmount))
            );
    }
    glEnd();
    glPopMatrix();
    glLoadIdentity();


    glPushMatrix();
    glTranslatef(ncrowdPosition4,0.0f, 0.0f);
    glTranslatef(.6,0.0f, 0.0f);
    glBegin(GL_QUADS);   // people 4
    glColor3ub(144, 93, 195);
    glVertex2f(-.81,-.26);
    glVertex2f(-.79,-.26);
    glVertex2f(-.79,-.32);
    glVertex2f(-.81,-.32);
    glEnd();

    glBegin(GL_POLYGON);  //legs
    glColor3ub(144, 195, 195);
    glVertex2f(-.81,-.32);
    glVertex2f(-.79,-.32);
    glVertex2f(-.778,-.39);
    glVertex2f(-.786,-.39);
    glVertex2f(-.795,-.32);
    glVertex2f(-.805,-.39);
    glVertex2f(-.815,-.39);
    glEnd();

    glBegin(GL_QUADS);   //hand
    glColor3ub(195, 195, 144);
    glVertex2f(-.8,-.28);
    glVertex2f(-.792,-.28);
    glVertex2f(-.78,-.32);
    glVertex2f(-.788,-.32);
    glEnd();

    glBegin(GL_QUADS);  // left shoe
    glColor3ub(30, 41, 41);
    glVertex2f(-.815,-.39);
    glVertex2f(-.805,-.39);
    glVertex2f(-.8,-.4);
    glVertex2f(-.815,-.4);
    glEnd();

    glBegin(GL_QUADS); //right shoe
    glColor3ub(30, 41, 41);
    glVertex2f(-.786,-.39);
    glVertex2f(-.778,-.39);
    glVertex2f(-.773,-.4);
    glVertex2f(-.786,-.4);
    glEnd();



     //int p; //head

    //GLfloat px=-.8f; GLfloat py=-.251f; GLfloat radiusp =.011f;
    //int triangleAmount = 200;


    //GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(30, 41, 41);
    glVertex2f(px, py);
    for(p = 0; p <= triangleAmount;p++)
    {
        glVertex2f(
        px + (radiusp * cos(p *  twicePi / triangleAmount)),
        py + (radiusp * sin(p * twicePi / triangleAmount))
            );
    }
    glEnd();
    glPopMatrix();
    glLoadIdentity();


    glPushMatrix();
    glTranslatef(ncrowdPosition5,0.0f, 0.0f);
    glTranslatef(.8,0.0f, 0.0f);
    glBegin(GL_QUADS);   // people 5
    glColor3ub(195, 195, 195);
    glVertex2f(-.81,-.26);
    glVertex2f(-.79,-.26);
    glVertex2f(-.79,-.32);
    glVertex2f(-.81,-.32);
    glEnd();

    glBegin(GL_POLYGON);  //legs
    glColor3ub(134, 134, 103);
    glVertex2f(-.81,-.32);
    glVertex2f(-.79,-.32);
    glVertex2f(-.778,-.39);
    glVertex2f(-.786,-.39);
    glVertex2f(-.795,-.32);
    glVertex2f(-.805,-.39);
    glVertex2f(-.815,-.39);
    glEnd();

    glBegin(GL_QUADS);   //hand
    glColor3ub(195, 195, 144);
    glVertex2f(-.8,-.28);
    glVertex2f(-.792,-.28);
    glVertex2f(-.78,-.32);
    glVertex2f(-.788,-.32);
    glEnd();

    glBegin(GL_QUADS);  // left shoe
    glColor3ub(30, 41, 41);
    glVertex2f(-.815,-.39);
    glVertex2f(-.805,-.39);
    glVertex2f(-.8,-.4);
    glVertex2f(-.815,-.4);
    glEnd();

    glBegin(GL_QUADS); //right shoe
    glColor3ub(30, 41, 41);
    glVertex2f(-.786,-.39);
    glVertex2f(-.778,-.39);
    glVertex2f(-.773,-.4);
    glVertex2f(-.786,-.4);
    glEnd();



     //int p; //head

    //GLfloat px=-.8f; GLfloat py=-.251f; GLfloat radiusp =.011f;
    //int triangleAmount = 200;


    //GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(30, 41, 41);
    glVertex2f(px, py);
    for(p = 0; p <= triangleAmount;p++)
    {
        glVertex2f(
        px + (radiusp * cos(p *  twicePi / triangleAmount)),
        py + (radiusp * sin(p * twicePi / triangleAmount))
            );
    }
    glEnd();
    glPopMatrix();
    glLoadIdentity();


    glPushMatrix();
    glTranslatef(ncrowdPosition6,0.0f, 0.0f);
    glTranslatef(1,0.0f, 0.0f);
    glBegin(GL_QUADS);   // people 6
    glColor3ub(195, 154, 0);
    glVertex2f(-.81,-.26);
    glVertex2f(-.79,-.26);
    glVertex2f(-.79,-.32);
    glVertex2f(-.81,-.32);
    glEnd();

    glBegin(GL_POLYGON);  //legs
    glColor3ub(82, 32, 195);
    glVertex2f(-.81,-.32);
    glVertex2f(-.79,-.32);
    glVertex2f(-.778,-.39);
    glVertex2f(-.786,-.39);
    glVertex2f(-.795,-.32);
    glVertex2f(-.805,-.39);
    glVertex2f(-.815,-.39);
    glEnd();

    glBegin(GL_QUADS);   //hand
    glColor3ub(195, 195, 144);
    glVertex2f(-.8,-.28);
    glVertex2f(-.792,-.28);
    glVertex2f(-.78,-.32);
    glVertex2f(-.788,-.32);
    glEnd();

    glBegin(GL_QUADS);  // left shoe
    glColor3ub(30, 41, 41);
    glVertex2f(-.815,-.39);
    glVertex2f(-.805,-.39);
    glVertex2f(-.8,-.4);
    glVertex2f(-.815,-.4);
    glEnd();

    glBegin(GL_QUADS); //right shoe
    glColor3ub(30, 41, 41);
    glVertex2f(-.786,-.39);
    glVertex2f(-.778,-.39);
    glVertex2f(-.773,-.4);
    glVertex2f(-.786,-.4);
    glEnd();



     //int p; //head

    //GLfloat px=-.8f; GLfloat py=-.251f; GLfloat radiusp =.011f;
    //int triangleAmount = 200;


    //GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(30, 41, 41);
    glVertex2f(px, py);
    for(p = 0; p <= triangleAmount;p++)
    {
        glVertex2f(
        px + (radiusp * cos(p *  twicePi / triangleAmount)),
        py + (radiusp * sin(p * twicePi / triangleAmount))
            );
    }
    glEnd();
    glPopMatrix();
    glLoadIdentity();


    glPushMatrix();
    glTranslatef(ncrowdPosition7,0.0f, 0.0f);
    glTranslatef(1.2,0.0f, 0.0f);
    glBegin(GL_QUADS);   // people 7
    glColor3ub(195, 93, 195);
    glVertex2f(-.81,-.26);
    glVertex2f(-.79,-.26);
    glVertex2f(-.79,-.32);
    glVertex2f(-.81,-.32);
    glEnd();

    glBegin(GL_POLYGON);  //legs
    glColor3ub(195, 93, 93);
    glVertex2f(-.81,-.32);
    glVertex2f(-.79,-.32);
    glVertex2f(-.778,-.39);
    glVertex2f(-.786,-.39);
    glVertex2f(-.795,-.32);
    glVertex2f(-.805,-.39);
    glVertex2f(-.815,-.39);
    glEnd();

    glBegin(GL_QUADS);   //hand
    glColor3ub(195, 195, 144);
    glVertex2f(-.8,-.28);
    glVertex2f(-.792,-.28);
    glVertex2f(-.78,-.32);
    glVertex2f(-.788,-.32);
    glEnd();

    glBegin(GL_QUADS);  // left shoe
    glColor3ub(30, 41, 41);
    glVertex2f(-.815,-.39);
    glVertex2f(-.805,-.39);
    glVertex2f(-.8,-.4);
    glVertex2f(-.815,-.4);
    glEnd();

    glBegin(GL_QUADS); //right shoe
    glColor3ub(30, 41, 41);
    glVertex2f(-.786,-.39);
    glVertex2f(-.778,-.39);
    glVertex2f(-.773,-.4);
    glVertex2f(-.786,-.4);
    glEnd();



     //int p; //head

    //GLfloat px=-.8f; GLfloat py=-.251f; GLfloat radiusp =.011f;
    //int triangleAmount = 200;


    //GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(30, 41, 41);
    glVertex2f(px, py);
    for(p = 0; p <= triangleAmount;p++)
    {
        glVertex2f(
        px + (radiusp * cos(p *  twicePi / triangleAmount)),
        py + (radiusp * sin(p * twicePi / triangleAmount))
            );
    }
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(ncrowdPosition8,0.0f, 0.0f);
    glTranslatef(1.4,0.0f, 0.0f);
    glBegin(GL_QUADS);   // people 8
    glColor3ub(144, 195, 195);
    glVertex2f(-.81,-.26);
    glVertex2f(-.79,-.26);
    glVertex2f(-.79,-.32);
    glVertex2f(-.81,-.32);
    glEnd();

    glBegin(GL_POLYGON);  //legs
    glColor3ub(195, 195, 195);
    glVertex2f(-.81,-.32);
    glVertex2f(-.79,-.32);
    glVertex2f(-.778,-.39);
    glVertex2f(-.786,-.39);
    glVertex2f(-.795,-.32);
    glVertex2f(-.805,-.39);
    glVertex2f(-.815,-.39);
    glEnd();

    glBegin(GL_QUADS);   //hand
    glColor3ub(195, 195, 144);
    glVertex2f(-.8,-.28);
    glVertex2f(-.792,-.28);
    glVertex2f(-.78,-.32);
    glVertex2f(-.788,-.32);
    glEnd();

    glBegin(GL_QUADS);  // left shoe
    glColor3ub(30, 41, 41);
    glVertex2f(-.815,-.39);
    glVertex2f(-.805,-.39);
    glVertex2f(-.8,-.4);
    glVertex2f(-.815,-.4);
    glEnd();

    glBegin(GL_QUADS); //right shoe
    glColor3ub(30, 41, 41);
    glVertex2f(-.786,-.39);
    glVertex2f(-.778,-.39);
    glVertex2f(-.773,-.4);
    glVertex2f(-.786,-.4);
    glEnd();



     //int p; //head

    //GLfloat px=-.8f; GLfloat py=-.251f; GLfloat radiusp =.011f;
    //int triangleAmount = 200;


    //GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(30, 41, 41);
    glVertex2f(px, py);
    for(p = 0; p <= triangleAmount;p++)
    {
        glVertex2f(
        px + (radiusp * cos(p *  twicePi / triangleAmount)),
        py + (radiusp * sin(p * twicePi / triangleAmount))
            );
    }
    glEnd();
    glPopMatrix();
    glLoadIdentity();


    glPushMatrix();
    glTranslatef(ncrowdPosition9,0.0f, 0.0f);
    glTranslatef(1.6,0.0f, 0.0f);
    glBegin(GL_QUADS);   // people 9
    glColor3ub(195, 164, 195);
    glVertex2f(-.81,-.26);
    glVertex2f(-.79,-.26);
    glVertex2f(-.79,-.32);
    glVertex2f(-.81,-.32);
    glEnd();

    glBegin(GL_POLYGON);  //legs
    glColor3ub(82, 32, 195);
    glVertex2f(-.81,-.32);
    glVertex2f(-.79,-.32);
    glVertex2f(-.778,-.39);
    glVertex2f(-.786,-.39);
    glVertex2f(-.795,-.32);
    glVertex2f(-.805,-.39);
    glVertex2f(-.815,-.39);
    glEnd();

    glBegin(GL_QUADS);   //hand
    glColor3ub(195, 195, 144);
    glVertex2f(-.8,-.28);
    glVertex2f(-.792,-.28);
    glVertex2f(-.78,-.32);
    glVertex2f(-.788,-.32);
    glEnd();

    glBegin(GL_QUADS);  // left shoe
    glColor3ub(30, 41, 41);
    glVertex2f(-.815,-.39);
    glVertex2f(-.805,-.39);
    glVertex2f(-.8,-.4);
    glVertex2f(-.815,-.4);
    glEnd();

    glBegin(GL_QUADS); //right shoe
    glColor3ub(30, 41, 41);
    glVertex2f(-.786,-.39);
    glVertex2f(-.778,-.39);
    glVertex2f(-.773,-.4);
    glVertex2f(-.786,-.4);
    glEnd();



     //int p; //head

    //GLfloat px=-.8f; GLfloat py=-.251f; GLfloat radiusp =.011f;
    //int triangleAmount = 200;


    //GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(30, 41, 41);
    glVertex2f(px, py);
    for(p = 0; p <= triangleAmount;p++)
    {
        glVertex2f(
        px + (radiusp * cos(p *  twicePi / triangleAmount)),
        py + (radiusp * sin(p * twicePi / triangleAmount))
            );
    }
    glEnd();
    glPopMatrix();
    glLoadIdentity();


    glPushMatrix();
    glTranslatef(ncrowdPosition10,0.0f, 0.0f);
    glTranslatef(1.8,0.0f, 0.0f);
    glBegin(GL_QUADS);   // people 10
    glColor3ub(176, 195, 119);
    glVertex2f(-.81,-.26);
    glVertex2f(-.79,-.26);
    glVertex2f(-.79,-.32);
    glVertex2f(-.81,-.32);
    glEnd();

    glBegin(GL_POLYGON);  //legs
    glColor3ub(134, 134, 103);
    glVertex2f(-.81,-.32);
    glVertex2f(-.79,-.32);
    glVertex2f(-.778,-.39);
    glVertex2f(-.786,-.39);
    glVertex2f(-.795,-.32);
    glVertex2f(-.805,-.39);
    glVertex2f(-.815,-.39);
    glEnd();

    glBegin(GL_QUADS);   //hand
    glColor3ub(195, 195, 144);
    glVertex2f(-.8,-.28);
    glVertex2f(-.792,-.28);
    glVertex2f(-.78,-.32);
    glVertex2f(-.788,-.32);
    glEnd();

    glBegin(GL_QUADS);  // left shoe
    glColor3ub(30, 41, 41);
    glVertex2f(-.815,-.39);
    glVertex2f(-.805,-.39);
    glVertex2f(-.8,-.4);
    glVertex2f(-.815,-.4);
    glEnd();

    glBegin(GL_QUADS); //right shoe
    glColor3ub(30, 41, 41);
    glVertex2f(-.786,-.39);
    glVertex2f(-.778,-.39);
    glVertex2f(-.773,-.4);
    glVertex2f(-.786,-.4);
    glEnd();



     //int p; //head

    //GLfloat px=-.8f; GLfloat py=-.251f; GLfloat radiusp =.011f;
    //int triangleAmount = 200;


    //GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(30, 41, 41);
    glVertex2f(px, py);
    for(p = 0; p <= triangleAmount;p++)
    {
        glVertex2f(
        px + (radiusp * cos(p *  twicePi / triangleAmount)),
        py + (radiusp * sin(p * twicePi / triangleAmount))
            );
    }
    glEnd();
    glPopMatrix();
    glLoadIdentity();


    //LAMPPOST==========================================================================================

    glBegin(GL_QUADS); //stand  //center----------------------
    glColor3ub(100,100,100);
    glVertex2f(-.005,-.3);
    glVertex2f(.005,-.3);
    glVertex2f(.005,-.45);
    glVertex2f(-.005,-.45);
    glEnd();
    glBegin(GL_QUADS);  //stand left
    glColor3ub(100,100,100);
    glVertex2f(-.025,-.24);
    glVertex2f(-.015,-.24);
    glVertex2f(.005,-.3);
    glVertex2f(-.005,-.3);
    glEnd();
    glBegin(GL_QUADS);  //stand right
    glColor3ub(100,100,100);
    glVertex2f(.025,-.24);
    glVertex2f(.015,-.24);
    glVertex2f(-.005,-.3);
    glVertex2f(.005,-.3);
    glEnd();

    int l;  // left light

    GLfloat la=-.032f; GLfloat lb=-.23f; GLfloat radiusl =.003f;
    int triangleAmountl = 30;


    GLfloat twicePil = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 204);
    glVertex2f(la, lb);
    for(l = 0; l <= triangleAmount2;l++)
    {
        glVertex2f(
        la + (radius2 * cos(l *  twicePil / triangleAmountl)),
        lb + (radius2 * sin(l * twicePil / triangleAmountl))
            );
    }
    glEnd();


    //int l;  // right light

    GLfloat la2=.032f; //GLfloat lb2=-.23f; GLfloat radiusl =.003f;
    //int triangleAmountl = 30;


    //GLfloat twicePil = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 204);
    glVertex2f(la2, lb);
    for(l = 0; l <= triangleAmount2;l++)
    {
        glVertex2f(
        la2 + (radius2 * cos(l *  twicePil / triangleAmountl)),
        lb + (radius2 * sin(l * twicePil / triangleAmountl))
            );
    }
    glEnd();

    glTranslatef(.5,0,0);
    glBegin(GL_QUADS); //stand  //right----------------------
    glColor3ub(100,100,100);
    glVertex2f(-.005,-.3);
    glVertex2f(.005,-.3);
    glVertex2f(.005,-.45);
    glVertex2f(-.005,-.45);
    glEnd();
    glBegin(GL_QUADS);  //stand left
    glColor3ub(100,100,100);
    glVertex2f(-.025,-.24);
    glVertex2f(-.015,-.24);
    glVertex2f(.005,-.3);
    glVertex2f(-.005,-.3);
    glEnd();
    glBegin(GL_QUADS);  //stand right
    glColor3ub(100,100,100);
    glVertex2f(.025,-.24);
    glVertex2f(.015,-.24);
    glVertex2f(-.005,-.3);
    glVertex2f(.005,-.3);
    glEnd();

    //int l;  // left light

    //GLfloat la=-.032f; GLfloat lb=-.23f; GLfloat radiusl =.003f;
    //int triangleAmountl = 30;


    //GLfloat twicePil = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 204);
    glVertex2f(la, lb);
    for(l = 0; l <= triangleAmount2;l++)
    {
        glVertex2f(
        la + (radius2 * cos(l *  twicePil / triangleAmountl)),
        lb + (radius2 * sin(l * twicePil / triangleAmountl))
            );
    }
    glEnd();


    //int l;  // right light

    //GLfloat la2=.032f; //GLfloat lb2=-.23f; GLfloat radiusl =.003f;
    //int triangleAmountl = 30;


    //GLfloat twicePil = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 204);
    glVertex2f(la2, lb);
    for(l = 0; l <= triangleAmount2;l++)
    {
        glVertex2f(
        la2 + (radius2 * cos(l *  twicePil / triangleAmountl)),
        lb + (radius2 * sin(l * twicePil / triangleAmountl))
            );
    }
    glEnd();
    glLoadIdentity();


    glTranslatef(-.5,0,0);
    glBegin(GL_QUADS); //stand  //left----------------------
    glColor3ub(100,100,100);
    glVertex2f(-.005,-.3);
    glVertex2f(.005,-.3);
    glVertex2f(.005,-.45);
    glVertex2f(-.005,-.45);
    glEnd();
    glBegin(GL_QUADS);  //stand left
    glColor3ub(100,100,100);
    glVertex2f(-.025,-.24);
    glVertex2f(-.015,-.24);
    glVertex2f(.005,-.3);
    glVertex2f(-.005,-.3);
    glEnd();
    glBegin(GL_QUADS);  //stand right
    glColor3ub(100,100,100);
    glVertex2f(.025,-.24);
    glVertex2f(.015,-.24);
    glVertex2f(-.005,-.3);
    glVertex2f(.005,-.3);
    glEnd();

//    int l;  // left light

//    GLfloat la=-.032f; GLfloat lb=-.23f; GLfloat radiusl =.003f;
//    int triangleAmountl = 30;


//    GLfloat twicePil = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 204);
    glVertex2f(la, lb);
    for(l = 0; l <= triangleAmount2;l++)
    {
        glVertex2f(
        la + (radius2 * cos(l *  twicePil / triangleAmountl)),
        lb + (radius2 * sin(l * twicePil / triangleAmountl))
            );
    }
    glEnd();


    //int l;  // right light

//    GLfloat la2=.032f; //GLfloat lb2=-.23f; GLfloat radiusl =.003f;
    //int triangleAmountl = 30;


    //GLfloat twicePil = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 204);
    glVertex2f(la2, lb);
    for(l = 0; l <= triangleAmount2;l++)
    {
        glVertex2f(
        la2 + (radius2 * cos(l *  twicePil / triangleAmountl)),
        lb + (radius2 * sin(l * twicePil / triangleAmountl))
            );
    }
    glEnd();

    glLoadIdentity();



    //ROAD==========================================================================================
    glBegin(GL_QUADS);
    glColor3ub(80,80,80);
    glVertex2f(-1,-.47);
    glVertex2f(1,-.47);
    glVertex2f(1,-1);
    glVertex2f(-1,-1);
    glEnd();

    glBegin(GL_QUADS); //road divider---------------
    glColor3ub(170,170,170);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(170,170,170);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(170,170,170);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(170,170,170);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(170,170,170);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(170,170,170);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(170,170,170);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(170,170,170);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(170,170,170);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(170,170,170);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glLoadIdentity();




    //CAR=====================================================================================================

    glPushMatrix();
    glTranslatef(ncarPosition1,0.0f, 0.0f);
    glBegin(GL_QUADS);  //Car 1-----------------
    glColor3ub(0, 144, 195);
    glVertex2f(.36,-.62);
    glVertex2f(.84,-.62);
    glVertex2f(.85,-.75);
    glVertex2f(.35,-.75);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 144, 195);
    glVertex2f(.5,-.52);
    glVertex2f(.7,-.52);
    glVertex2f(.75,-.62);
    glVertex2f(.45,-.62);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 55, 93);
    glVertex2f(.51,-.54);
    glVertex2f(.69,-.54);
    glVertex2f(.73,-.62);
    glVertex2f(.47,-.62);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 144, 195);
    glVertex2f(.59,-.54);
    glVertex2f(.61,-.54);
    glVertex2f(.61,-.62);
    glVertex2f(.59,-.62);
    glEnd();



    //int i;  // left wheel

    GLfloat carx=.46f; GLfloat cary=-.75f; GLfloat carradius =.052f;
    //int triangleAmount = 200;
    //GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(25,25,25);
    glVertex2f(carx, cary);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(
        carx + (carradius * cos(i *  twicePi / triangleAmount)),
        cary + (carradius * sin(i * twicePi / triangleAmount))
            );
    }
    glEnd();

    //int i;  // left wheel small

    //GLfloat carx=.46f; GLfloat cary=-.75f;
     GLfloat carradius2 =.022f;
    //int triangleAmount = 200;
    //GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(135,135,135);
    glVertex2f(carx, cary);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(
        carx + (carradius2 * cos(i *  twicePi / triangleAmount)),
        cary + (carradius2 * sin(i * twicePi / triangleAmount))
            );
    }
    glEnd();

    //int i;  // right wheel

    GLfloat carx2=.74f; GLfloat cary2=-.75f; //GLfloat carradius =.052f;
    //int triangleAmount = 200;
    //GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(25,25,25);
    glVertex2f(carx2, cary2);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(
        carx2 + (carradius * cos(i *  twicePi / triangleAmount)),
        cary2 + (carradius * sin(i * twicePi / triangleAmount))
            );
    }
    glEnd();

    //int i;  // right wheel small

    //GLfloat carx2=.74f; GLfloat cary2=-.75f;
    //int triangleAmount = 200;
    //GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(135,135,135);
    glVertex2f(carx2, cary2);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(
        carx2 + (carradius2 * cos(i *  twicePi / triangleAmount)),
        cary2 + (carradius2 * sin(i * twicePi / triangleAmount))
            );
    }
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(ncarPosition2,0.0f, 0.0f);
    glTranslatef(-1.4,0,0);
    glBegin(GL_QUADS);  //Car 2-----------------
    glColor3ub(195, 42, 42);
    glVertex2f(.36,-.62);
    glVertex2f(.84,-.62);
    glVertex2f(.85,-.75);
    glVertex2f(.35,-.75);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(195, 42, 42);
    glVertex2f(.5,-.52);
    glVertex2f(.7,-.52);
    glVertex2f(.75,-.62);
    glVertex2f(.45,-.62);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(88, 0, 0);
    glVertex2f(.51,-.54);
    glVertex2f(.69,-.54);
    glVertex2f(.73,-.62);
    glVertex2f(.47,-.62);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(195, 42, 42);
    glVertex2f(.59,-.54);
    glVertex2f(.61,-.54);
    glVertex2f(.61,-.62);
    glVertex2f(.59,-.62);
    glEnd();



    //int i;  // left wheel

//    GLfloat carx=.46f; GLfloat cary=-.75f; GLfloat carradius =.052f;
    //int triangleAmount = 200;
    //GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(25,25,25);
    glVertex2f(carx, cary);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(
        carx + (carradius * cos(i *  twicePi / triangleAmount)),
        cary + (carradius * sin(i * twicePi / triangleAmount))
            );
    }
    glEnd();

    //int i;  // left wheel small

    //GLfloat carx=.46f; GLfloat cary=-.75f;
//     GLfloat carradius2 =.022f;
    //int triangleAmount = 200;
    //GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(135,135,135);
    glVertex2f(carx, cary);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(
        carx + (carradius2 * cos(i *  twicePi / triangleAmount)),
        cary + (carradius2 * sin(i * twicePi / triangleAmount))
            );
    }
    glEnd();

    //int i;  // right wheel

//    GLfloat carx2=.74f; GLfloat cary2=-.75f; //GLfloat carradius =.052f;
    //int triangleAmount = 200;
    //GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(25,25,25);
    glVertex2f(carx2, cary2);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(
        carx2 + (carradius * cos(i *  twicePi / triangleAmount)),
        cary2 + (carradius * sin(i * twicePi / triangleAmount))
            );
    }
    glEnd();

    //int i;  // right wheel small

    //GLfloat carx2=.74f; GLfloat cary2=-.75f;
    //int triangleAmount = 200;
    //GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(135,135,135);
    glVertex2f(carx2, cary2);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(
        carx2 + (carradius2 * cos(i *  twicePi / triangleAmount)),
        cary2 + (carradius2 * sin(i * twicePi / triangleAmount))
            );
    }
    glEnd();
    glPopMatrix();
    glLoadIdentity();


    //glutDisplayFunc(initial);
    glutTimerFunc(10000,morning,0);

    glFlush();
}



void night(int b)
{

    sunPosition8 = -.2;
    sunPosition = -1.3;
    sunPosition2 = 0;

    glutDisplayFunc(nightView);
    soundNight();
}

void noonView()
{

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    //SKY================================================================================================
    glBegin(GL_QUADS);  //
    glColor3ub(179, 204, 255);
    glVertex2f(-1,1);
    glVertex2f(1,1);
    glVertex2f(1,0);
    glVertex2f(-1,0);
    glEnd();

    glPushMatrix();
    glTranslatef(sunPosition,sunPosition2, 0.0f);
    int s;  // sun-----------------------

    GLfloat sx=-.3f; GLfloat sy=.8f; GLfloat radiuss =.05f;
    int triangleAmounts = 200;


    GLfloat twicePis = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 204, 0);
    glVertex2f(sx, sy);
    for(s = 0; s <= triangleAmounts;s++)
    {
        glVertex2f(
        sx + (radiuss * cos(s *  twicePis / triangleAmounts)),
        sy + (radiuss * sin(s * twicePis / triangleAmounts))
            );
    }
    glEnd();
    glPopMatrix();


    //--------------------------------------------------------- bird
glPushMatrix();
                glTranslatef(birdposition,0.0f, 0.0f);
                glBegin(GL_QUADS);//bird
                glColor3ub(0, 240, 182);
                glVertex2f(-.6,.8);
                glVertex2f(-.62,.76);
                glVertex2f(-.56,.76);
                glVertex2f(-.56,.8);
                glEnd();

                glBegin(GL_TRIANGLES);
                glColor3ub(255, 138, 138);
                glVertex2f(-.56,.8);
                glVertex2f(-.54,.78);
                glVertex2f(-.56,.78);

                glColor3ub(0, 240, 182);
                glVertex2f(-.67,.77);
                glVertex2f(-.62,.76);
                glVertex2f(-.61,.78);
                glEnd();
                glPopMatrix();
                glLoadIdentity();


                glPushMatrix();
                glTranslatef(birdposition1,0.0f, 0.0f);
                glBegin(GL_QUADS);//bird1
                glColor3ub(255, 230, 128);
                glVertex2f(-.68,.9);
                glVertex2f(-.7,.86);
                glVertex2f(-.64,.86);
                glVertex2f(-.64,.9);
                glEnd();

                glBegin(GL_TRIANGLES);
                glColor3ub(100,100,100);
                glVertex2f(-.64,.9);
                glVertex2f(-.62,.88);
                glVertex2f(-.64,.88);

                glColor3ub(255, 230, 128);
                glVertex2f(-.74,.87);
                glVertex2f(-.7,.86);
                glVertex2f(-.68,.88);
                glEnd();
                glPopMatrix();
                glLoadIdentity();

//--------------------------------------------------------------------- flag
 glBegin(GL_QUADS);//flagstick
                glColor3ub(100,100,100);
                glVertex2f(-.97,.0);
                glVertex2f(-.96,.0);
                glVertex2f(-.96,.4);
                glVertex2f(-.97,.4);
                glEnd();

                glBegin(GL_QUADS);//flag
                glColor3ub(121, 210, 166);
                glVertex2f(-.96,.24);
                glVertex2f(-.83,.24);
                glVertex2f(-.83,.38);
                glVertex2f(-.96,.38);
                glEnd();


                int q;  // flag circle-----------------------

    GLfloat sxx=-.9f; GLfloat syy=.31f; GLfloat radiusss =.03f;
    int triangleAmountss = 200;


    GLfloat twicePiss = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 128, 128);
    glVertex2f(sxx, syy);
    for(q = 0; q <= triangleAmountss;q++)
    {
        glVertex2f(
        sxx + (radiusss * cos(q *  twicePiss / triangleAmountss)),
        syy + (radiusss * sin(q * twicePiss / triangleAmountss))
            );
    }
    glEnd();



    //UPPER STRUCTURE==========================================================================================
    glBegin(GL_QUADS);  //upper center block---------
    glColor3ub(225,225,225);
    glVertex2f(-.15,.62);
    glVertex2f(.15,.62);
    glVertex2f(.15,.5);
    glVertex2f(-.15,.5);
    glEnd();

    glBegin(GL_QUADS);  //upper right block 1---------
    glColor3ub(240,240,240);
    glVertex2f(.15,.62);
    glVertex2f(.185,.59);
    glVertex2f(.185,.5);
    glVertex2f(.15,.5);
    glEnd();


    glBegin(GL_QUADS);  //upper right block 2---------
    glColor3ub(230,230,230);
    glVertex2f(.185,.59);
    glVertex2f(.25,.59);
    glVertex2f(.25,.4);
    glVertex2f(.185,.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(240,240,240);
    glVertex2f(.25,.59);
    glVertex2f(.32,.56);
    glVertex2f(.32,.3);
    glVertex2f(.25,.3);
    glEnd();




    glScalef(-1.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);  //upper left block 1---------
    glColor3ub(240,240,240);
    glVertex2f(.15,.62);
    glVertex2f(.185,.59);
    glVertex2f(.185,.5);
    glVertex2f(.15,.5);
    glEnd();

    glBegin(GL_QUADS);  //upper left block 2---------
    glColor3ub(230,230,230);
    glVertex2f(.185,.59);
    glVertex2f(.25,.59);
    glVertex2f(.25,.4);
    glVertex2f(.185,.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(240,240,240);
    glVertex2f(.25,.59);
    glVertex2f(.32,.56);
    glVertex2f(.32,.3);
    glVertex2f(.25,.3);
    glEnd();

    glLoadIdentity();



     //UPPER STRUCTURE LINES==========================================================================
    glBegin(GL_LINES);
    glColor3ub(235,235,235);
    glVertex2f(-.15,.56);
    glVertex2f(.15,.56);
    glVertex2f(.15,.56);
    glVertex2f(.185,.53);
    glVertex2f(.185,.53);
    glVertex2f(.25,.53);
    glVertex2f(.185,.48);
    glVertex2f(.25,.48);
    glVertex2f(.25,.53);
    glVertex2f(.32,.50);
    glEnd();


    glScalef(-1.0f, 1.0f, 0.0f);
    glBegin(GL_LINES);
    glColor3ub(235,235,235);
    glVertex2f(.185,.53);
    glVertex2f(.25,.53);
    glVertex2f(.185,.48);
    glVertex2f(.25,.48);
    glVertex2f(.25,.53);
    glVertex2f(.32,.50);
    glEnd();
    glLoadIdentity();



    //Upper STRUCTURE CIRCLES & TRIANGLES=======================================================================================

    glBegin(GL_QUADS);
    glColor3ub(170,170,170);
    glVertex2f(-.1,.56);
    glVertex2f(.1,.56);
    glVertex2f(.1,.5);
    glVertex2f(-.1,.5);
    glEnd();

    int j;  // upper right circle

    GLfloat a=.285f; GLfloat b=.518f; GLfloat radius2 =.03f;
    int triangleAmount2 = 30;


    GLfloat twicePi2 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(170,170,170);
    glVertex2f(a, b);
    for(j = 0; j <= triangleAmount2;j++)
    {
        glVertex2f(
        a + (radius2 * cos(j *  twicePi2 / triangleAmount2)),
        b + (radius2 * sin(j * twicePi2 / triangleAmount2))
            );
    }
    glEnd();


    //int j;  // upper left circle

    //GLfloat a=-.285f; GLfloat b=-.518f; GLfloat radius2 =.03f;
    //int triangleAmount2 = 30;


    //GLfloat twicePi2 = 2.0f * PI;
    GLfloat e=-.285f;  // upper left circle
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(170,170,170);
    glVertex2f(e, b);
    for(j = 0; j <= triangleAmount2;j++)
    {
        glVertex2f(
        e + (radius2 * cos(j *  twicePi2 / triangleAmount2)),
        b + (radius2 * sin(j * twicePi2 / triangleAmount2))
            );
    }
    glEnd();



    //STRUCTURE ==========================================================================================
    glBegin(GL_QUADS);  //center block---------
    glColor3ub(210,210,210);
    glVertex2f(-.05,.5);
    glVertex2f(.05,.5);
    glVertex2f(.05,0);
    glVertex2f(-.05,0);
    glEnd();

    glBegin(GL_QUADS);  //right block 1--------
    glColor3ub(220,220,220);
    glVertex2f(.05,.52);
    glVertex2f(.22,.52);
    glVertex2f(.22,0);
    glVertex2f(.05,0);
    glEnd();

    glBegin(GL_QUADS);  //right block 2--------
    glColor3ub(210,210,210);
    glVertex2f(.22,.45);
    glVertex2f(.35,.48);
    glVertex2f(.35,0);
    glVertex2f(.22,0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(220,220,220);
    glVertex2f(.35,.48);
    glVertex2f(.48,.45);
    glVertex2f(.48,0);
    glVertex2f(.35,0);
    glEnd();

    glBegin(GL_QUADS);  //right block 3---------
    glColor3ub(202,202,202);
    glVertex2f(.48,.44);
    glVertex2f(.5,.45);
    glVertex2f(.5,0);
    glVertex2f(.48,0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(220,220,220);
    glVertex2f(.5,.45);
    glVertex2f(.63,.42);
    glVertex2f(.63,0);
    glVertex2f(.5,0);
    glEnd();

    glBegin(GL_QUADS);  //right block 4---------
    glColor3ub(210,210,210);
    glVertex2f(.63,.40);
    glVertex2f(.76,.40);
    glVertex2f(.76,.0);
    glVertex2f(.63,.0);
    glEnd();







    glScalef(-1.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);  //left block 1------------
    glColor3ub(220,220,220);
    glVertex2f(.05,.52);
    glVertex2f(.22,.52);
    glVertex2f(.22,0);
    glVertex2f(.05,0);
    glEnd();

    glBegin(GL_QUADS);  //left block 2-----------
    glColor3ub(210,210,210);
    glVertex2f(.22,.45);
    glVertex2f(.35,.48);
    glVertex2f(.35,0);
    glVertex2f(.22,0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(220,220,220);
    glVertex2f(.35,.48);
    glVertex2f(.48,.45);
    glVertex2f(.48,0);
    glVertex2f(.35,0);
    glEnd();

    glBegin(GL_QUADS);  //left block 3----------
    glColor3ub(202,202,202);
    glVertex2f(.48,.44);
    glVertex2f(.5,.45);
    glVertex2f(.5,0);
    glVertex2f(.48,0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(220,220,220);
    glVertex2f(.5,.45);
    glVertex2f(.63,.42);
    glVertex2f(.63,0);
    glVertex2f(.5,0);
    glEnd();

    glBegin(GL_QUADS);  //left block 4---------
    glColor3ub(210,210,210);
    glVertex2f(.63,.40);
    glVertex2f(.76,.40);
    glVertex2f(.76,.0);
    glVertex2f(.63,.0);
    glEnd();
    glLoadIdentity();








    //STRUCTURE LINES==========================================================================
    glBegin(GL_LINES);
    glColor3ub(235,235,235);
    //glVertex2f(-.05,.5);  //center block-----------
    //glVertex2f(-.05,0);
    glVertex2f(-.05,.5);
    glVertex2f(.05,.5);
    //glVertex2f(.05,.5);
    //glVertex2f(.05,0);
    glVertex2f(0,.5);
    glVertex2f(0,0);
    glVertex2f(-.05,.45);
    glVertex2f(.05,.45);
    glVertex2f(-.05,.4);
    glVertex2f(.05,.4);
    glVertex2f(-.05,.35);
    glVertex2f(.05,.35);
    glVertex2f(-.05,.3);
    glVertex2f(.05,.3);
    glVertex2f(-.05,.25);
    glVertex2f(.05,.25);
    glVertex2f(-.05,.2);
    glVertex2f(.05,.2);
    glVertex2f(-.05,.15);
    glVertex2f(.05,.15);
    glVertex2f(-.05,.1);
    glVertex2f(.05,.1);
    glVertex2f(-.05,.05);
    glVertex2f(.05,.05);


    glVertex2f(.05,.52);  //right block 1------------
    glVertex2f(.05,.5);
    glVertex2f(.05,.52);
    glVertex2f(.22,.52);
    //glVertex2f(.22,.52);
    //glVertex2f(.22,.0);
    glVertex2f(.135,.52);
    glVertex2f(.135,.0);
    glVertex2f(.185,.52);
    glVertex2f(.185,.0);
    glVertex2f(.085,.52);
    glVertex2f(.085,.0);
    glVertex2f(.05,.47);
    glVertex2f(.22,.47);
    glVertex2f(.05,.42);
    glVertex2f(.22,.42);
    glVertex2f(.05,.37);
    glVertex2f(.22,.37);
    glVertex2f(.05,.32);
    glVertex2f(.22,.32);
    glVertex2f(.05,.27);
    glVertex2f(.22,.27);
    glVertex2f(.05,.22);
    glVertex2f(.22,.22);
    glVertex2f(.05,.17);
    glVertex2f(.22,.17);
    glVertex2f(.05,.12);
    glVertex2f(.22,.12);
    glVertex2f(.05,.07);
    glVertex2f(.22,.07);
    glVertex2f(.05,.02);
    glVertex2f(.22,.02);

    glVertex2f(.22,.45);  //right block 2------------
    glVertex2f(.35,.48);
    glVertex2f(.35,.48);
    glVertex2f(.48,.45);
    glVertex2f(48,.45);
    glVertex2f(.48,0);
    glVertex2f(.22,.4);
    glVertex2f(.35,.43);
    glVertex2f(.22,.35);
    glVertex2f(.35,.38);
    glVertex2f(.22,.3);
    glVertex2f(.35,.33);
    glVertex2f(.22,.25);
    glVertex2f(.35,.28);
    glVertex2f(.22,.2);
    glVertex2f(.35,.23);
    glVertex2f(.22,.15);
    glVertex2f(.35,.18);
    glVertex2f(.22,.1);
    glVertex2f(.35,.13);
    glVertex2f(.22,.05);
    glVertex2f(.35,.08);
    glVertex2f(.22,.0);
    glVertex2f(.35,.03);
    glVertex2f(.48,.4);
    glVertex2f(.35,.43);
    glVertex2f(.48,.35);
    glVertex2f(.35,.38);
    glVertex2f(.48,.3);
    glVertex2f(.35,.33);
    glVertex2f(.48,.25);
    glVertex2f(.35,.28);
    glVertex2f(.48,.2);
    glVertex2f(.35,.23);
    glVertex2f(.48,.15);
    glVertex2f(.35,.18);
    glVertex2f(.48,.1);
    glVertex2f(.35,.13);
    glVertex2f(.48,.05);
    glVertex2f(.35,.08);
    glVertex2f(.48,.0);
    glVertex2f(.35,.03);
    glVertex2f(.25,.46);
    glVertex2f(.25,.0);
    glVertex2f(.31,.47);
    glVertex2f(.31,.0);
    glVertex2f(.38,.47);
    glVertex2f(.38,.0);
    glVertex2f(.44,.46);
    glVertex2f(.44,.0);


    glVertex2f(.48,.44);  //right block 3---------------------
    glVertex2f(.5,.45);
    glVertex2f(.48,.39);
    glVertex2f(.5,.40);
    glVertex2f(.48,.34);
    glVertex2f(.5,.35);
    glVertex2f(.48,.39);
    glVertex2f(.5,.40);
    glVertex2f(.48,.34);
    glVertex2f(.5,.35);
    glVertex2f(.48,.29);
    glVertex2f(.5,.30);
    glVertex2f(.48,.24);
    glVertex2f(.5,.25);
    glVertex2f(.48,.19);
    glVertex2f(.5,.20);
    glVertex2f(.48,.14);
    glVertex2f(.5,.15);
    glVertex2f(.48,.09);
    glVertex2f(.5,.1);
    glVertex2f(.48,.04);
    glVertex2f(.5,.05);
    glVertex2f(.5,.45);
    glVertex2f(.63,.42);
    glVertex2f(.5,.40);
    glVertex2f(.63,.37);
    glVertex2f(.5,.35);
    glVertex2f(.63,.32);
    glVertex2f(.5,.30);
    glVertex2f(.63,.27);
    glVertex2f(.5,.25);
    glVertex2f(.63,.22);
    glVertex2f(.5,.20);
    glVertex2f(.63,.17);
    glVertex2f(.5,.15);
    glVertex2f(.63,.12);
    glVertex2f(.5,.10);
    glVertex2f(.63,.07);
    glVertex2f(.5,.05);
    glVertex2f(.63,.02);
    glVertex2f(.55,.44);
    glVertex2f(.55,.0);
    glVertex2f(.6,.43);
    glVertex2f(.6,.0);

    glVertex2f(.63,.40);   //right block 4-----------------
    glVertex2f(.76,.40);
    glVertex2f(.63,.35);
    glVertex2f(.76,.35);
    glVertex2f(.63,.30);
    glVertex2f(.76,.30);
    glVertex2f(.63,.25);
    glVertex2f(.76,.25);
    glVertex2f(.63,.20);
    glVertex2f(.76,.20);
    glVertex2f(.63,.15);
    glVertex2f(.76,.15);
    glVertex2f(.63,.10);
    glVertex2f(.76,.10);
    glVertex2f(.63,.05);
    glVertex2f(.76,.05);
    glVertex2f(.68,.40);
    glVertex2f(.68,.0);
    glVertex2f(.73,.40);
    glVertex2f(.73,.0);
    glEnd();



    glScalef(-1.0f, 1.0f, 0.0f);
    glBegin(GL_LINES);
    glColor3ub(235,235,235);
    glVertex2f(.05,.52);  //left block 1-------------------
    glVertex2f(.05,.5);
    glVertex2f(.05,.52);
    glVertex2f(.22,.52);
    //glVertex2f(.22,.52);
    //glVertex2f(.22,.0);
    glVertex2f(.135,.52);
    glVertex2f(.135,.0);
    glVertex2f(.185,.52);
    glVertex2f(.185,.0);
    glVertex2f(.085,.52);
    glVertex2f(.085,.0);
    glVertex2f(.05,.47);
    glVertex2f(.22,.47);
    glVertex2f(.05,.42);
    glVertex2f(.22,.42);
    glVertex2f(.05,.37);
    glVertex2f(.22,.37);
    glVertex2f(.05,.32);
    glVertex2f(.22,.32);
    glVertex2f(.05,.27);
    glVertex2f(.22,.27);
    glVertex2f(.05,.22);
    glVertex2f(.22,.22);
    glVertex2f(.05,.17);
    glVertex2f(.22,.17);
    glVertex2f(.05,.12);
    glVertex2f(.22,.12);
    glVertex2f(.05,.07);
    glVertex2f(.22,.07);
    glVertex2f(.05,.02);
    glVertex2f(.22,.02);

    glVertex2f(.22,.45);  //left block 2----------------
    glVertex2f(.35,.48);
    glVertex2f(.35,.48);
    glVertex2f(.48,.45);
    glVertex2f(48,.45);
    glVertex2f(.48,0);
    glVertex2f(.22,.4);
    glVertex2f(.35,.43);
    glVertex2f(.22,.35);
    glVertex2f(.35,.38);
    glVertex2f(.22,.3);
    glVertex2f(.35,.33);
    glVertex2f(.22,.25);
    glVertex2f(.35,.28);
    glVertex2f(.22,.2);
    glVertex2f(.35,.23);
    glVertex2f(.22,.15);
    glVertex2f(.35,.18);
    glVertex2f(.22,.1);
    glVertex2f(.35,.13);
    glVertex2f(.22,.05);
    glVertex2f(.35,.08);
    glVertex2f(.22,.0);
    glVertex2f(.35,.03);
    glVertex2f(.48,.4);
    glVertex2f(.35,.43);
    glVertex2f(.48,.35);
    glVertex2f(.35,.38);
    glVertex2f(.48,.3);
    glVertex2f(.35,.33);
    glVertex2f(.48,.25);
    glVertex2f(.35,.28);
    glVertex2f(.48,.2);
    glVertex2f(.35,.23);
    glVertex2f(.48,.15);
    glVertex2f(.35,.18);
    glVertex2f(.48,.1);
    glVertex2f(.35,.13);
    glVertex2f(.48,.05);
    glVertex2f(.35,.08);
    glVertex2f(.48,.0);
    glVertex2f(.35,.03);
    glVertex2f(.25,.46);
    glVertex2f(.25,.0);
    glVertex2f(.31,.47);
    glVertex2f(.31,.0);
    glVertex2f(.38,.47);
    glVertex2f(.38,.0);
    glVertex2f(.44,.46);
    glVertex2f(.44,.0);


    glVertex2f(.48,.44);  //left block 3-------------
    glVertex2f(.5,.45);
    glVertex2f(.48,.39);
    glVertex2f(.5,.40);
    glVertex2f(.48,.34);
    glVertex2f(.5,.35);
    glVertex2f(.48,.39);
    glVertex2f(.5,.40);
    glVertex2f(.48,.34);
    glVertex2f(.5,.35);
    glVertex2f(.48,.29);
    glVertex2f(.5,.30);
    glVertex2f(.48,.24);
    glVertex2f(.5,.25);
    glVertex2f(.48,.19);
    glVertex2f(.5,.20);
    glVertex2f(.48,.14);
    glVertex2f(.5,.15);
    glVertex2f(.48,.09);
    glVertex2f(.5,.1);
    glVertex2f(.48,.04);
    glVertex2f(.5,.05);
    glVertex2f(.5,.45);
    glVertex2f(.63,.42);
    glVertex2f(.5,.40);
    glVertex2f(.63,.37);
    glVertex2f(.5,.35);
    glVertex2f(.63,.32);
    glVertex2f(.5,.30);
    glVertex2f(.63,.27);
    glVertex2f(.5,.25);
    glVertex2f(.63,.22);
    glVertex2f(.5,.20);
    glVertex2f(.63,.17);
    glVertex2f(.5,.15);
    glVertex2f(.63,.12);
    glVertex2f(.5,.10);
    glVertex2f(.63,.07);
    glVertex2f(.5,.05);
    glVertex2f(.63,.02);
    glVertex2f(.55,.44);
    glVertex2f(.55,.0);
    glVertex2f(.6,.43);
    glVertex2f(.6,.0);

    glVertex2f(.63,.40);   //left block 4---------------
    glVertex2f(.76,.40);
    glVertex2f(.63,.35);
    glVertex2f(.76,.35);
    glVertex2f(.63,.30);
    glVertex2f(.76,.30);
    glVertex2f(.63,.25);
    glVertex2f(.76,.25);
    glVertex2f(.63,.20);
    glVertex2f(.76,.20);
    glVertex2f(.63,.15);
    glVertex2f(.76,.15);
    glVertex2f(.63,.10);
    glVertex2f(.76,.10);
    glVertex2f(.63,.05);
    glVertex2f(.76,.05);
    glVertex2f(.68,.40);
    glVertex2f(.68,.0);
    glVertex2f(.73,.40);
    glVertex2f(.73,.0);
    glEnd();
    glLoadIdentity();


    //STRUCTURE CIRCLES & TRIANGLES=======================================================================================

    int i;  // right circle

    GLfloat x=.29f; GLfloat y=.116f; GLfloat radius =.05f;
    int triangleAmount = 200;


    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(145,145,145);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(
        x + (radius * cos(i *  twicePi / triangleAmount)),
        y + (radius * sin(i * twicePi / triangleAmount))
            );
    }
    glEnd();


    glBegin(GL_TRIANGLES); // right triangle 1------------
    glColor3ub(145,145,145);
    glVertex2f(.36,.127);
    glVertex2f(.38,.38);
    glVertex2f(.41,.113);
    glEnd();

    glBegin(GL_QUADS);  // right square 1------------------
    glColor3ub(145,145,145);
    glVertex2f(.36,.079);
    glVertex2f(.41,.067);
    glVertex2f(.41,0);
    glVertex2f(.36,0);
    glEnd();

    //glTranslatef(.22,0,0);
    glBegin(GL_TRIANGLES); // right triangle 2-------------
    glColor3ub(145,145,145);
    glVertex2f(.58,.13);
    glVertex2f(.6,.33);
    glVertex2f(.62,.12);
    glEnd();

    glBegin(GL_QUADS);  // right square 2-------------------
    glColor3ub(145,145,145);
    glVertex2f(.58,.083);
    glVertex2f(.62,.074);
    glVertex2f(.62,0);
    glVertex2f(.58,0);
    glEnd();

    glBegin(GL_QUADS);  // right triangle 3-------------------
    glColor3ub(145,145,145);
    glVertex2f(.63,.049);
    glVertex2f(.68,.248);
    glVertex2f(.73,.049);
    glVertex2f(.63,.049);
    glEnd();



    glBegin(GL_QUADS);  // center square
    glColor3ub(145,145,145);
    glVertex2f(-.05,.1);
    glVertex2f(.05,.1);
    glVertex2f(.05,0);
    glVertex2f(-.05,0);
    glEnd();




    glScalef(-1.0f, 1.0f, 0.0f);
    //int i;  // left circle

    //GLfloat x=.29f; GLfloat y=.116f; GLfloat radius =.05f;
    //int triangleAmount = 200;


    //GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(145,145,145);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(
        x + (radius * cos(i *  twicePi / triangleAmount)),
        y + (radius * sin(i * twicePi / triangleAmount))
            );
    }
    glEnd();


    glBegin(GL_TRIANGLES); // left triangle 1------------
    glColor3ub(145,145,145);
    glVertex2f(.36,.127);
    glVertex2f(.38,.38);
    glVertex2f(.41,.113);
    glEnd();

    glBegin(GL_QUADS);  // left square 1------------------
    glColor3ub(145,145,145);
    glVertex2f(.36,.079);
    glVertex2f(.41,.067);
    glVertex2f(.41,0);
    glVertex2f(.36,0);
    glEnd();

    //glTranslatef(.22,0,0);
    glBegin(GL_TRIANGLES); // left triangle 2-------------
    glColor3ub(145,145,145);
    glVertex2f(.58,.13);
    glVertex2f(.6,.33);
    glVertex2f(.62,.12);
    glEnd();

    glBegin(GL_QUADS);  // left square 2-------------------
    glColor3ub(145,145,145);
    glVertex2f(.58,.083);
    glVertex2f(.62,.074);
    glVertex2f(.62,0);
    glVertex2f(.58,0);
    glEnd();

    glBegin(GL_QUADS);  // left triangle 3-------------------
    glColor3ub(145,145,145);
    glVertex2f(.63,.049);
    glVertex2f(.68,.248);
    glVertex2f(.73,.049);
    glVertex2f(.63,.049);
    glEnd();
    glLoadIdentity();


    //STAIRS==========================================================================================
    glBegin(GL_QUADS);  //stairs ------------------
    glColor3ub(254, 171, 171);
    glVertex2f(-1,0);
    glVertex2f(1,0);
    glVertex2f(1,-.05);
    glVertex2f(-1,-.05);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(254, 151, 151);
    glVertex2f(-1,-.05);
    glVertex2f(1,-.05);
    glVertex2f(1,-.1);
    glVertex2f(-1,-.1);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(244, 141, 141);
    glVertex2f(-1,-.1);
    glVertex2f(1,-.1);
    glVertex2f(1,-.15);
    glVertex2f(-1,-.15);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(234, 131, 131);
    glVertex2f(-1,-.15);
    glVertex2f(1,-.15);
    glVertex2f(1,-.2);
    glVertex2f(-1,-.2);
    glEnd();

    /*glBegin(GL_QUADS);  //stair right white lines-----------------
    glColor3ub(235, 235, 235);
    glVertex2f(.345,0);
    glVertex2f(.35,0);
    glVertex2f(.48,-.2);
    glVertex2f(.475,-.2);
    glEnd();

    glBegin(GL_QUADS);  //stair left white lines-----------------
    glColor3ub(255, 220, 220);
    glVertex2f(-.345,0);
    glVertex2f(-.35,0);
    glVertex2f(-.48,-.2);
    glVertex2f(-.475,-.2);
    glEnd();*/


    //GRASS==========================================================================================
    glBegin(GL_QUADS);
    glColor3ub(0, 240, 162);
    glVertex2f(-1,-.2);
    glVertex2f(1,-.2);
    glVertex2f(1,-.3);
    glVertex2f(-1,-.3);
    glEnd();


    //FOOTPATH==========================================================================================
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(-1,-.3);
    glVertex2f(1,-.3);
    glVertex2f(1,-.45);
    glVertex2f(-1,-.45);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(170,170,170);
    glVertex2f(-1,-.45);
    glVertex2f(1,-.45);
    glVertex2f(1,-.47);
    glVertex2f(-1,-.47);
    glEnd();


    //Passerby==========================================================================================
    glPushMatrix();
    glTranslatef(crowdPosition12,0.0f, 0.0f);
    glBegin(GL_QUADS);   // people 1
    glColor3ub(255, 102, 102);
    glVertex2f(-.81,-.26);
    glVertex2f(-.79,-.26);
    glVertex2f(-.79,-.32);
    glVertex2f(-.81,-.32);
    glEnd();

    glBegin(GL_POLYGON);  //legs
    glColor3ub(255, 255, 255);
    glVertex2f(-.81,-.32);
    glVertex2f(-.79,-.32);
    glVertex2f(-.778,-.39);
    glVertex2f(-.786,-.39);
    glVertex2f(-.795,-.32);
    glVertex2f(-.805,-.39);
    glVertex2f(-.815,-.39);
    glEnd();

    glBegin(GL_QUADS);   //hand
    glColor3ub(255, 255, 204);
    glVertex2f(-.8,-.28);
    glVertex2f(-.792,-.28);
    glVertex2f(-.78,-.32);
    glVertex2f(-.788,-.32);
    glEnd();

    glBegin(GL_QUADS);  // left shoe
    glColor3ub(90, 101, 101);
    glVertex2f(-.815,-.39);
    glVertex2f(-.805,-.39);
    glVertex2f(-.8,-.4);
    glVertex2f(-.815,-.4);
    glEnd();

    glBegin(GL_QUADS); //right shoe
    glColor3ub(90, 101, 101);
    glVertex2f(-.786,-.39);
    glVertex2f(-.778,-.39);
    glVertex2f(-.773,-.4);
    glVertex2f(-.786,-.4);
    glEnd();



     int p; //head

    GLfloat px=-.8f; GLfloat py=-.251f; GLfloat radiusp =.011f;
    //int triangleAmount = 200;


    //GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(90, 101, 101);
    glVertex2f(px, py);
    for(p = 0; p <= triangleAmount;p++)
    {
        glVertex2f(
        px + (radiusp * cos(p *  twicePi / triangleAmount)),
        py + (radiusp * sin(p * twicePi / triangleAmount))
            );
    }
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(crowdPosition2,0.0f, 0.0f);
    glTranslatef(.2,0.0f, 0.0f);
    glBegin(GL_QUADS);   // people 2
    glColor3ub(194, 194, 163);
    glVertex2f(-.81,-.26);
    glVertex2f(-.79,-.26);
    glVertex2f(-.79,-.32);
    glVertex2f(-.81,-.32);
    glEnd();

    glBegin(GL_POLYGON);  //legs
    glColor3ub(142, 92, 255);
    glVertex2f(-.81,-.32);
    glVertex2f(-.79,-.32);
    glVertex2f(-.778,-.39);
    glVertex2f(-.786,-.39);
    glVertex2f(-.795,-.32);
    glVertex2f(-.805,-.39);
    glVertex2f(-.815,-.39);
    glEnd();

    glBegin(GL_QUADS);   //hand
    glColor3ub(255, 255, 204);
    glVertex2f(-.8,-.28);
    glVertex2f(-.792,-.28);
    glVertex2f(-.78,-.32);
    glVertex2f(-.788,-.32);
    glEnd();

    glBegin(GL_QUADS);  // left shoe
    glColor3ub(90, 101, 101);
    glVertex2f(-.815,-.39);
    glVertex2f(-.805,-.39);
    glVertex2f(-.8,-.4);
    glVertex2f(-.815,-.4);
    glEnd();

    glBegin(GL_QUADS); //right shoe
    glColor3ub(90, 101, 101);
    glVertex2f(-.786,-.39);
    glVertex2f(-.778,-.39);
    glVertex2f(-.773,-.4);
    glVertex2f(-.786,-.4);
    glEnd();



     //int p; //head

    //GLfloat px=-.8f; GLfloat py=-.251f; GLfloat radiusp =.011f;
    //int triangleAmount = 200;


    //GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(90, 101, 101);
    glVertex2f(px, py);
    for(p = 0; p <= triangleAmount;p++)
    {
        glVertex2f(
        px + (radiusp * cos(p *  twicePi / triangleAmount)),
        py + (radiusp * sin(p * twicePi / triangleAmount))
            );
    }
    glEnd();
    glPopMatrix();
    glLoadIdentity();


    glPushMatrix();
    glTranslatef(crowdPosition3,0.0f, 0.0f);
    glTranslatef(.4,0.0f, 0.0f);
    glBegin(GL_QUADS);   // people 3
    glColor3ub(255, 130, 170);
    glVertex2f(-.81,-.26);
    glVertex2f(-.79,-.26);
    glVertex2f(-.79,-.32);
    glVertex2f(-.81,-.32);
    glEnd();

    glBegin(GL_POLYGON);  //legs
    glColor3ub(236, 255, 179);
    glVertex2f(-.81,-.32);
    glVertex2f(-.79,-.32);
    glVertex2f(-.778,-.39);
    glVertex2f(-.786,-.39);
    glVertex2f(-.795,-.32);
    glVertex2f(-.805,-.39);
    glVertex2f(-.815,-.39);
    glEnd();

    glBegin(GL_QUADS);   //hand
    glColor3ub(255, 255, 204);
    glVertex2f(-.8,-.28);
    glVertex2f(-.792,-.28);
    glVertex2f(-.78,-.32);
    glVertex2f(-.788,-.32);
    glEnd();

    glBegin(GL_QUADS);  // left shoe
    glColor3ub(90, 101, 101);
    glVertex2f(-.815,-.39);
    glVertex2f(-.805,-.39);
    glVertex2f(-.8,-.4);
    glVertex2f(-.815,-.4);
    glEnd();

    glBegin(GL_QUADS); //right shoe
    glColor3ub(90, 101, 101);
    glVertex2f(-.786,-.39);
    glVertex2f(-.778,-.39);
    glVertex2f(-.773,-.4);
    glVertex2f(-.786,-.4);
    glEnd();



     //int p; //head

    //GLfloat px=-.8f; GLfloat py=-.251f; GLfloat radiusp =.011f;
    //int triangleAmount = 200;


    //GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(90, 101, 101);
    glVertex2f(px, py);
    for(p = 0; p <= triangleAmount;p++)
    {
        glVertex2f(
        px + (radiusp * cos(p *  twicePi / triangleAmount)),
        py + (radiusp * sin(p * twicePi / triangleAmount))
            );
    }
    glEnd();
    glPopMatrix();
    glLoadIdentity();


    glPushMatrix();
    glTranslatef(crowdPosition4,0.0f, 0.0f);
    glTranslatef(.6,0.0f, 0.0f);
    glBegin(GL_QUADS);   // people 4
    glColor3ub(204, 153, 255);
    glVertex2f(-.81,-.26);
    glVertex2f(-.79,-.26);
    glVertex2f(-.79,-.32);
    glVertex2f(-.81,-.32);
    glEnd();

    glBegin(GL_POLYGON);  //legs
    glColor3ub(204, 255, 255);
    glVertex2f(-.81,-.32);
    glVertex2f(-.79,-.32);
    glVertex2f(-.778,-.39);
    glVertex2f(-.786,-.39);
    glVertex2f(-.795,-.32);
    glVertex2f(-.805,-.39);
    glVertex2f(-.815,-.39);
    glEnd();

    glBegin(GL_QUADS);   //hand
    glColor3ub(255, 255, 204);
    glVertex2f(-.8,-.28);
    glVertex2f(-.792,-.28);
    glVertex2f(-.78,-.32);
    glVertex2f(-.788,-.32);
    glEnd();

    glBegin(GL_QUADS);  // left shoe
    glColor3ub(90, 101, 101);
    glVertex2f(-.815,-.39);
    glVertex2f(-.805,-.39);
    glVertex2f(-.8,-.4);
    glVertex2f(-.815,-.4);
    glEnd();

    glBegin(GL_QUADS); //right shoe
    glColor3ub(90, 101, 101);
    glVertex2f(-.786,-.39);
    glVertex2f(-.778,-.39);
    glVertex2f(-.773,-.4);
    glVertex2f(-.786,-.4);
    glEnd();



     //int p; //head

    //GLfloat px=-.8f; GLfloat py=-.251f; GLfloat radiusp =.011f;
    //int triangleAmount = 200;


    //GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(90, 101, 101);
    glVertex2f(px, py);
    for(p = 0; p <= triangleAmount;p++)
    {
        glVertex2f(
        px + (radiusp * cos(p *  twicePi / triangleAmount)),
        py + (radiusp * sin(p * twicePi / triangleAmount))
            );
    }
    glEnd();
    glPopMatrix();
    glLoadIdentity();


    glPushMatrix();
    glTranslatef(crowdPosition5,0.0f, 0.0f);
    glTranslatef(.8,0.0f, 0.0f);
    glBegin(GL_QUADS);   // people 5
    glColor3ub(255, 255, 255);
    glVertex2f(-.81,-.26);
    glVertex2f(-.79,-.26);
    glVertex2f(-.79,-.32);
    glVertex2f(-.81,-.32);
    glEnd();

    glBegin(GL_POLYGON);  //legs
    glColor3ub(194, 194, 163);
    glVertex2f(-.81,-.32);
    glVertex2f(-.79,-.32);
    glVertex2f(-.778,-.39);
    glVertex2f(-.786,-.39);
    glVertex2f(-.795,-.32);
    glVertex2f(-.805,-.39);
    glVertex2f(-.815,-.39);
    glEnd();

    glBegin(GL_QUADS);   //hand
    glColor3ub(255, 255, 204);
    glVertex2f(-.8,-.28);
    glVertex2f(-.792,-.28);
    glVertex2f(-.78,-.32);
    glVertex2f(-.788,-.32);
    glEnd();

    glBegin(GL_QUADS);  // left shoe
    glColor3ub(90, 101, 101);
    glVertex2f(-.815,-.39);
    glVertex2f(-.805,-.39);
    glVertex2f(-.8,-.4);
    glVertex2f(-.815,-.4);
    glEnd();

    glBegin(GL_QUADS); //right shoe
    glColor3ub(90, 101, 101);
    glVertex2f(-.786,-.39);
    glVertex2f(-.778,-.39);
    glVertex2f(-.773,-.4);
    glVertex2f(-.786,-.4);
    glEnd();



     //int p; //head

    //GLfloat px=-.8f; GLfloat py=-.251f; GLfloat radiusp =.011f;
    //int triangleAmount = 200;


    //GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(90, 101, 101);
    glVertex2f(px, py);
    for(p = 0; p <= triangleAmount;p++)
    {
        glVertex2f(
        px + (radiusp * cos(p *  twicePi / triangleAmount)),
        py + (radiusp * sin(p * twicePi / triangleAmount))
            );
    }
    glEnd();
    glPopMatrix();
    glLoadIdentity();


    glPushMatrix();
    glTranslatef(crowdPosition6,0.0f, 0.0f);
    glTranslatef(1,0.0f, 0.0f);
    glBegin(GL_QUADS);   // people 6
    glColor3ub(255, 214, 51);
    glVertex2f(-.81,-.26);
    glVertex2f(-.79,-.26);
    glVertex2f(-.79,-.32);
    glVertex2f(-.81,-.32);
    glEnd();

    glBegin(GL_POLYGON);  //legs
    glColor3ub(142, 92, 255);
    glVertex2f(-.81,-.32);
    glVertex2f(-.79,-.32);
    glVertex2f(-.778,-.39);
    glVertex2f(-.786,-.39);
    glVertex2f(-.795,-.32);
    glVertex2f(-.805,-.39);
    glVertex2f(-.815,-.39);
    glEnd();

    glBegin(GL_QUADS);   //hand
    glColor3ub(255, 255, 204);
    glVertex2f(-.8,-.28);
    glVertex2f(-.792,-.28);
    glVertex2f(-.78,-.32);
    glVertex2f(-.788,-.32);
    glEnd();

    glBegin(GL_QUADS);  // left shoe
    glColor3ub(90, 101, 101);
    glVertex2f(-.815,-.39);
    glVertex2f(-.805,-.39);
    glVertex2f(-.8,-.4);
    glVertex2f(-.815,-.4);
    glEnd();

    glBegin(GL_QUADS); //right shoe
    glColor3ub(90, 101, 101);
    glVertex2f(-.786,-.39);
    glVertex2f(-.778,-.39);
    glVertex2f(-.773,-.4);
    glVertex2f(-.786,-.4);
    glEnd();



     //int p; //head

    //GLfloat px=-.8f; GLfloat py=-.251f; GLfloat radiusp =.011f;
    //int triangleAmount = 200;


    //GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(90, 101, 101);
    glVertex2f(px, py);
    for(p = 0; p <= triangleAmount;p++)
    {
        glVertex2f(
        px + (radiusp * cos(p *  twicePi / triangleAmount)),
        py + (radiusp * sin(p * twicePi / triangleAmount))
            );
    }
    glEnd();
    glPopMatrix();
    glLoadIdentity();


    glPushMatrix();
    glTranslatef(crowdPosition7,0.0f, 0.0f);
    glTranslatef(1.2,0.0f, 0.0f);
    glBegin(GL_QUADS);   // people 7
    glColor3ub(255, 153, 255);
    glVertex2f(-.81,-.26);
    glVertex2f(-.79,-.26);
    glVertex2f(-.79,-.32);
    glVertex2f(-.81,-.32);
    glEnd();

    glBegin(GL_POLYGON);  //legs
    glColor3ub(255, 153, 153);
    glVertex2f(-.81,-.32);
    glVertex2f(-.79,-.32);
    glVertex2f(-.778,-.39);
    glVertex2f(-.786,-.39);
    glVertex2f(-.795,-.32);
    glVertex2f(-.805,-.39);
    glVertex2f(-.815,-.39);
    glEnd();

    glBegin(GL_QUADS);   //hand
    glColor3ub(255, 255, 204);
    glVertex2f(-.8,-.28);
    glVertex2f(-.792,-.28);
    glVertex2f(-.78,-.32);
    glVertex2f(-.788,-.32);
    glEnd();

    glBegin(GL_QUADS);  // left shoe
    glColor3ub(90, 101, 101);
    glVertex2f(-.815,-.39);
    glVertex2f(-.805,-.39);
    glVertex2f(-.8,-.4);
    glVertex2f(-.815,-.4);
    glEnd();

    glBegin(GL_QUADS); //right shoe
    glColor3ub(90, 101, 101);
    glVertex2f(-.786,-.39);
    glVertex2f(-.778,-.39);
    glVertex2f(-.773,-.4);
    glVertex2f(-.786,-.4);
    glEnd();



     //int p; //head

    //GLfloat px=-.8f; GLfloat py=-.251f; GLfloat radiusp =.011f;
    //int triangleAmount = 200;


    //GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(90, 101, 101);
    glVertex2f(px, py);
    for(p = 0; p <= triangleAmount;p++)
    {
        glVertex2f(
        px + (radiusp * cos(p *  twicePi / triangleAmount)),
        py + (radiusp * sin(p * twicePi / triangleAmount))
            );
    }
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(crowdPosition8,0.0f, 0.0f);
    glTranslatef(1.4,0.0f, 0.0f);
    glBegin(GL_QUADS);   // people 8
    glColor3ub(204, 255, 255);
    glVertex2f(-.81,-.26);
    glVertex2f(-.79,-.26);
    glVertex2f(-.79,-.32);
    glVertex2f(-.81,-.32);
    glEnd();

    glBegin(GL_POLYGON);  //legs
    glColor3ub(255, 255, 255);
    glVertex2f(-.81,-.32);
    glVertex2f(-.79,-.32);
    glVertex2f(-.778,-.39);
    glVertex2f(-.786,-.39);
    glVertex2f(-.795,-.32);
    glVertex2f(-.805,-.39);
    glVertex2f(-.815,-.39);
    glEnd();

    glBegin(GL_QUADS);   //hand
    glColor3ub(255, 255, 204);
    glVertex2f(-.8,-.28);
    glVertex2f(-.792,-.28);
    glVertex2f(-.78,-.32);
    glVertex2f(-.788,-.32);
    glEnd();

    glBegin(GL_QUADS);  // left shoe
    glColor3ub(90, 101, 101);
    glVertex2f(-.815,-.39);
    glVertex2f(-.805,-.39);
    glVertex2f(-.8,-.4);
    glVertex2f(-.815,-.4);
    glEnd();

    glBegin(GL_QUADS); //right shoe
    glColor3ub(90, 101, 101);
    glVertex2f(-.786,-.39);
    glVertex2f(-.778,-.39);
    glVertex2f(-.773,-.4);
    glVertex2f(-.786,-.4);
    glEnd();



     //int p; //head

    //GLfloat px=-.8f; GLfloat py=-.251f; GLfloat radiusp =.011f;
    //int triangleAmount = 200;


    //GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(90, 101, 101);
    glVertex2f(px, py);
    for(p = 0; p <= triangleAmount;p++)
    {
        glVertex2f(
        px + (radiusp * cos(p *  twicePi / triangleAmount)),
        py + (radiusp * sin(p * twicePi / triangleAmount))
            );
    }
    glEnd();
    glPopMatrix();
    glLoadIdentity();


    glPushMatrix();
    glTranslatef(crowdPosition9,0.0f, 0.0f);
    glTranslatef(1.6,0.0f, 0.0f);
    glBegin(GL_QUADS);   // people 9
    glColor3ub(255, 204, 255);
    glVertex2f(-.81,-.26);
    glVertex2f(-.79,-.26);
    glVertex2f(-.79,-.32);
    glVertex2f(-.81,-.32);
    glEnd();

    glBegin(GL_POLYGON);  //legs
    glColor3ub(142, 92, 255);
    glVertex2f(-.81,-.32);
    glVertex2f(-.79,-.32);
    glVertex2f(-.778,-.39);
    glVertex2f(-.786,-.39);
    glVertex2f(-.795,-.32);
    glVertex2f(-.805,-.39);
    glVertex2f(-.815,-.39);
    glEnd();

    glBegin(GL_QUADS);   //hand
    glColor3ub(255, 255, 204);
    glVertex2f(-.8,-.28);
    glVertex2f(-.792,-.28);
    glVertex2f(-.78,-.32);
    glVertex2f(-.788,-.32);
    glEnd();

    glBegin(GL_QUADS);  // left shoe
    glColor3ub(90, 101, 101);
    glVertex2f(-.815,-.39);
    glVertex2f(-.805,-.39);
    glVertex2f(-.8,-.4);
    glVertex2f(-.815,-.4);
    glEnd();

    glBegin(GL_QUADS); //right shoe
    glColor3ub(90, 101, 101);
    glVertex2f(-.786,-.39);
    glVertex2f(-.778,-.39);
    glVertex2f(-.773,-.4);
    glVertex2f(-.786,-.4);
    glEnd();



     //int p; //head

    //GLfloat px=-.8f; GLfloat py=-.251f; GLfloat radiusp =.011f;
    //int triangleAmount = 200;


    //GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(90, 101, 101);
    glVertex2f(px, py);
    for(p = 0; p <= triangleAmount;p++)
    {
        glVertex2f(
        px + (radiusp * cos(p *  twicePi / triangleAmount)),
        py + (radiusp * sin(p * twicePi / triangleAmount))
            );
    }
    glEnd();
    glPopMatrix();
    glLoadIdentity();


    glPushMatrix();
    glTranslatef(crowdPosition10,0.0f, 0.0f);
    glTranslatef(1.8,0.0f, 0.0f);
    glBegin(GL_QUADS);   // people 10
    glColor3ub(236, 255, 179);
    glVertex2f(-.81,-.26);
    glVertex2f(-.79,-.26);
    glVertex2f(-.79,-.32);
    glVertex2f(-.81,-.32);
    glEnd();

    glBegin(GL_POLYGON);  //legs
    glColor3ub(194, 194, 163);
    glVertex2f(-.81,-.32);
    glVertex2f(-.79,-.32);
    glVertex2f(-.778,-.39);
    glVertex2f(-.786,-.39);
    glVertex2f(-.795,-.32);
    glVertex2f(-.805,-.39);
    glVertex2f(-.815,-.39);
    glEnd();

    glBegin(GL_QUADS);   //hand
    glColor3ub(255, 255, 204);
    glVertex2f(-.8,-.28);
    glVertex2f(-.792,-.28);
    glVertex2f(-.78,-.32);
    glVertex2f(-.788,-.32);
    glEnd();

    glBegin(GL_QUADS);  // left shoe
    glColor3ub(90, 101, 101);
    glVertex2f(-.815,-.39);
    glVertex2f(-.805,-.39);
    glVertex2f(-.8,-.4);
    glVertex2f(-.815,-.4);
    glEnd();

    glBegin(GL_QUADS); //right shoe
    glColor3ub(90, 101, 101);
    glVertex2f(-.786,-.39);
    glVertex2f(-.778,-.39);
    glVertex2f(-.773,-.4);
    glVertex2f(-.786,-.4);
    glEnd();



     //int p; //head

    //GLfloat px=-.8f; GLfloat py=-.251f; GLfloat radiusp =.011f;
    //int triangleAmount = 200;


    //GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(90, 101, 101);
    glVertex2f(px, py);
    for(p = 0; p <= triangleAmount;p++)
    {
        glVertex2f(
        px + (radiusp * cos(p *  twicePi / triangleAmount)),
        py + (radiusp * sin(p * twicePi / triangleAmount))
            );
    }
    glEnd();
    glPopMatrix();
    glLoadIdentity();


    //LAMPPOST==========================================================================================

    glBegin(GL_QUADS); //stand  //center----------------------
    glColor3ub(100,100,100);
    glVertex2f(-.005,-.3);
    glVertex2f(.005,-.3);
    glVertex2f(.005,-.45);
    glVertex2f(-.005,-.45);
    glEnd();
    glBegin(GL_QUADS);  //stand left
    glColor3ub(100,100,100);
    glVertex2f(-.025,-.24);
    glVertex2f(-.015,-.24);
    glVertex2f(.005,-.3);
    glVertex2f(-.005,-.3);
    glEnd();
    glBegin(GL_QUADS);  //stand right
    glColor3ub(100,100,100);
    glVertex2f(.025,-.24);
    glVertex2f(.015,-.24);
    glVertex2f(-.005,-.3);
    glVertex2f(.005,-.3);
    glEnd();

    int l;  // left light

    GLfloat la=-.032f; GLfloat lb=-.23f; GLfloat radiusl =.003f;
    int triangleAmountl = 30;


    GLfloat twicePil = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(240,240,240);
    glVertex2f(la, lb);
    for(l = 0; l <= triangleAmount2;l++)
    {
        glVertex2f(
        la + (radius2 * cos(l *  twicePil / triangleAmountl)),
        lb + (radius2 * sin(l * twicePil / triangleAmountl))
            );
    }
    glEnd();


    //int l;  // right light

    GLfloat la2=.032f; //GLfloat lb2=-.23f; GLfloat radiusl =.003f;
    //int triangleAmountl = 30;


    //GLfloat twicePil = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(240,240,240);
    glVertex2f(la2, lb);
    for(l = 0; l <= triangleAmount2;l++)
    {
        glVertex2f(
        la2 + (radius2 * cos(l *  twicePil / triangleAmountl)),
        lb + (radius2 * sin(l * twicePil / triangleAmountl))
            );
    }
    glEnd();

    glTranslatef(.5,0,0);
    glBegin(GL_QUADS); //stand  //right----------------------
    glColor3ub(100,100,100);
    glVertex2f(-.005,-.3);
    glVertex2f(.005,-.3);
    glVertex2f(.005,-.45);
    glVertex2f(-.005,-.45);
    glEnd();
    glBegin(GL_QUADS);  //stand left
    glColor3ub(100,100,100);
    glVertex2f(-.025,-.24);
    glVertex2f(-.015,-.24);
    glVertex2f(.005,-.3);
    glVertex2f(-.005,-.3);
    glEnd();
    glBegin(GL_QUADS);  //stand right
    glColor3ub(100,100,100);
    glVertex2f(.025,-.24);
    glVertex2f(.015,-.24);
    glVertex2f(-.005,-.3);
    glVertex2f(.005,-.3);
    glEnd();

    //int l;  // left light

    //GLfloat la=-.032f; GLfloat lb=-.23f; GLfloat radiusl =.003f;
    //int triangleAmountl = 30;


    //GLfloat twicePil = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(240,240,240);
    glVertex2f(la, lb);
    for(l = 0; l <= triangleAmount2;l++)
    {
        glVertex2f(
        la + (radius2 * cos(l *  twicePil / triangleAmountl)),
        lb + (radius2 * sin(l * twicePil / triangleAmountl))
            );
    }
    glEnd();


    //int l;  // right light

    //GLfloat la2=.032f; //GLfloat lb2=-.23f; GLfloat radiusl =.003f;
    //int triangleAmountl = 30;


    //GLfloat twicePil = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(240,240,240);
    glVertex2f(la2, lb);
    for(l = 0; l <= triangleAmount2;l++)
    {
        glVertex2f(
        la2 + (radius2 * cos(l *  twicePil / triangleAmountl)),
        lb + (radius2 * sin(l * twicePil / triangleAmountl))
            );
    }
    glEnd();
    glLoadIdentity();


    glTranslatef(-.5,0,0);
    glBegin(GL_QUADS); //stand  //left----------------------
    glColor3ub(100,100,100);
    glVertex2f(-.005,-.3);
    glVertex2f(.005,-.3);
    glVertex2f(.005,-.45);
    glVertex2f(-.005,-.45);
    glEnd();
    glBegin(GL_QUADS);  //stand left
    glColor3ub(100,100,100);
    glVertex2f(-.025,-.24);
    glVertex2f(-.015,-.24);
    glVertex2f(.005,-.3);
    glVertex2f(-.005,-.3);
    glEnd();
    glBegin(GL_QUADS);  //stand right
    glColor3ub(100,100,100);
    glVertex2f(.025,-.24);
    glVertex2f(.015,-.24);
    glVertex2f(-.005,-.3);
    glVertex2f(.005,-.3);
    glEnd();

//    int l;  // left light

//    GLfloat la=-.032f; GLfloat lb=-.23f; GLfloat radiusl =.003f;
//    int triangleAmountl = 30;


//    GLfloat twicePil = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(240,240,240);
    glVertex2f(la, lb);
    for(l = 0; l <= triangleAmount2;l++)
    {
        glVertex2f(
        la + (radius2 * cos(l *  twicePil / triangleAmountl)),
        lb + (radius2 * sin(l * twicePil / triangleAmountl))
            );
    }
    glEnd();


    //int l;  // right light

//    GLfloat la2=.032f; //GLfloat lb2=-.23f; GLfloat radiusl =.003f;
    //int triangleAmountl = 30;


    //GLfloat twicePil = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(240,240,240);
    glVertex2f(la2, lb);
    for(l = 0; l <= triangleAmount2;l++)
    {
        glVertex2f(
        la2 + (radius2 * cos(l *  twicePil / triangleAmountl)),
        lb + (radius2 * sin(l * twicePil / triangleAmountl))
            );
    }
    glEnd();

    glLoadIdentity();



    //ROAD==========================================================================================
    glBegin(GL_QUADS);
    glColor3ub(140,140,140);
    glVertex2f(-1,-.47);
    glVertex2f(1,-.47);
    glVertex2f(1,-1);
    glVertex2f(-1,-1);
    glEnd();

    glBegin(GL_QUADS); //road divider---------------
    glColor3ub(230,230,230);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glLoadIdentity();




    //CAR=====================================================================================================

    glPushMatrix();
    glTranslatef(carPosition1,0.0f, 0.0f);
    glBegin(GL_QUADS);  //Car 1-----------------
    glColor3ub(0, 204, 255);
    glVertex2f(.36,-.62);
    glVertex2f(.84,-.62);
    glVertex2f(.85,-.75);
    glVertex2f(.35,-.75);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 204, 255);
    glVertex2f(.5,-.52);
    glVertex2f(.7,-.52);
    glVertex2f(.75,-.62);
    glVertex2f(.45,-.62);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 115, 153);
    glVertex2f(.51,-.54);
    glVertex2f(.69,-.54);
    glVertex2f(.73,-.62);
    glVertex2f(.47,-.62);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 204, 255);
    glVertex2f(.59,-.54);
    glVertex2f(.61,-.54);
    glVertex2f(.61,-.62);
    glVertex2f(.59,-.62);
    glEnd();



    //int i;  // left wheel

    GLfloat carx=.46f; GLfloat cary=-.75f; GLfloat carradius =.052f;
    //int triangleAmount = 200;
    //GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(85,85,85);
    glVertex2f(carx, cary);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(
        carx + (carradius * cos(i *  twicePi / triangleAmount)),
        cary + (carradius * sin(i * twicePi / triangleAmount))
            );
    }
    glEnd();

    //int i;  // left wheel small

    //GLfloat carx=.46f; GLfloat cary=-.75f;
     GLfloat carradius2 =.022f;
    //int triangleAmount = 200;
    //GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(195,195,195);
    glVertex2f(carx, cary);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(
        carx + (carradius2 * cos(i *  twicePi / triangleAmount)),
        cary + (carradius2 * sin(i * twicePi / triangleAmount))
            );
    }
    glEnd();

    //int i;  // right wheel

    GLfloat carx2=.74f; GLfloat cary2=-.75f; //GLfloat carradius =.052f;
    //int triangleAmount = 200;
    //GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(85,85,85);
    glVertex2f(carx2, cary2);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(
        carx2 + (carradius * cos(i *  twicePi / triangleAmount)),
        cary2 + (carradius * sin(i * twicePi / triangleAmount))
            );
    }
    glEnd();

    //int i;  // right wheel small

    //GLfloat carx2=.74f; GLfloat cary2=-.75f;
    //int triangleAmount = 200;
    //GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(195,195,195);
    glVertex2f(carx2, cary2);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(
        carx2 + (carradius2 * cos(i *  twicePi / triangleAmount)),
        cary2 + (carradius2 * sin(i * twicePi / triangleAmount))
            );
    }
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(carPosition2,0.0f, 0.0f);
    glTranslatef(-1.4,0,0);
    glBegin(GL_QUADS);  //Car 2-----------------
    glColor3ub(255, 102, 102);
    glVertex2f(.36,-.62);
    glVertex2f(.84,-.62);
    glVertex2f(.85,-.75);
    glVertex2f(.35,-.75);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 102, 102);
    glVertex2f(.5,-.52);
    glVertex2f(.7,-.52);
    glVertex2f(.75,-.62);
    glVertex2f(.45,-.62);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(148, 50, 50);
    glVertex2f(.51,-.54);
    glVertex2f(.69,-.54);
    glVertex2f(.73,-.62);
    glVertex2f(.47,-.62);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 102, 102);
    glVertex2f(.59,-.54);
    glVertex2f(.61,-.54);
    glVertex2f(.61,-.62);
    glVertex2f(.59,-.62);
    glEnd();



    //int i;  // left wheel

//    GLfloat carx=.46f; GLfloat cary=-.75f; GLfloat carradius =.052f;
    //int triangleAmount = 200;
    //GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(85,85,85);
    glVertex2f(carx, cary);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(
        carx + (carradius * cos(i *  twicePi / triangleAmount)),
        cary + (carradius * sin(i * twicePi / triangleAmount))
            );
    }
    glEnd();

    //int i;  // left wheel small

    //GLfloat carx=.46f; GLfloat cary=-.75f;
//     GLfloat carradius2 =.022f;
    //int triangleAmount = 200;
    //GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(195,195,195);
    glVertex2f(carx, cary);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(
        carx + (carradius2 * cos(i *  twicePi / triangleAmount)),
        cary + (carradius2 * sin(i * twicePi / triangleAmount))
            );
    }
    glEnd();

    //int i;  // right wheel

//    GLfloat carx2=.74f; GLfloat cary2=-.75f; //GLfloat carradius =.052f;
    //int triangleAmount = 200;
    //GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(85,85,85);
    glVertex2f(carx2, cary2);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(
        carx2 + (carradius * cos(i *  twicePi / triangleAmount)),
        cary2 + (carradius * sin(i * twicePi / triangleAmount))
            );
    }
    glEnd();

    //int i;  // right wheel small

    //GLfloat carx2=.74f; GLfloat cary2=-.75f;
    //int triangleAmount = 200;
    //GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(195,195,195);
    glVertex2f(carx2, cary2);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(
        carx2 + (carradius2 * cos(i *  twicePi / triangleAmount)),
        cary2 + (carradius2 * sin(i * twicePi / triangleAmount))
            );
    }
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    glutTimerFunc(10000,night,0);

    glFlush();
}


void noon(int b)
{
    glutDisplayFunc(noonView);
    soundNoon();
}


void morningView()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    //SKY================================================================================================
    glBegin(GL_QUADS);  //
    glColor3ub(230, 242, 255);
    glVertex2f(-1,1);
    glVertex2f(1,1);
    glVertex2f(1,0);
    glVertex2f(-1,0);
    glEnd();

    glPushMatrix();
    glTranslatef(sunPosition8,0.0f, 0.0f);
    int s;  // sun-----------------------

    GLfloat sx=-.8f; GLfloat sy=.8f; GLfloat radiuss =.05f;
    int triangleAmounts = 200;


    GLfloat twicePis = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 230);
    glVertex2f(sx, sy);
    for(s = 0; s <= triangleAmounts;s++)
    {
        glVertex2f(
        sx + (radiuss * cos(s *  twicePis / triangleAmounts)),
        sy + (radiuss * sin(s * twicePis / triangleAmounts))
            );
    }
    glEnd();
    glPopMatrix();



    //--------------------------------------------------------- bird
glPushMatrix();
                glTranslatef(birdposition,0.0f, 0.0f);
                glBegin(GL_QUADS);//bird
                glColor3ub(0, 230, 172);
                glVertex2f(-.6,.8);
                glVertex2f(-.62,.76);
                glVertex2f(-.56,.76);
                glVertex2f(-.56,.8);
                glEnd();

                glBegin(GL_TRIANGLES);
                glColor3ub(255, 128, 128);
                glVertex2f(-.56,.8);
                glVertex2f(-.54,.78);
                glVertex2f(-.56,.78);

                glColor3ub(0, 230, 172);
                glVertex2f(-.67,.77);
                glVertex2f(-.62,.76);
                glVertex2f(-.61,.78);
                glEnd();
                glPopMatrix();
                glLoadIdentity();


                glPushMatrix();
                glTranslatef(birdposition1,0.0f, 0.0f);
                glBegin(GL_QUADS);//bird1
                glColor3ub(255, 230, 128);
                glVertex2f(-.68,.9);
                glVertex2f(-.7,.86);
                glVertex2f(-.64,.86);
                glVertex2f(-.64,.9);
                glEnd();

                glBegin(GL_TRIANGLES);
                glColor3ub(100,100,100);
                glVertex2f(-.64,.9);
                glVertex2f(-.62,.88);
                glVertex2f(-.64,.88);

                glColor3ub(255, 230, 128);
                glVertex2f(-.74,.87);
                glVertex2f(-.7,.86);
                glVertex2f(-.68,.88);
                glEnd();
                glPopMatrix();
                glLoadIdentity();

//--------------------------------------------------------------------- flag
 glBegin(GL_QUADS);//flagstick
                glColor3ub(100,100,100);
                glVertex2f(-.97,.0);
                glVertex2f(-.96,.0);
                glVertex2f(-.96,.4);
                glVertex2f(-.97,.4);
                glEnd();

                glBegin(GL_QUADS);//flag
                glColor3ub(121, 210, 166);
                glVertex2f(-.96,.24);
                glVertex2f(-.83,.24);
                glVertex2f(-.83,.38);
                glVertex2f(-.96,.38);
                glEnd();


                int q;  // flag circle-----------------------

    GLfloat sxx=-.9f; GLfloat syy=.31f; GLfloat radiusss =.03f;
    int triangleAmountss = 200;


    GLfloat twicePiss = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 128, 128);
    glVertex2f(sxx, syy);
    for(q = 0; q <= triangleAmountss;q++)
    {
        glVertex2f(
        sxx + (radiusss * cos(q *  twicePiss / triangleAmountss)),
        syy + (radiusss * sin(q * twicePiss / triangleAmountss))
            );
    }
    glEnd();



    //UPPER STRUCTURE==========================================================================================
    glBegin(GL_QUADS);  //upper center block---------
    glColor3ub(215,215,215);
    glVertex2f(-.15,.62);
    glVertex2f(.15,.62);
    glVertex2f(.15,.5);
    glVertex2f(-.15,.5);
    glEnd();

    glBegin(GL_QUADS);  //upper right block 1---------
    glColor3ub(230,230,230);
    glVertex2f(.15,.62);
    glVertex2f(.185,.59);
    glVertex2f(.185,.5);
    glVertex2f(.15,.5);
    glEnd();


    glBegin(GL_QUADS);  //upper right block 2---------
    glColor3ub(220,220,220);
    glVertex2f(.185,.59);
    glVertex2f(.25,.59);
    glVertex2f(.25,.4);
    glVertex2f(.185,.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(.25,.59);
    glVertex2f(.32,.56);
    glVertex2f(.32,.3);
    glVertex2f(.25,.3);
    glEnd();




    glScalef(-1.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);  //upper left block 1---------
    glColor3ub(230,230,230);
    glVertex2f(.15,.62);
    glVertex2f(.185,.59);
    glVertex2f(.185,.5);
    glVertex2f(.15,.5);
    glEnd();

    glBegin(GL_QUADS);  //upper left block 2---------
    glColor3ub(220,220,220);
    glVertex2f(.185,.59);
    glVertex2f(.25,.59);
    glVertex2f(.25,.4);
    glVertex2f(.185,.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(.25,.59);
    glVertex2f(.32,.56);
    glVertex2f(.32,.3);
    glVertex2f(.25,.3);
    glEnd();

    glLoadIdentity();



     //UPPER STRUCTURE LINES==========================================================================
    glBegin(GL_LINES);
    glColor3ub(235,235,235);
    glVertex2f(-.15,.56);
    glVertex2f(.15,.56);
    glVertex2f(.15,.56);
    glVertex2f(.185,.53);
    glVertex2f(.185,.53);
    glVertex2f(.25,.53);
    glVertex2f(.185,.48);
    glVertex2f(.25,.48);
    glVertex2f(.25,.53);
    glVertex2f(.32,.50);
    glEnd();


    glScalef(-1.0f, 1.0f, 0.0f);
    glBegin(GL_LINES);
    glColor3ub(235,235,235);
    glVertex2f(.185,.53);
    glVertex2f(.25,.53);
    glVertex2f(.185,.48);
    glVertex2f(.25,.48);
    glVertex2f(.25,.53);
    glVertex2f(.32,.50);
    glEnd();
    glLoadIdentity();



    //Upper STRUCTURE CIRCLES & TRIANGLES=======================================================================================

    glBegin(GL_QUADS);
    glColor3ub(190,190,190);
    glVertex2f(-.1,.56);
    glVertex2f(.1,.56);
    glVertex2f(.1,.5);
    glVertex2f(-.1,.5);
    glEnd();

    int j;  // upper right circle

    GLfloat a=.285f; GLfloat b=.518f; GLfloat radius2 =.03f;
    int triangleAmount2 = 30;


    GLfloat twicePi2 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(190,190,190);
    glVertex2f(a, b);
    for(j = 0; j <= triangleAmount2;j++)
    {
        glVertex2f(
        a + (radius2 * cos(j *  twicePi2 / triangleAmount2)),
        b + (radius2 * sin(j * twicePi2 / triangleAmount2))
            );
    }
    glEnd();


    //int j;  // upper left circle

    //GLfloat a=-.285f; GLfloat b=-.518f; GLfloat radius2 =.03f;
    //int triangleAmount2 = 30;


    //GLfloat twicePi2 = 2.0f * PI;
    GLfloat e=-.285f;  // upper left circle
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(190,190,190);
    glVertex2f(e, b);
    for(j = 0; j <= triangleAmount2;j++)
    {
        glVertex2f(
        e + (radius2 * cos(j *  twicePi2 / triangleAmount2)),
        b + (radius2 * sin(j * twicePi2 / triangleAmount2))
            );
    }
    glEnd();



    //STRUCTURE ==========================================================================================
    glBegin(GL_QUADS);  //center block---------
    glColor3ub(200,200,200);
    glVertex2f(-.05,.5);
    glVertex2f(.05,.5);
    glVertex2f(.05,0);
    glVertex2f(-.05,0);
    glEnd();

    glBegin(GL_QUADS);  //right block 1--------
    glColor3ub(210,210,210);
    glVertex2f(.05,.52);
    glVertex2f(.22,.52);
    glVertex2f(.22,0);
    glVertex2f(.05,0);
    glEnd();

    glBegin(GL_QUADS);  //right block 2--------
    glColor3ub(200,200,200);
    glVertex2f(.22,.45);
    glVertex2f(.35,.48);
    glVertex2f(.35,0);
    glVertex2f(.22,0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(210,210,210);
    glVertex2f(.35,.48);
    glVertex2f(.48,.45);
    glVertex2f(.48,0);
    glVertex2f(.35,0);
    glEnd();

    glBegin(GL_QUADS);  //right block 3---------
    glColor3ub(192,192,192);
    glVertex2f(.48,.44);
    glVertex2f(.5,.45);
    glVertex2f(.5,0);
    glVertex2f(.48,0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(210,210,210);
    glVertex2f(.5,.45);
    glVertex2f(.63,.42);
    glVertex2f(.63,0);
    glVertex2f(.5,0);
    glEnd();

    glBegin(GL_QUADS);  //right block 4---------
    glColor3ub(200,200,200);
    glVertex2f(.63,.40);
    glVertex2f(.76,.40);
    glVertex2f(.76,.0);
    glVertex2f(.63,.0);
    glEnd();







    glScalef(-1.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);  //left block 1------------
    glColor3ub(210,210,210);
    glVertex2f(.05,.52);
    glVertex2f(.22,.52);
    glVertex2f(.22,0);
    glVertex2f(.05,0);
    glEnd();

    glBegin(GL_QUADS);  //left block 2-----------
    glColor3ub(200,200,200);
    glVertex2f(.22,.45);
    glVertex2f(.35,.48);
    glVertex2f(.35,0);
    glVertex2f(.22,0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(210,210,210);
    glVertex2f(.35,.48);
    glVertex2f(.48,.45);
    glVertex2f(.48,0);
    glVertex2f(.35,0);
    glEnd();

    glBegin(GL_QUADS);  //left block 3----------
    glColor3ub(192,192,192);
    glVertex2f(.48,.44);
    glVertex2f(.5,.45);
    glVertex2f(.5,0);
    glVertex2f(.48,0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(210,210,210);
    glVertex2f(.5,.45);
    glVertex2f(.63,.42);
    glVertex2f(.63,0);
    glVertex2f(.5,0);
    glEnd();

    glBegin(GL_QUADS);  //left block 4---------
    glColor3ub(200,200,200);
    glVertex2f(.63,.40);
    glVertex2f(.76,.40);
    glVertex2f(.76,.0);
    glVertex2f(.63,.0);
    glEnd();
    glLoadIdentity();








    //STRUCTURE LINES==========================================================================
    glBegin(GL_LINES);
    glColor3ub(235,235,235);
    //glVertex2f(-.05,.5);  //center block-----------
    //glVertex2f(-.05,0);
    glVertex2f(-.05,.5);
    glVertex2f(.05,.5);
    //glVertex2f(.05,.5);
    //glVertex2f(.05,0);
    glVertex2f(0,.5);
    glVertex2f(0,0);
    glVertex2f(-.05,.45);
    glVertex2f(.05,.45);
    glVertex2f(-.05,.4);
    glVertex2f(.05,.4);
    glVertex2f(-.05,.35);
    glVertex2f(.05,.35);
    glVertex2f(-.05,.3);
    glVertex2f(.05,.3);
    glVertex2f(-.05,.25);
    glVertex2f(.05,.25);
    glVertex2f(-.05,.2);
    glVertex2f(.05,.2);
    glVertex2f(-.05,.15);
    glVertex2f(.05,.15);
    glVertex2f(-.05,.1);
    glVertex2f(.05,.1);
    glVertex2f(-.05,.05);
    glVertex2f(.05,.05);


    glVertex2f(.05,.52);  //right block 1------------
    glVertex2f(.05,.5);
    glVertex2f(.05,.52);
    glVertex2f(.22,.52);
    //glVertex2f(.22,.52);
    //glVertex2f(.22,.0);
    glVertex2f(.135,.52);
    glVertex2f(.135,.0);
    glVertex2f(.185,.52);
    glVertex2f(.185,.0);
    glVertex2f(.085,.52);
    glVertex2f(.085,.0);
    glVertex2f(.05,.47);
    glVertex2f(.22,.47);
    glVertex2f(.05,.42);
    glVertex2f(.22,.42);
    glVertex2f(.05,.37);
    glVertex2f(.22,.37);
    glVertex2f(.05,.32);
    glVertex2f(.22,.32);
    glVertex2f(.05,.27);
    glVertex2f(.22,.27);
    glVertex2f(.05,.22);
    glVertex2f(.22,.22);
    glVertex2f(.05,.17);
    glVertex2f(.22,.17);
    glVertex2f(.05,.12);
    glVertex2f(.22,.12);
    glVertex2f(.05,.07);
    glVertex2f(.22,.07);
    glVertex2f(.05,.02);
    glVertex2f(.22,.02);

    glVertex2f(.22,.45);  //right block 2------------
    glVertex2f(.35,.48);
    glVertex2f(.35,.48);
    glVertex2f(.48,.45);
    glVertex2f(48,.45);
    glVertex2f(.48,0);
    glVertex2f(.22,.4);
    glVertex2f(.35,.43);
    glVertex2f(.22,.35);
    glVertex2f(.35,.38);
    glVertex2f(.22,.3);
    glVertex2f(.35,.33);
    glVertex2f(.22,.25);
    glVertex2f(.35,.28);
    glVertex2f(.22,.2);
    glVertex2f(.35,.23);
    glVertex2f(.22,.15);
    glVertex2f(.35,.18);
    glVertex2f(.22,.1);
    glVertex2f(.35,.13);
    glVertex2f(.22,.05);
    glVertex2f(.35,.08);
    glVertex2f(.22,.0);
    glVertex2f(.35,.03);
    glVertex2f(.48,.4);
    glVertex2f(.35,.43);
    glVertex2f(.48,.35);
    glVertex2f(.35,.38);
    glVertex2f(.48,.3);
    glVertex2f(.35,.33);
    glVertex2f(.48,.25);
    glVertex2f(.35,.28);
    glVertex2f(.48,.2);
    glVertex2f(.35,.23);
    glVertex2f(.48,.15);
    glVertex2f(.35,.18);
    glVertex2f(.48,.1);
    glVertex2f(.35,.13);
    glVertex2f(.48,.05);
    glVertex2f(.35,.08);
    glVertex2f(.48,.0);
    glVertex2f(.35,.03);
    glVertex2f(.25,.46);
    glVertex2f(.25,.0);
    glVertex2f(.31,.47);
    glVertex2f(.31,.0);
    glVertex2f(.38,.47);
    glVertex2f(.38,.0);
    glVertex2f(.44,.46);
    glVertex2f(.44,.0);


    glVertex2f(.48,.44);  //right block 3---------------------
    glVertex2f(.5,.45);
    glVertex2f(.48,.39);
    glVertex2f(.5,.40);
    glVertex2f(.48,.34);
    glVertex2f(.5,.35);
    glVertex2f(.48,.39);
    glVertex2f(.5,.40);
    glVertex2f(.48,.34);
    glVertex2f(.5,.35);
    glVertex2f(.48,.29);
    glVertex2f(.5,.30);
    glVertex2f(.48,.24);
    glVertex2f(.5,.25);
    glVertex2f(.48,.19);
    glVertex2f(.5,.20);
    glVertex2f(.48,.14);
    glVertex2f(.5,.15);
    glVertex2f(.48,.09);
    glVertex2f(.5,.1);
    glVertex2f(.48,.04);
    glVertex2f(.5,.05);
    glVertex2f(.5,.45);
    glVertex2f(.63,.42);
    glVertex2f(.5,.40);
    glVertex2f(.63,.37);
    glVertex2f(.5,.35);
    glVertex2f(.63,.32);
    glVertex2f(.5,.30);
    glVertex2f(.63,.27);
    glVertex2f(.5,.25);
    glVertex2f(.63,.22);
    glVertex2f(.5,.20);
    glVertex2f(.63,.17);
    glVertex2f(.5,.15);
    glVertex2f(.63,.12);
    glVertex2f(.5,.10);
    glVertex2f(.63,.07);
    glVertex2f(.5,.05);
    glVertex2f(.63,.02);
    glVertex2f(.55,.44);
    glVertex2f(.55,.0);
    glVertex2f(.6,.43);
    glVertex2f(.6,.0);

    glVertex2f(.63,.40);   //right block 4-----------------
    glVertex2f(.76,.40);
    glVertex2f(.63,.35);
    glVertex2f(.76,.35);
    glVertex2f(.63,.30);
    glVertex2f(.76,.30);
    glVertex2f(.63,.25);
    glVertex2f(.76,.25);
    glVertex2f(.63,.20);
    glVertex2f(.76,.20);
    glVertex2f(.63,.15);
    glVertex2f(.76,.15);
    glVertex2f(.63,.10);
    glVertex2f(.76,.10);
    glVertex2f(.63,.05);
    glVertex2f(.76,.05);
    glVertex2f(.68,.40);
    glVertex2f(.68,.0);
    glVertex2f(.73,.40);
    glVertex2f(.73,.0);
    glEnd();



    glScalef(-1.0f, 1.0f, 0.0f);
    glBegin(GL_LINES);
    glColor3ub(235,235,235);
    glVertex2f(.05,.52);  //left block 1-------------------
    glVertex2f(.05,.5);
    glVertex2f(.05,.52);
    glVertex2f(.22,.52);
    //glVertex2f(.22,.52);
    //glVertex2f(.22,.0);
    glVertex2f(.135,.52);
    glVertex2f(.135,.0);
    glVertex2f(.185,.52);
    glVertex2f(.185,.0);
    glVertex2f(.085,.52);
    glVertex2f(.085,.0);
    glVertex2f(.05,.47);
    glVertex2f(.22,.47);
    glVertex2f(.05,.42);
    glVertex2f(.22,.42);
    glVertex2f(.05,.37);
    glVertex2f(.22,.37);
    glVertex2f(.05,.32);
    glVertex2f(.22,.32);
    glVertex2f(.05,.27);
    glVertex2f(.22,.27);
    glVertex2f(.05,.22);
    glVertex2f(.22,.22);
    glVertex2f(.05,.17);
    glVertex2f(.22,.17);
    glVertex2f(.05,.12);
    glVertex2f(.22,.12);
    glVertex2f(.05,.07);
    glVertex2f(.22,.07);
    glVertex2f(.05,.02);
    glVertex2f(.22,.02);

    glVertex2f(.22,.45);  //left block 2----------------
    glVertex2f(.35,.48);
    glVertex2f(.35,.48);
    glVertex2f(.48,.45);
    glVertex2f(48,.45);
    glVertex2f(.48,0);
    glVertex2f(.22,.4);
    glVertex2f(.35,.43);
    glVertex2f(.22,.35);
    glVertex2f(.35,.38);
    glVertex2f(.22,.3);
    glVertex2f(.35,.33);
    glVertex2f(.22,.25);
    glVertex2f(.35,.28);
    glVertex2f(.22,.2);
    glVertex2f(.35,.23);
    glVertex2f(.22,.15);
    glVertex2f(.35,.18);
    glVertex2f(.22,.1);
    glVertex2f(.35,.13);
    glVertex2f(.22,.05);
    glVertex2f(.35,.08);
    glVertex2f(.22,.0);
    glVertex2f(.35,.03);
    glVertex2f(.48,.4);
    glVertex2f(.35,.43);
    glVertex2f(.48,.35);
    glVertex2f(.35,.38);
    glVertex2f(.48,.3);
    glVertex2f(.35,.33);
    glVertex2f(.48,.25);
    glVertex2f(.35,.28);
    glVertex2f(.48,.2);
    glVertex2f(.35,.23);
    glVertex2f(.48,.15);
    glVertex2f(.35,.18);
    glVertex2f(.48,.1);
    glVertex2f(.35,.13);
    glVertex2f(.48,.05);
    glVertex2f(.35,.08);
    glVertex2f(.48,.0);
    glVertex2f(.35,.03);
    glVertex2f(.25,.46);
    glVertex2f(.25,.0);
    glVertex2f(.31,.47);
    glVertex2f(.31,.0);
    glVertex2f(.38,.47);
    glVertex2f(.38,.0);
    glVertex2f(.44,.46);
    glVertex2f(.44,.0);


    glVertex2f(.48,.44);  //left block 3-------------
    glVertex2f(.5,.45);
    glVertex2f(.48,.39);
    glVertex2f(.5,.40);
    glVertex2f(.48,.34);
    glVertex2f(.5,.35);
    glVertex2f(.48,.39);
    glVertex2f(.5,.40);
    glVertex2f(.48,.34);
    glVertex2f(.5,.35);
    glVertex2f(.48,.29);
    glVertex2f(.5,.30);
    glVertex2f(.48,.24);
    glVertex2f(.5,.25);
    glVertex2f(.48,.19);
    glVertex2f(.5,.20);
    glVertex2f(.48,.14);
    glVertex2f(.5,.15);
    glVertex2f(.48,.09);
    glVertex2f(.5,.1);
    glVertex2f(.48,.04);
    glVertex2f(.5,.05);
    glVertex2f(.5,.45);
    glVertex2f(.63,.42);
    glVertex2f(.5,.40);
    glVertex2f(.63,.37);
    glVertex2f(.5,.35);
    glVertex2f(.63,.32);
    glVertex2f(.5,.30);
    glVertex2f(.63,.27);
    glVertex2f(.5,.25);
    glVertex2f(.63,.22);
    glVertex2f(.5,.20);
    glVertex2f(.63,.17);
    glVertex2f(.5,.15);
    glVertex2f(.63,.12);
    glVertex2f(.5,.10);
    glVertex2f(.63,.07);
    glVertex2f(.5,.05);
    glVertex2f(.63,.02);
    glVertex2f(.55,.44);
    glVertex2f(.55,.0);
    glVertex2f(.6,.43);
    glVertex2f(.6,.0);

    glVertex2f(.63,.40);   //left block 4---------------
    glVertex2f(.76,.40);
    glVertex2f(.63,.35);
    glVertex2f(.76,.35);
    glVertex2f(.63,.30);
    glVertex2f(.76,.30);
    glVertex2f(.63,.25);
    glVertex2f(.76,.25);
    glVertex2f(.63,.20);
    glVertex2f(.76,.20);
    glVertex2f(.63,.15);
    glVertex2f(.76,.15);
    glVertex2f(.63,.10);
    glVertex2f(.76,.10);
    glVertex2f(.63,.05);
    glVertex2f(.76,.05);
    glVertex2f(.68,.40);
    glVertex2f(.68,.0);
    glVertex2f(.73,.40);
    glVertex2f(.73,.0);
    glEnd();
    glLoadIdentity();


    //STRUCTURE CIRCLES & TRIANGLES=======================================================================================

    int i;  // right circle

    GLfloat x=.29f; GLfloat y=.116f; GLfloat radius =.05f;
    int triangleAmount = 200;


    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(165,165,165);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(
        x + (radius * cos(i *  twicePi / triangleAmount)),
        y + (radius * sin(i * twicePi / triangleAmount))
            );
    }
    glEnd();


    glBegin(GL_TRIANGLES); // right triangle 1------------
    glColor3ub(165,165,165);
    glVertex2f(.36,.127);
    glVertex2f(.38,.38);
    glVertex2f(.41,.113);
    glEnd();

    glBegin(GL_QUADS);  // right square 1------------------
    glColor3ub(165,165,165);
    glVertex2f(.36,.079);
    glVertex2f(.41,.067);
    glVertex2f(.41,0);
    glVertex2f(.36,0);
    glEnd();

    //glTranslatef(.22,0,0);
    glBegin(GL_TRIANGLES); // right triangle 2-------------
    glColor3ub(165,165,165);
    glVertex2f(.58,.13);
    glVertex2f(.6,.33);
    glVertex2f(.62,.12);
    glEnd();

    glBegin(GL_QUADS);  // right square 2-------------------
    glColor3ub(165,165,165);
    glVertex2f(.58,.083);
    glVertex2f(.62,.074);
    glVertex2f(.62,0);
    glVertex2f(.58,0);
    glEnd();

    glBegin(GL_QUADS);  // right triangle 3-------------------
    glColor3ub(165,165,165);
    glVertex2f(.63,.049);
    glVertex2f(.68,.248);
    glVertex2f(.73,.049);
    glVertex2f(.63,.049);
    glEnd();



    glBegin(GL_QUADS);  // center square
    glColor3ub(165,165,165);
    glVertex2f(-.05,.1);
    glVertex2f(.05,.1);
    glVertex2f(.05,0);
    glVertex2f(-.05,0);
    glEnd();




    glScalef(-1.0f, 1.0f, 0.0f);
    //int i;  // left circle

    //GLfloat x=.29f; GLfloat y=.116f; GLfloat radius =.05f;
    //int triangleAmount = 200;


    //GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(165,165,165);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(
        x + (radius * cos(i *  twicePi / triangleAmount)),
        y + (radius * sin(i * twicePi / triangleAmount))
            );
    }
    glEnd();


    glBegin(GL_TRIANGLES); // left triangle 1------------
    glColor3ub(165,165,165);
    glVertex2f(.36,.127);
    glVertex2f(.38,.38);
    glVertex2f(.41,.113);
    glEnd();

    glBegin(GL_QUADS);  // left square 1------------------
    glColor3ub(165,165,165);
    glVertex2f(.36,.079);
    glVertex2f(.41,.067);
    glVertex2f(.41,0);
    glVertex2f(.36,0);
    glEnd();

    //glTranslatef(.22,0,0);
    glBegin(GL_TRIANGLES); // left triangle 2-------------
    glColor3ub(165,165,165);
    glVertex2f(.58,.13);
    glVertex2f(.6,.33);
    glVertex2f(.62,.12);
    glEnd();

    glBegin(GL_QUADS);  // left square 2-------------------
    glColor3ub(165,165,165);
    glVertex2f(.58,.083);
    glVertex2f(.62,.074);
    glVertex2f(.62,0);
    glVertex2f(.58,0);
    glEnd();

    glBegin(GL_QUADS);  // left triangle 3-------------------
    glColor3ub(165,165,165);
    glVertex2f(.63,.049);
    glVertex2f(.68,.248);
    glVertex2f(.73,.049);
    glVertex2f(.63,.049);
    glEnd();
    glLoadIdentity();


    //STAIRS==========================================================================================
    glBegin(GL_QUADS);  //stairs ------------------
    glColor3ub(244, 181, 181);
    glVertex2f(-1,0);
    glVertex2f(1,0);
    glVertex2f(1,-.05);
    glVertex2f(-1,-.05);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(244, 161, 161);
    glVertex2f(-1,-.05);
    glVertex2f(1,-.05);
    glVertex2f(1,-.1);
    glVertex2f(-1,-.1);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(234, 151, 151);
    glVertex2f(-1,-.1);
    glVertex2f(1,-.1);
    glVertex2f(1,-.15);
    glVertex2f(-1,-.15);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(224, 141, 141);
    glVertex2f(-1,-.15);
    glVertex2f(1,-.15);
    glVertex2f(1,-.2);
    glVertex2f(-1,-.2);
    glEnd();

    /*glBegin(GL_QUADS);  //stair right white lines-----------------
    glColor3ub(235, 235, 235);
    glVertex2f(.345,0);
    glVertex2f(.35,0);
    glVertex2f(.48,-.2);
    glVertex2f(.475,-.2);
    glEnd();

    glBegin(GL_QUADS);  //stair left white lines-----------------
    glColor3ub(255, 220, 220);
    glVertex2f(-.345,0);
    glVertex2f(-.35,0);
    glVertex2f(-.48,-.2);
    glVertex2f(-.475,-.2);
    glEnd();*/


    //GRASS==========================================================================================
    glBegin(GL_QUADS);
    glColor3ub(0, 230, 172);
    glVertex2f(-1,-.2);
    glVertex2f(1,-.2);
    glVertex2f(1,-.3);
    glVertex2f(-1,-.3);
    glEnd();


    //FOOTPATH==========================================================================================
    glBegin(GL_QUADS);
    glColor3ub(220,220,220);
    glVertex2f(-1,-.3);
    glVertex2f(1,-.3);
    glVertex2f(1,-.45);
    glVertex2f(-1,-.45);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(190,190,190);
    glVertex2f(-1,-.45);
    glVertex2f(1,-.45);
    glVertex2f(1,-.47);
    glVertex2f(-1,-.47);
    glEnd();


    //Passerby==========================================================================================
    glPushMatrix();
    glTranslatef(crowdPosition1,0.0f, 0.0f);
    glBegin(GL_QUADS);   // people 1
    glColor3ub(255, 100, 150);
    glVertex2f(-.81,-.26);
    glVertex2f(-.79,-.26);
    glVertex2f(-.79,-.32);
    glVertex2f(-.81,-.32);
    glEnd();

    glBegin(GL_POLYGON);  //legs
    glColor3ub(152, 102, 255);
    glVertex2f(-.81,-.32);
    glVertex2f(-.79,-.32);
    glVertex2f(-.778,-.39);
    glVertex2f(-.786,-.39);
    glVertex2f(-.795,-.32);
    glVertex2f(-.805,-.39);
    glVertex2f(-.815,-.39);
    glEnd();

    glBegin(GL_QUADS);   //hand
    glColor3ub(255, 255, 204);
    glVertex2f(-.8,-.28);
    glVertex2f(-.792,-.28);
    glVertex2f(-.78,-.32);
    glVertex2f(-.788,-.32);
    glEnd();

    glBegin(GL_QUADS);  // left shoe
    glColor3ub(90, 101, 101);
    glVertex2f(-.815,-.39);
    glVertex2f(-.805,-.39);
    glVertex2f(-.8,-.4);
    glVertex2f(-.815,-.4);
    glEnd();

    glBegin(GL_QUADS); //right shoe
    glColor3ub(90, 101, 101);
    glVertex2f(-.786,-.39);
    glVertex2f(-.778,-.39);
    glVertex2f(-.773,-.4);
    glVertex2f(-.786,-.4);
    glEnd();



     int p; //head

    GLfloat px=-.8f; GLfloat py=-.251f; GLfloat radiusp =.011f;
    //int triangleAmount = 200;


    //GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(90, 101, 101);
    glVertex2f(px, py);
    for(p = 0; p <= triangleAmount;p++)
    {
        glVertex2f(
        px + (radiusp * cos(p *  twicePi / triangleAmount)),
        py + (radiusp * sin(p * twicePi / triangleAmount))
            );
    }
    glEnd();
    glPopMatrix();



    //LAMPPOST==========================================================================================

    glBegin(GL_QUADS); //stand  //center----------------------
    glColor3ub(100,100,100);
    glVertex2f(-.005,-.3);
    glVertex2f(.005,-.3);
    glVertex2f(.005,-.45);
    glVertex2f(-.005,-.45);
    glEnd();
    glBegin(GL_QUADS);  //stand left
    glColor3ub(100,100,100);
    glVertex2f(-.025,-.24);
    glVertex2f(-.015,-.24);
    glVertex2f(.005,-.3);
    glVertex2f(-.005,-.3);
    glEnd();
    glBegin(GL_QUADS);  //stand right
    glColor3ub(100,100,100);
    glVertex2f(.025,-.24);
    glVertex2f(.015,-.24);
    glVertex2f(-.005,-.3);
    glVertex2f(.005,-.3);
    glEnd();

    int l;  // left light

    GLfloat la=-.032f; GLfloat lb=-.23f; GLfloat radiusl =.003f;
    int triangleAmountl = 30;


    GLfloat twicePil = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230,230,230);
    glVertex2f(la, lb);
    for(l = 0; l <= triangleAmount2;l++)
    {
        glVertex2f(
        la + (radius2 * cos(l *  twicePil / triangleAmountl)),
        lb + (radius2 * sin(l * twicePil / triangleAmountl))
            );
    }
    glEnd();


    //int l;  // right light

    GLfloat la2=.032f; //GLfloat lb2=-.23f; GLfloat radiusl =.003f;
    //int triangleAmountl = 30;


    //GLfloat twicePil = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230,230,230);
    glVertex2f(la2, lb);
    for(l = 0; l <= triangleAmount2;l++)
    {
        glVertex2f(
        la2 + (radius2 * cos(l *  twicePil / triangleAmountl)),
        lb + (radius2 * sin(l * twicePil / triangleAmountl))
            );
    }
    glEnd();

    glTranslatef(.5,0,0);
    glBegin(GL_QUADS); //stand  //right----------------------
    glColor3ub(100,100,100);
    glVertex2f(-.005,-.3);
    glVertex2f(.005,-.3);
    glVertex2f(.005,-.45);
    glVertex2f(-.005,-.45);
    glEnd();
    glBegin(GL_QUADS);  //stand left
    glColor3ub(100,100,100);
    glVertex2f(-.025,-.24);
    glVertex2f(-.015,-.24);
    glVertex2f(.005,-.3);
    glVertex2f(-.005,-.3);
    glEnd();
    glBegin(GL_QUADS);  //stand right
    glColor3ub(100,100,100);
    glVertex2f(.025,-.24);
    glVertex2f(.015,-.24);
    glVertex2f(-.005,-.3);
    glVertex2f(.005,-.3);
    glEnd();

    //int l;  // left light

    //GLfloat la=-.032f; GLfloat lb=-.23f; GLfloat radiusl =.003f;
    //int triangleAmountl = 30;


    //GLfloat twicePil = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230,230,230);
    glVertex2f(la, lb);
    for(l = 0; l <= triangleAmount2;l++)
    {
        glVertex2f(
        la + (radius2 * cos(l *  twicePil / triangleAmountl)),
        lb + (radius2 * sin(l * twicePil / triangleAmountl))
            );
    }
    glEnd();


    //int l;  // right light

    //GLfloat la2=.032f; //GLfloat lb2=-.23f; GLfloat radiusl =.003f;
    //int triangleAmountl = 30;


    //GLfloat twicePil = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230,230,230);
    glVertex2f(la2, lb);
    for(l = 0; l <= triangleAmount2;l++)
    {
        glVertex2f(
        la2 + (radius2 * cos(l *  twicePil / triangleAmountl)),
        lb + (radius2 * sin(l * twicePil / triangleAmountl))
            );
    }
    glEnd();
    glLoadIdentity();


    glTranslatef(-.5,0,0);
    glBegin(GL_QUADS); //stand  //left----------------------
    glColor3ub(100,100,100);
    glVertex2f(-.005,-.3);
    glVertex2f(.005,-.3);
    glVertex2f(.005,-.45);
    glVertex2f(-.005,-.45);
    glEnd();
    glBegin(GL_QUADS);  //stand left
    glColor3ub(100,100,100);
    glVertex2f(-.025,-.24);
    glVertex2f(-.015,-.24);
    glVertex2f(.005,-.3);
    glVertex2f(-.005,-.3);
    glEnd();
    glBegin(GL_QUADS);  //stand right
    glColor3ub(100,100,100);
    glVertex2f(.025,-.24);
    glVertex2f(.015,-.24);
    glVertex2f(-.005,-.3);
    glVertex2f(.005,-.3);
    glEnd();

//    int l;  // left light

//    GLfloat la=-.032f; GLfloat lb=-.23f; GLfloat radiusl =.003f;
//    int triangleAmountl = 30;


//    GLfloat twicePil = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230,230,230);
    glVertex2f(la, lb);
    for(l = 0; l <= triangleAmount2;l++)
    {
        glVertex2f(
        la + (radius2 * cos(l *  twicePil / triangleAmountl)),
        lb + (radius2 * sin(l * twicePil / triangleAmountl))
            );
    }
    glEnd();


    //int l;  // right light

//    GLfloat la2=.032f; //GLfloat lb2=-.23f; GLfloat radiusl =.003f;
    //int triangleAmountl = 30;


    //GLfloat twicePil = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230,230,230);
    glVertex2f(la2, lb);
    for(l = 0; l <= triangleAmount2;l++)
    {
        glVertex2f(
        la2 + (radius2 * cos(l *  twicePil / triangleAmountl)),
        lb + (radius2 * sin(l * twicePil / triangleAmountl))
            );
    }
    glEnd();

    glLoadIdentity();



    //ROAD==========================================================================================
    glBegin(GL_QUADS);
    glColor3ub(160,160,160);
    glVertex2f(-1,-.47);
    glVertex2f(1,-.47);
    glVertex2f(1,-1);
    glVertex2f(-1,-1);
    glEnd();

    glBegin(GL_QUADS); //road divider---------------
    glColor3ub(230,230,230);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glLoadIdentity();


    glutTimerFunc(10000,noon,0);


    glFlush();
}

void morning(int b)
{
    moonPosition = 0;
    glutDisplayFunc(morningView);
    soundMorning();
}


void initial()
{

   glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT);
   glutTimerFunc(1,morning,0);
   glFlush();

}

void snowView()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    //SKY================================================================================================
    glBegin(GL_QUADS);  //
    glColor3ub(179,217,255);
    glVertex2f(-1,1);
    glVertex2f(1,1);
    glVertex2f(1,0);
    glVertex2f(-1,0);
    glEnd();

    glPushMatrix();
    glTranslatef(position41,0.0f, 0.0f);
    int s;  // sun-----------------------

    GLfloat sx=-.8f; GLfloat sy=.8f; GLfloat radiuss =.05f;
    int triangleAmounts = 200;


    GLfloat twicePis = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 230);
    glVertex2f(sx, sy);
    for(s = 0; s <= triangleAmounts;s++)
    {
        glVertex2f(
        sx + (radiuss * cos(s *  twicePis / triangleAmounts)),
        sy + (radiuss * sin(s * twicePis / triangleAmounts))
            );
    }
    glEnd();
    glPopMatrix();



    //--------------------------------------------------------------------- flag
 glBegin(GL_QUADS);//flagstick
                glColor3ub(100,100,100);
                glVertex2f(-.97,.0);
                glVertex2f(-.96,.0);
                glVertex2f(-.96,.4);
                glVertex2f(-.97,.4);
                glEnd();

                glBegin(GL_QUADS);//flag
                glColor3ub(121, 210, 166);
                glVertex2f(-.96,.24);
                glVertex2f(-.83,.24);
                glVertex2f(-.83,.38);
                glVertex2f(-.96,.38);
                glEnd();


                int q;  // flag circle-----------------------

    GLfloat sxx=-.9f; GLfloat syy=.31f; GLfloat radiusss =.03f;
    int triangleAmountss = 200;


    GLfloat twicePiss = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 128, 128);
    glVertex2f(sxx, syy);
    for(q = 0; q <= triangleAmountss;q++)
    {
        glVertex2f(
        sxx + (radiusss * cos(q *  twicePiss / triangleAmountss)),
        syy + (radiusss * sin(q * twicePiss / triangleAmountss))
            );
    }
    glEnd();



    //UPPER STRUCTURE==========================================================================================
    glBegin(GL_QUADS);  //upper center block---------
    glColor3ub(215,215,215);
    glVertex2f(-.15,.62);
    glVertex2f(.15,.62);
    glVertex2f(.15,.5);
    glVertex2f(-.15,.5);
    glEnd();

    glBegin(GL_QUADS);  //upper right block 1---------
    glColor3ub(230,230,230);
    glVertex2f(.15,.62);
    glVertex2f(.185,.59);
    glVertex2f(.185,.5);
    glVertex2f(.15,.5);
    glEnd();


    glBegin(GL_QUADS);  //upper right block 2---------
    glColor3ub(220,220,220);
    glVertex2f(.185,.59);
    glVertex2f(.25,.59);
    glVertex2f(.25,.4);
    glVertex2f(.185,.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(.25,.59);
    glVertex2f(.32,.56);
    glVertex2f(.32,.3);
    glVertex2f(.25,.3);
    glEnd();




    glScalef(-1.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);  //upper left block 1---------
    glColor3ub(230,230,230);
    glVertex2f(.15,.62);
    glVertex2f(.185,.59);
    glVertex2f(.185,.5);
    glVertex2f(.15,.5);
    glEnd();

    glBegin(GL_QUADS);  //upper left block 2---------
    glColor3ub(220,220,220);
    glVertex2f(.185,.59);
    glVertex2f(.25,.59);
    glVertex2f(.25,.4);
    glVertex2f(.185,.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(.25,.59);
    glVertex2f(.32,.56);
    glVertex2f(.32,.3);
    glVertex2f(.25,.3);
    glEnd();

    glLoadIdentity();



     //UPPER STRUCTURE LINES==========================================================================
    glBegin(GL_LINES);
    glColor3ub(235,235,235);
    glVertex2f(-.15,.56);
    glVertex2f(.15,.56);
    glVertex2f(.15,.56);
    glVertex2f(.185,.53);
    glVertex2f(.185,.53);
    glVertex2f(.25,.53);
    glVertex2f(.185,.48);
    glVertex2f(.25,.48);
    glVertex2f(.25,.53);
    glVertex2f(.32,.50);
    glEnd();


    glScalef(-1.0f, 1.0f, 0.0f);
    glBegin(GL_LINES);
    glColor3ub(235,235,235);
    glVertex2f(.185,.53);
    glVertex2f(.25,.53);
    glVertex2f(.185,.48);
    glVertex2f(.25,.48);
    glVertex2f(.25,.53);
    glVertex2f(.32,.50);
    glEnd();
    glLoadIdentity();



    //Upper STRUCTURE CIRCLES & TRIANGLES=======================================================================================

    glBegin(GL_QUADS);
    glColor3ub(190,190,190);
    glVertex2f(-.1,.56);
    glVertex2f(.1,.56);
    glVertex2f(.1,.5);
    glVertex2f(-.1,.5);
    glEnd();

    int j;  // upper right circle

    GLfloat a=.285f; GLfloat b=.518f; GLfloat radius2 =.03f;
    int triangleAmount2 = 30;


    GLfloat twicePi2 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(190,190,190);
    glVertex2f(a, b);
    for(j = 0; j <= triangleAmount2;j++)
    {
        glVertex2f(
        a + (radius2 * cos(j *  twicePi2 / triangleAmount2)),
        b + (radius2 * sin(j * twicePi2 / triangleAmount2))
            );
    }
    glEnd();


    //int j;  // upper left circle

    //GLfloat a=-.285f; GLfloat b=-.518f; GLfloat radius2 =.03f;
    //int triangleAmount2 = 30;


    //GLfloat twicePi2 = 2.0f * PI;
    GLfloat e=-.285f;  // upper left circle
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(190,190,190);
    glVertex2f(e, b);
    for(j = 0; j <= triangleAmount2;j++)
    {
        glVertex2f(
        e + (radius2 * cos(j *  twicePi2 / triangleAmount2)),
        b + (radius2 * sin(j * twicePi2 / triangleAmount2))
            );
    }
    glEnd();



    //STRUCTURE ==========================================================================================
    glBegin(GL_QUADS);  //center block---------
    glColor3ub(200,200,200);
    glVertex2f(-.05,.5);
    glVertex2f(.05,.5);
    glVertex2f(.05,0);
    glVertex2f(-.05,0);
    glEnd();

    glBegin(GL_QUADS);  //right block 1--------
    glColor3ub(210,210,210);
    glVertex2f(.05,.52);
    glVertex2f(.22,.52);
    glVertex2f(.22,0);
    glVertex2f(.05,0);
    glEnd();

    glBegin(GL_QUADS);  //right block 2--------
    glColor3ub(200,200,200);
    glVertex2f(.22,.45);
    glVertex2f(.35,.48);
    glVertex2f(.35,0);
    glVertex2f(.22,0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(210,210,210);
    glVertex2f(.35,.48);
    glVertex2f(.48,.45);
    glVertex2f(.48,0);
    glVertex2f(.35,0);
    glEnd();

    glBegin(GL_QUADS);  //right block 3---------
    glColor3ub(192,192,192);
    glVertex2f(.48,.44);
    glVertex2f(.5,.45);
    glVertex2f(.5,0);
    glVertex2f(.48,0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(210,210,210);
    glVertex2f(.5,.45);
    glVertex2f(.63,.42);
    glVertex2f(.63,0);
    glVertex2f(.5,0);
    glEnd();

    glBegin(GL_QUADS);  //right block 4---------
    glColor3ub(200,200,200);
    glVertex2f(.63,.40);
    glVertex2f(.76,.40);
    glVertex2f(.76,.0);
    glVertex2f(.63,.0);
    glEnd();







    glScalef(-1.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);  //left block 1------------
    glColor3ub(210,210,210);
    glVertex2f(.05,.52);
    glVertex2f(.22,.52);
    glVertex2f(.22,0);
    glVertex2f(.05,0);
    glEnd();

    glBegin(GL_QUADS);  //left block 2-----------
    glColor3ub(200,200,200);
    glVertex2f(.22,.45);
    glVertex2f(.35,.48);
    glVertex2f(.35,0);
    glVertex2f(.22,0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(210,210,210);
    glVertex2f(.35,.48);
    glVertex2f(.48,.45);
    glVertex2f(.48,0);
    glVertex2f(.35,0);
    glEnd();

    glBegin(GL_QUADS);  //left block 3----------
    glColor3ub(192,192,192);
    glVertex2f(.48,.44);
    glVertex2f(.5,.45);
    glVertex2f(.5,0);
    glVertex2f(.48,0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(210,210,210);
    glVertex2f(.5,.45);
    glVertex2f(.63,.42);
    glVertex2f(.63,0);
    glVertex2f(.5,0);
    glEnd();

    glBegin(GL_QUADS);  //left block 4---------
    glColor3ub(200,200,200);
    glVertex2f(.63,.40);
    glVertex2f(.76,.40);
    glVertex2f(.76,.0);
    glVertex2f(.63,.0);
    glEnd();
    glLoadIdentity();








    //STRUCTURE LINES==========================================================================
    glBegin(GL_LINES);
    glColor3ub(235,235,235);
    //glVertex2f(-.05,.5);  //center block-----------
    //glVertex2f(-.05,0);
    glVertex2f(-.05,.5);
    glVertex2f(.05,.5);
    //glVertex2f(.05,.5);
    //glVertex2f(.05,0);
    glVertex2f(0,.5);
    glVertex2f(0,0);
    glVertex2f(-.05,.45);
    glVertex2f(.05,.45);
    glVertex2f(-.05,.4);
    glVertex2f(.05,.4);
    glVertex2f(-.05,.35);
    glVertex2f(.05,.35);
    glVertex2f(-.05,.3);
    glVertex2f(.05,.3);
    glVertex2f(-.05,.25);
    glVertex2f(.05,.25);
    glVertex2f(-.05,.2);
    glVertex2f(.05,.2);
    glVertex2f(-.05,.15);
    glVertex2f(.05,.15);
    glVertex2f(-.05,.1);
    glVertex2f(.05,.1);
    glVertex2f(-.05,.05);
    glVertex2f(.05,.05);


    glVertex2f(.05,.52);  //right block 1------------
    glVertex2f(.05,.5);
    glVertex2f(.05,.52);
    glVertex2f(.22,.52);
    //glVertex2f(.22,.52);
    //glVertex2f(.22,.0);
    glVertex2f(.135,.52);
    glVertex2f(.135,.0);
    glVertex2f(.185,.52);
    glVertex2f(.185,.0);
    glVertex2f(.085,.52);
    glVertex2f(.085,.0);
    glVertex2f(.05,.47);
    glVertex2f(.22,.47);
    glVertex2f(.05,.42);
    glVertex2f(.22,.42);
    glVertex2f(.05,.37);
    glVertex2f(.22,.37);
    glVertex2f(.05,.32);
    glVertex2f(.22,.32);
    glVertex2f(.05,.27);
    glVertex2f(.22,.27);
    glVertex2f(.05,.22);
    glVertex2f(.22,.22);
    glVertex2f(.05,.17);
    glVertex2f(.22,.17);
    glVertex2f(.05,.12);
    glVertex2f(.22,.12);
    glVertex2f(.05,.07);
    glVertex2f(.22,.07);
    glVertex2f(.05,.02);
    glVertex2f(.22,.02);

    glVertex2f(.22,.45);  //right block 2------------
    glVertex2f(.35,.48);
    glVertex2f(.35,.48);
    glVertex2f(.48,.45);
    glVertex2f(48,.45);
    glVertex2f(.48,0);
    glVertex2f(.22,.4);
    glVertex2f(.35,.43);
    glVertex2f(.22,.35);
    glVertex2f(.35,.38);
    glVertex2f(.22,.3);
    glVertex2f(.35,.33);
    glVertex2f(.22,.25);
    glVertex2f(.35,.28);
    glVertex2f(.22,.2);
    glVertex2f(.35,.23);
    glVertex2f(.22,.15);
    glVertex2f(.35,.18);
    glVertex2f(.22,.1);
    glVertex2f(.35,.13);
    glVertex2f(.22,.05);
    glVertex2f(.35,.08);
    glVertex2f(.22,.0);
    glVertex2f(.35,.03);
    glVertex2f(.48,.4);
    glVertex2f(.35,.43);
    glVertex2f(.48,.35);
    glVertex2f(.35,.38);
    glVertex2f(.48,.3);
    glVertex2f(.35,.33);
    glVertex2f(.48,.25);
    glVertex2f(.35,.28);
    glVertex2f(.48,.2);
    glVertex2f(.35,.23);
    glVertex2f(.48,.15);
    glVertex2f(.35,.18);
    glVertex2f(.48,.1);
    glVertex2f(.35,.13);
    glVertex2f(.48,.05);
    glVertex2f(.35,.08);
    glVertex2f(.48,.0);
    glVertex2f(.35,.03);
    glVertex2f(.25,.46);
    glVertex2f(.25,.0);
    glVertex2f(.31,.47);
    glVertex2f(.31,.0);
    glVertex2f(.38,.47);
    glVertex2f(.38,.0);
    glVertex2f(.44,.46);
    glVertex2f(.44,.0);


    glVertex2f(.48,.44);  //right block 3---------------------
    glVertex2f(.5,.45);
    glVertex2f(.48,.39);
    glVertex2f(.5,.40);
    glVertex2f(.48,.34);
    glVertex2f(.5,.35);
    glVertex2f(.48,.39);
    glVertex2f(.5,.40);
    glVertex2f(.48,.34);
    glVertex2f(.5,.35);
    glVertex2f(.48,.29);
    glVertex2f(.5,.30);
    glVertex2f(.48,.24);
    glVertex2f(.5,.25);
    glVertex2f(.48,.19);
    glVertex2f(.5,.20);
    glVertex2f(.48,.14);
    glVertex2f(.5,.15);
    glVertex2f(.48,.09);
    glVertex2f(.5,.1);
    glVertex2f(.48,.04);
    glVertex2f(.5,.05);
    glVertex2f(.5,.45);
    glVertex2f(.63,.42);
    glVertex2f(.5,.40);
    glVertex2f(.63,.37);
    glVertex2f(.5,.35);
    glVertex2f(.63,.32);
    glVertex2f(.5,.30);
    glVertex2f(.63,.27);
    glVertex2f(.5,.25);
    glVertex2f(.63,.22);
    glVertex2f(.5,.20);
    glVertex2f(.63,.17);
    glVertex2f(.5,.15);
    glVertex2f(.63,.12);
    glVertex2f(.5,.10);
    glVertex2f(.63,.07);
    glVertex2f(.5,.05);
    glVertex2f(.63,.02);
    glVertex2f(.55,.44);
    glVertex2f(.55,.0);
    glVertex2f(.6,.43);
    glVertex2f(.6,.0);

    glVertex2f(.63,.40);   //right block 4-----------------
    glVertex2f(.76,.40);
    glVertex2f(.63,.35);
    glVertex2f(.76,.35);
    glVertex2f(.63,.30);
    glVertex2f(.76,.30);
    glVertex2f(.63,.25);
    glVertex2f(.76,.25);
    glVertex2f(.63,.20);
    glVertex2f(.76,.20);
    glVertex2f(.63,.15);
    glVertex2f(.76,.15);
    glVertex2f(.63,.10);
    glVertex2f(.76,.10);
    glVertex2f(.63,.05);
    glVertex2f(.76,.05);
    glVertex2f(.68,.40);
    glVertex2f(.68,.0);
    glVertex2f(.73,.40);
    glVertex2f(.73,.0);
    glEnd();



    glScalef(-1.0f, 1.0f, 0.0f);
    glBegin(GL_LINES);
    glColor3ub(235,235,235);
    glVertex2f(.05,.52);  //left block 1-------------------
    glVertex2f(.05,.5);
    glVertex2f(.05,.52);
    glVertex2f(.22,.52);
    //glVertex2f(.22,.52);
    //glVertex2f(.22,.0);
    glVertex2f(.135,.52);
    glVertex2f(.135,.0);
    glVertex2f(.185,.52);
    glVertex2f(.185,.0);
    glVertex2f(.085,.52);
    glVertex2f(.085,.0);
    glVertex2f(.05,.47);
    glVertex2f(.22,.47);
    glVertex2f(.05,.42);
    glVertex2f(.22,.42);
    glVertex2f(.05,.37);
    glVertex2f(.22,.37);
    glVertex2f(.05,.32);
    glVertex2f(.22,.32);
    glVertex2f(.05,.27);
    glVertex2f(.22,.27);
    glVertex2f(.05,.22);
    glVertex2f(.22,.22);
    glVertex2f(.05,.17);
    glVertex2f(.22,.17);
    glVertex2f(.05,.12);
    glVertex2f(.22,.12);
    glVertex2f(.05,.07);
    glVertex2f(.22,.07);
    glVertex2f(.05,.02);
    glVertex2f(.22,.02);

    glVertex2f(.22,.45);  //left block 2----------------
    glVertex2f(.35,.48);
    glVertex2f(.35,.48);
    glVertex2f(.48,.45);
    glVertex2f(48,.45);
    glVertex2f(.48,0);
    glVertex2f(.22,.4);
    glVertex2f(.35,.43);
    glVertex2f(.22,.35);
    glVertex2f(.35,.38);
    glVertex2f(.22,.3);
    glVertex2f(.35,.33);
    glVertex2f(.22,.25);
    glVertex2f(.35,.28);
    glVertex2f(.22,.2);
    glVertex2f(.35,.23);
    glVertex2f(.22,.15);
    glVertex2f(.35,.18);
    glVertex2f(.22,.1);
    glVertex2f(.35,.13);
    glVertex2f(.22,.05);
    glVertex2f(.35,.08);
    glVertex2f(.22,.0);
    glVertex2f(.35,.03);
    glVertex2f(.48,.4);
    glVertex2f(.35,.43);
    glVertex2f(.48,.35);
    glVertex2f(.35,.38);
    glVertex2f(.48,.3);
    glVertex2f(.35,.33);
    glVertex2f(.48,.25);
    glVertex2f(.35,.28);
    glVertex2f(.48,.2);
    glVertex2f(.35,.23);
    glVertex2f(.48,.15);
    glVertex2f(.35,.18);
    glVertex2f(.48,.1);
    glVertex2f(.35,.13);
    glVertex2f(.48,.05);
    glVertex2f(.35,.08);
    glVertex2f(.48,.0);
    glVertex2f(.35,.03);
    glVertex2f(.25,.46);
    glVertex2f(.25,.0);
    glVertex2f(.31,.47);
    glVertex2f(.31,.0);
    glVertex2f(.38,.47);
    glVertex2f(.38,.0);
    glVertex2f(.44,.46);
    glVertex2f(.44,.0);


    glVertex2f(.48,.44);  //left block 3-------------
    glVertex2f(.5,.45);
    glVertex2f(.48,.39);
    glVertex2f(.5,.40);
    glVertex2f(.48,.34);
    glVertex2f(.5,.35);
    glVertex2f(.48,.39);
    glVertex2f(.5,.40);
    glVertex2f(.48,.34);
    glVertex2f(.5,.35);
    glVertex2f(.48,.29);
    glVertex2f(.5,.30);
    glVertex2f(.48,.24);
    glVertex2f(.5,.25);
    glVertex2f(.48,.19);
    glVertex2f(.5,.20);
    glVertex2f(.48,.14);
    glVertex2f(.5,.15);
    glVertex2f(.48,.09);
    glVertex2f(.5,.1);
    glVertex2f(.48,.04);
    glVertex2f(.5,.05);
    glVertex2f(.5,.45);
    glVertex2f(.63,.42);
    glVertex2f(.5,.40);
    glVertex2f(.63,.37);
    glVertex2f(.5,.35);
    glVertex2f(.63,.32);
    glVertex2f(.5,.30);
    glVertex2f(.63,.27);
    glVertex2f(.5,.25);
    glVertex2f(.63,.22);
    glVertex2f(.5,.20);
    glVertex2f(.63,.17);
    glVertex2f(.5,.15);
    glVertex2f(.63,.12);
    glVertex2f(.5,.10);
    glVertex2f(.63,.07);
    glVertex2f(.5,.05);
    glVertex2f(.63,.02);
    glVertex2f(.55,.44);
    glVertex2f(.55,.0);
    glVertex2f(.6,.43);
    glVertex2f(.6,.0);

    glVertex2f(.63,.40);   //left block 4---------------
    glVertex2f(.76,.40);
    glVertex2f(.63,.35);
    glVertex2f(.76,.35);
    glVertex2f(.63,.30);
    glVertex2f(.76,.30);
    glVertex2f(.63,.25);
    glVertex2f(.76,.25);
    glVertex2f(.63,.20);
    glVertex2f(.76,.20);
    glVertex2f(.63,.15);
    glVertex2f(.76,.15);
    glVertex2f(.63,.10);
    glVertex2f(.76,.10);
    glVertex2f(.63,.05);
    glVertex2f(.76,.05);
    glVertex2f(.68,.40);
    glVertex2f(.68,.0);
    glVertex2f(.73,.40);
    glVertex2f(.73,.0);
    glEnd();
    glLoadIdentity();


    //STRUCTURE CIRCLES & TRIANGLES=======================================================================================

    int i;  // right circle

    GLfloat x=.29f; GLfloat y=.116f; GLfloat radius =.05f;
    int triangleAmount = 200;


    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(165,165,165);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(
        x + (radius * cos(i *  twicePi / triangleAmount)),
        y + (radius * sin(i * twicePi / triangleAmount))
            );
    }
    glEnd();


    glBegin(GL_TRIANGLES); // right triangle 1------------
    glColor3ub(165,165,165);
    glVertex2f(.36,.127);
    glVertex2f(.38,.38);
    glVertex2f(.41,.113);
    glEnd();

    glBegin(GL_QUADS);  // right square 1------------------
    glColor3ub(165,165,165);
    glVertex2f(.36,.079);
    glVertex2f(.41,.067);
    glVertex2f(.41,0);
    glVertex2f(.36,0);
    glEnd();

    //glTranslatef(.22,0,0);
    glBegin(GL_TRIANGLES); // right triangle 2-------------
    glColor3ub(165,165,165);
    glVertex2f(.58,.13);
    glVertex2f(.6,.33);
    glVertex2f(.62,.12);
    glEnd();

    glBegin(GL_QUADS);  // right square 2-------------------
    glColor3ub(165,165,165);
    glVertex2f(.58,.083);
    glVertex2f(.62,.074);
    glVertex2f(.62,0);
    glVertex2f(.58,0);
    glEnd();

    glBegin(GL_QUADS);  // right triangle 3-------------------
    glColor3ub(165,165,165);
    glVertex2f(.63,.049);
    glVertex2f(.68,.248);
    glVertex2f(.73,.049);
    glVertex2f(.63,.049);
    glEnd();



    glBegin(GL_QUADS);  // center square
    glColor3ub(165,165,165);
    glVertex2f(-.05,.1);
    glVertex2f(.05,.1);
    glVertex2f(.05,0);
    glVertex2f(-.05,0);
    glEnd();




    glScalef(-1.0f, 1.0f, 0.0f);
    //int i;  // left circle

    //GLfloat x=.29f; GLfloat y=.116f; GLfloat radius =.05f;
    //int triangleAmount = 200;


    //GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(165,165,165);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(
        x + (radius * cos(i *  twicePi / triangleAmount)),
        y + (radius * sin(i * twicePi / triangleAmount))
            );
    }
    glEnd();


    glBegin(GL_TRIANGLES); // left triangle 1------------
    glColor3ub(165,165,165);
    glVertex2f(.36,.127);
    glVertex2f(.38,.38);
    glVertex2f(.41,.113);
    glEnd();

    glBegin(GL_QUADS);  // left square 1------------------
    glColor3ub(165,165,165);
    glVertex2f(.36,.079);
    glVertex2f(.41,.067);
    glVertex2f(.41,0);
    glVertex2f(.36,0);
    glEnd();

    //glTranslatef(.22,0,0);
    glBegin(GL_TRIANGLES); // left triangle 2-------------
    glColor3ub(165,165,165);
    glVertex2f(.58,.13);
    glVertex2f(.6,.33);
    glVertex2f(.62,.12);
    glEnd();

    glBegin(GL_QUADS);  // left square 2-------------------
    glColor3ub(165,165,165);
    glVertex2f(.58,.083);
    glVertex2f(.62,.074);
    glVertex2f(.62,0);
    glVertex2f(.58,0);
    glEnd();

    glBegin(GL_QUADS);  // left triangle 3-------------------
    glColor3ub(165,165,165);
    glVertex2f(.63,.049);
    glVertex2f(.68,.248);
    glVertex2f(.73,.049);
    glVertex2f(.63,.049);
    glEnd();
    glLoadIdentity();


    //STAIRS==========================================================================================
    glBegin(GL_QUADS);  //stairs ------------------
    glColor3ub(244, 181, 181);
    glVertex2f(-1,0);
    glVertex2f(1,0);
    glVertex2f(1,-.05);
    glVertex2f(-1,-.05);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(244, 161, 161);
    glVertex2f(-1,-.05);
    glVertex2f(1,-.05);
    glVertex2f(1,-.1);
    glVertex2f(-1,-.1);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(234, 151, 151);
    glVertex2f(-1,-.1);
    glVertex2f(1,-.1);
    glVertex2f(1,-.15);
    glVertex2f(-1,-.15);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(224, 141, 141);
    glVertex2f(-1,-.15);
    glVertex2f(1,-.15);
    glVertex2f(1,-.2);
    glVertex2f(-1,-.2);
    glEnd();

    /*glBegin(GL_QUADS);  //stair right white lines-----------------
    glColor3ub(235, 235, 235);
    glVertex2f(.345,0);
    glVertex2f(.35,0);
    glVertex2f(.48,-.2);
    glVertex2f(.475,-.2);
    glEnd();

    glBegin(GL_QUADS);  //stair left white lines-----------------
    glColor3ub(255, 220, 220);
    glVertex2f(-.345,0);
    glVertex2f(-.35,0);
    glVertex2f(-.48,-.2);
    glVertex2f(-.475,-.2);
    glEnd();*/


    //GRASS==========================================================================================
    glBegin(GL_QUADS);
    glColor3ub(0, 230, 172);
    glVertex2f(-1,-.2);
    glVertex2f(1,-.2);
    glVertex2f(1,-.3);
    glVertex2f(-1,-.3);
    glEnd();


    //FOOTPATH==========================================================================================
    glBegin(GL_QUADS);
    glColor3ub(220,220,220);
    glVertex2f(-1,-.3);
    glVertex2f(1,-.3);
    glVertex2f(1,-.45);
    glVertex2f(-1,-.45);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(190,190,190);
    glVertex2f(-1,-.45);
    glVertex2f(1,-.45);
    glVertex2f(1,-.47);
    glVertex2f(-1,-.47);
    glEnd();
    //Passerby========================================================================================
    //LAMPPOST==========================================================================================

    glBegin(GL_QUADS); //stand  //center----------------------
    glColor3ub(100,100,100);
    glVertex2f(-.005,-.3);
    glVertex2f(.005,-.3);
    glVertex2f(.005,-.45);
    glVertex2f(-.005,-.45);
    glEnd();
    glBegin(GL_QUADS);  //stand left
    glColor3ub(100,100,100);
    glVertex2f(-.025,-.24);
    glVertex2f(-.015,-.24);
    glVertex2f(.005,-.3);
    glVertex2f(-.005,-.3);
    glEnd();
    glBegin(GL_QUADS);  //stand right
    glColor3ub(100,100,100);
    glVertex2f(.025,-.24);
    glVertex2f(.015,-.24);
    glVertex2f(-.005,-.3);
    glVertex2f(.005,-.3);
    glEnd();

    int l;  // left light

    GLfloat la=-.032f; GLfloat lb=-.23f; GLfloat radiusl =.003f;
    int triangleAmountl = 30;


    GLfloat twicePil = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230,230,230);
    glVertex2f(la, lb);
    for(l = 0; l <= triangleAmount2;l++)
    {
        glVertex2f(
        la + (radius2 * cos(l *  twicePil / triangleAmountl)),
        lb + (radius2 * sin(l * twicePil / triangleAmountl))
            );
    }
    glEnd();


    //int l;  // right light

    GLfloat la2=.032f; //GLfloat lb2=-.23f; GLfloat radiusl =.003f;
    //int triangleAmountl = 30;


    //GLfloat twicePil = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230,230,230);
    glVertex2f(la2, lb);
    for(l = 0; l <= triangleAmount2;l++)
    {
        glVertex2f(
        la2 + (radius2 * cos(l *  twicePil / triangleAmountl)),
        lb + (radius2 * sin(l * twicePil / triangleAmountl))
            );
    }
    glEnd();

    glTranslatef(.5,0,0);
    glBegin(GL_QUADS); //stand  //right----------------------
    glColor3ub(100,100,100);
    glVertex2f(-.005,-.3);
    glVertex2f(.005,-.3);
    glVertex2f(.005,-.45);
    glVertex2f(-.005,-.45);
    glEnd();
    glBegin(GL_QUADS);  //stand left
    glColor3ub(100,100,100);
    glVertex2f(-.025,-.24);
    glVertex2f(-.015,-.24);
    glVertex2f(.005,-.3);
    glVertex2f(-.005,-.3);
    glEnd();
    glBegin(GL_QUADS);  //stand right
    glColor3ub(100,100,100);
    glVertex2f(.025,-.24);
    glVertex2f(.015,-.24);
    glVertex2f(-.005,-.3);
    glVertex2f(.005,-.3);
    glEnd();

    //int l;  // left light

    //GLfloat la=-.032f; GLfloat lb=-.23f; GLfloat radiusl =.003f;
    //int triangleAmountl = 30;


    //GLfloat twicePil = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230,230,230);
    glVertex2f(la, lb);
    for(l = 0; l <= triangleAmount2;l++)
    {
        glVertex2f(
        la + (radius2 * cos(l *  twicePil / triangleAmountl)),
        lb + (radius2 * sin(l * twicePil / triangleAmountl))
            );
    }
    glEnd();


    //int l;  // right light

    //GLfloat la2=.032f; //GLfloat lb2=-.23f; GLfloat radiusl =.003f;
    //int triangleAmountl = 30;


    //GLfloat twicePil = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230,230,230);
    glVertex2f(la2, lb);
    for(l = 0; l <= triangleAmount2;l++)
    {
        glVertex2f(
        la2 + (radius2 * cos(l *  twicePil / triangleAmountl)),
        lb + (radius2 * sin(l * twicePil / triangleAmountl))
            );
    }
    glEnd();
    glLoadIdentity();


    glTranslatef(-.5,0,0);
    glBegin(GL_QUADS); //stand  //left----------------------
    glColor3ub(100,100,100);
    glVertex2f(-.005,-.3);
    glVertex2f(.005,-.3);
    glVertex2f(.005,-.45);
    glVertex2f(-.005,-.45);
    glEnd();
    glBegin(GL_QUADS);  //stand left
    glColor3ub(100,100,100);
    glVertex2f(-.025,-.24);
    glVertex2f(-.015,-.24);
    glVertex2f(.005,-.3);
    glVertex2f(-.005,-.3);
    glEnd();
    glBegin(GL_QUADS);  //stand right
    glColor3ub(100,100,100);
    glVertex2f(.025,-.24);
    glVertex2f(.015,-.24);
    glVertex2f(-.005,-.3);
    glVertex2f(.005,-.3);
    glEnd();

//    int l;  // left light

//    GLfloat la=-.032f; GLfloat lb=-.23f; GLfloat radiusl =.003f;
//    int triangleAmountl = 30;


//    GLfloat twicePil = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230,230,230);
    glVertex2f(la, lb);
    for(l = 0; l <= triangleAmount2;l++)
    {
        glVertex2f(
        la + (radius2 * cos(l *  twicePil / triangleAmountl)),
        lb + (radius2 * sin(l * twicePil / triangleAmountl))
            );
    }
    glEnd();


    //int l;  // right light

//    GLfloat la2=.032f; //GLfloat lb2=-.23f; GLfloat radiusl =.003f;
    //int triangleAmountl = 30;


    //GLfloat twicePil = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230,230,230);
    glVertex2f(la2, lb);
    for(l = 0; l <= triangleAmount2;l++)
    {
        glVertex2f(
        la2 + (radius2 * cos(l *  twicePil / triangleAmountl)),
        lb + (radius2 * sin(l * twicePil / triangleAmountl))
            );
    }
    glEnd();

    glLoadIdentity();



    //ROAD==========================================================================================
    glBegin(GL_QUADS);
    glColor3ub(160,160,160);
    glVertex2f(-1,-.47);
    glVertex2f(1,-.47);
    glVertex2f(1,-1);
    glVertex2f(-1,-1);
    glEnd();

    glBegin(GL_QUADS); //road divider---------------
    glColor3ub(230,230,230);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();

    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(230,230,230);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glLoadIdentity();
glPushMatrix();
glTranslatef(position28,0.0f, 0.0f);
      glBegin(GL_QUADS);  //CLOUD START
    glColor3ub(234,230,255);
    glVertex2f(0.4,0.8);
    glVertex2f(0.2,0.85);
    glVertex2f(0.85,0.85);
    glVertex2f(0.7,0.8);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(234,230,255);
    glVertex2f(0.25,0.75);
    glVertex2f(0.4,0.8);
    glVertex2f(0.7,0.8);
    glVertex2f(0.76,0.75);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(234,230,255);
    glVertex2f(0.5,0.7);
    glVertex2f(0.6,0.75);
    glVertex2f(0.75,0.75);
    glVertex2f(0.7,0.72);
    glPopMatrix();
    glEnd();
    glLoadIdentity();
glPushMatrix();
glTranslatef(-position28,0.0f, 0.0f);
     glBegin(GL_POLYGON);  //
    glColor3ub(234,230,255);
    glVertex2f(-0.8,0.75);
    glVertex2f(-0.7,0.8);
    glVertex2f(-0.7,0.8);
    glVertex2f(-0.9,0.85);
     glVertex2f(-0.2,0.85);
    glVertex2f(-0.5,0.8);
    glVertex2f(-0.5,0.8);
    glVertex2f(-0.3,0.75);
    glEnd();                 //CLOUD END
glPopMatrix();
glPushMatrix();
glTranslatef(0.0F,position30, 0.0f);
  glBegin(GL_QUADS);  //SNOWFALL START
    glColor3ub(255,255,255);
    glVertex2f(-0.12,0.88);
    glVertex2f(-0.12,0.9);
    glVertex2f(-0.1,0.9);
    glVertex2f(-0.1,0.88);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(-0.42,0.88);
    glVertex2f(-0.42,0.9);
    glVertex2f(-0.4,0.9);
    glVertex2f(-0.4,0.88);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(-0.72,0.88);
    glVertex2f(-0.72,0.9);
    glVertex2f(-0.7,0.9);
    glVertex2f(-0.7,0.88);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(-0.92,0.88);
    glVertex2f(-0.92,0.9);
    glVertex2f(-0.9,0.9);
    glVertex2f(-0.9,0.88);
    glEnd();
      glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.12,0.88);
    glVertex2f(0.12,0.9);
    glVertex2f(0.1,0.9);
    glVertex2f(0.1,0.88);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(0.42,0.88);
    glVertex2f(0.42,0.9);
    glVertex2f(0.4,0.9);
    glVertex2f(0.4,0.88);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(0.72,0.88);
    glVertex2f(0.72,0.9);
    glVertex2f(0.7,0.9);
    glVertex2f(0.7,0.88);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(0.92,0.88);
    glVertex2f(0.92,0.9);
    glVertex2f(0.9,0.9);
    glVertex2f(0.9,0.88);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(-0.22,0.78);
    glVertex2f(-0.22,0.8);
    glVertex2f(-0.2,0.8);
    glVertex2f(-0.2,0.78);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(-0.52,0.78);
    glVertex2f(-0.52,0.8);
    glVertex2f(-0.5,0.8);
    glVertex2f(-0.5,0.78);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(-0.82,0.78);
    glVertex2f(-0.82,0.8);
    glVertex2f(-0.8,0.8);
    glVertex2f(-0.8,0.78);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(0.22,0.78);
    glVertex2f(0.22,0.8);
    glVertex2f(0.2,0.8);
    glVertex2f(0.2,0.78);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(0.52,0.78);
    glVertex2f(0.52,0.8);
    glVertex2f(0.5,0.8);
    glVertex2f(0.5,0.78);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(0.82,0.78);
    glVertex2f(0.82,0.8);
    glVertex2f(0.8,0.8);
    glVertex2f(0.8,0.78);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.12,0.68);
    glVertex2f(-0.12,0.7);
    glVertex2f(-0.1,0.7);
    glVertex2f(-0.1,0.68);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(-0.42,0.68);
    glVertex2f(-0.42,0.7);
    glVertex2f(-0.4,0.7);
    glVertex2f(-0.4,0.68);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(-0.72,0.68);
    glVertex2f(-0.72,0.7);
    glVertex2f(-0.7,0.7);
    glVertex2f(-0.7,0.68);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(-0.92,0.68);
    glVertex2f(-0.92,0.7);
    glVertex2f(-0.9,0.7);
    glVertex2f(-0.9,0.68);
    glEnd();
      glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.12,0.68);
    glVertex2f(0.12,0.7);
    glVertex2f(0.1,0.7);
    glVertex2f(0.1,0.68);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(0.42,0.68);
    glVertex2f(0.42,0.7);
    glVertex2f(0.4,0.7);
    glVertex2f(0.4,0.68);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(0.72,0.68);
    glVertex2f(0.72,0.7);
    glVertex2f(0.7,0.7);
    glVertex2f(0.7,0.68);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(0.92,0.68);
    glVertex2f(0.92,0.7);
    glVertex2f(0.9,0.7);
    glVertex2f(0.9,0.68);
    glEnd();
         glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(-0.22,0.58);
    glVertex2f(-0.22,0.6);
    glVertex2f(-0.2,0.6);
    glVertex2f(-0.2,0.58);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(-0.52,0.58);
    glVertex2f(-0.52,0.6);
    glVertex2f(-0.5,0.6);
    glVertex2f(-0.5,0.58);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(-0.82,0.58);
    glVertex2f(-0.82,0.6);
    glVertex2f(-0.8,0.6);
    glVertex2f(-0.8,0.58);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(0.22,0.58);
    glVertex2f(0.22,0.6);
    glVertex2f(0.2,0.6);
    glVertex2f(0.2,0.58);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(0.52,0.58);
    glVertex2f(0.52,0.6);
    glVertex2f(0.5,0.6);
    glVertex2f(0.5,0.58);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(0.82,0.58);
    glVertex2f(0.82,0.6);
    glVertex2f(0.8,0.6);
    glVertex2f(0.8,0.58);
    glEnd();
      glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.12,0.48);
    glVertex2f(-0.12,0.5);
    glVertex2f(-0.1,0.5);
    glVertex2f(-0.1,0.48);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(-0.42,0.48);
    glVertex2f(-0.42,0.5);
    glVertex2f(-0.4,0.5);
    glVertex2f(-0.4,0.48);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(-0.72,0.48);
    glVertex2f(-0.72,0.5);
    glVertex2f(-0.7,0.5);
    glVertex2f(-0.7,0.48);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(-0.92,0.48);
    glVertex2f(-0.92,0.5);
    glVertex2f(-0.9,0.5);
    glVertex2f(-0.9,0.48);
    glEnd();
      glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.12,0.48);
    glVertex2f(0.12,0.5);
    glVertex2f(0.1,0.5);
    glVertex2f(0.1,0.48);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(0.42,0.48);
    glVertex2f(0.42,0.5);
    glVertex2f(0.4,0.5);
    glVertex2f(0.4,0.48);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(0.72,0.48);
    glVertex2f(0.72,0.5);
    glVertex2f(0.7,0.5);
    glVertex2f(0.7,0.48);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(0.92,0.48);
    glVertex2f(0.92,0.5);
    glVertex2f(0.9,0.5);
    glVertex2f(0.9,0.48);
    glEnd();
    glBegin(GL_QUADS);  //SNOWFALL START
    glColor3ub(255,255,255);
    glVertex2f(-0.12,0.38);
    glVertex2f(-0.12,0.4);
    glVertex2f(-0.1,0.4);
    glVertex2f(-0.1,0.38);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(-0.42,0.38);
    glVertex2f(-0.42,0.4);
    glVertex2f(-0.4,0.4);
    glVertex2f(-0.4,0.38);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(-0.72,0.38);
    glVertex2f(-0.72,0.4);
    glVertex2f(-0.7,0.4);
    glVertex2f(-0.7,0.38);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(-0.92,0.38);
    glVertex2f(-0.92,0.4);
    glVertex2f(-0.9,0.4);
    glVertex2f(-0.9,0.38);
    glEnd();
      glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.12,0.38);
    glVertex2f(0.12,0.4);
    glVertex2f(0.1,0.4);
    glVertex2f(0.1,0.38);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(0.42,0.38);
    glVertex2f(0.42,0.4);
    glVertex2f(0.4,0.4);
    glVertex2f(0.4,0.38);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(0.72,0.38);
    glVertex2f(0.72,0.4);
    glVertex2f(0.7,0.4);
    glVertex2f(0.7,0.38);
    glEnd();
      glBegin(GL_QUADS);  //
    glColor3ub(255,255,255);
    glVertex2f(0.92,0.38);
    glVertex2f(0.92,0.4);
    glVertex2f(0.9,0.4);
    glVertex2f(0.9,0.38);
    glEnd(); /////SNOWFALL END
glPopMatrix();
glFlush();
}

void rainyView() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
              glClear(GL_COLOR_BUFFER_BIT);

              //SKY================================================================================================
    glBegin(GL_QUADS);  //------------------------------------------------
    glColor3ub(0, 0, 128);
    glVertex2f(-1,1);
    glVertex2f(1,1);
    glVertex2f(1,0);
    glVertex2f(-1,0);
    glEnd();




glPushMatrix();
glTranslatef(position28,0.0f, 0.0f);

    int s;  // cloud-------------------------------------------------------

    GLfloat sx=.8f; GLfloat sy=.8f; GLfloat radiuss =.04f;
    int triangleAmounts = 20;


    GLfloat twicePis = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255, 255);
    glVertex2f(sx, sy);
    for(s = 0; s <= triangleAmounts;s++)
    {
        glVertex2f(
        sx + (radiuss * cos(s *  twicePis / triangleAmounts)),
        sy + (radiuss * sin(s * twicePis / triangleAmounts))
            );
    }


      // cloud-------------------------------------------------------

    GLfloat tx=.72f; GLfloat ty=.8f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255, 255);
    glVertex2f(tx, ty);
    for(s = 0; s <= triangleAmounts;s++)
    {
        glVertex2f(
        tx + (radiuss * cos(s *  twicePis / triangleAmounts)),
        ty + (radiuss * sin(s * twicePis / triangleAmounts))
            );
    }
    glEnd();

    // cloud-------------------------------------------------------

    GLfloat wx=.75f; GLfloat wy=.85f;


    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255, 255);
    glVertex2f(wx, wy);
    for(s = 0; s <= triangleAmounts;s++)
    {
        glVertex2f(
        wx + (radiuss * cos(s *  twicePis / triangleAmounts)),
        wy + (radiuss * sin(s * twicePis / triangleAmounts))
            );
    }
    glEnd();

    glPopMatrix();



    glPushMatrix();
glTranslatef(-position28,0.0f, 0.0f);

    //CLOUD.........................................

    GLfloat zx=.75f; GLfloat zy=.8f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255, 255);
    glVertex2f(zx, zy);
    for(s = 0; s <= triangleAmounts;s++)
    {
        glVertex2f(
        zx + (radiuss * cos(s *  twicePis / triangleAmounts)),
        zy + (radiuss * sin(s * twicePis / triangleAmounts))
            );
    }
    glEnd();

    // cloud-------------------------------------------------------

    GLfloat ux=-.72f; GLfloat uy=.8f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255, 255);
    glVertex2f(ux, uy);
    for(s = 0; s <= triangleAmounts;s++)
    {
        glVertex2f(
        ux + (radiuss * cos(s *  twicePis / triangleAmounts)),
        uy + (radiuss * sin(s * twicePis / triangleAmounts))
            );
    }
    glEnd();

    // cloud-------------------------------------------------------

    GLfloat vx=-.8f; GLfloat vy=.8f;


    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255, 255);
    glVertex2f(vx, vy);
    for(s = 0; s <= triangleAmounts;s++)
    {
        glVertex2f(
        vx + (radiuss * cos(s *  twicePis / triangleAmounts)),
        vy + (radiuss * sin(s * twicePis / triangleAmounts))
            );
    }
    glEnd();

    //cloud................................................


    GLfloat xx=-.75f; GLfloat xy=.85f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255, 255);
    glVertex2f(xx, xy);
    for(s = 0; s <= triangleAmounts;s++)
    {
        glVertex2f(
        xx + (radiuss * cos(s *  twicePis / triangleAmounts)),
        xy + (radiuss * sin(s * twicePis / triangleAmounts))
            );
    }
    glEnd();

    //cloud...........................................

    GLfloat yx=-.75f; GLfloat yy=.8f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255, 255);
    glVertex2f(yx, yy);
    for(s = 0; s <= triangleAmounts;s++)
    {
        glVertex2f(
        yx + (radiuss * cos(s *  twicePis / triangleAmounts)),
        yy + (radiuss * sin(s * twicePis / triangleAmounts))
            );
    }
    glEnd();

    glPopMatrix();

    glLoadIdentity();


      //--------------------------------------------------------------------- flag
 glBegin(GL_QUADS);//flagstick
                glColor3ub(100,100,100);
                glVertex2f(-.97,.0);
                glVertex2f(-.96,.0);
                glVertex2f(-.96,.4);
                glVertex2f(-.97,.4);
                glEnd();

                glBegin(GL_QUADS);//flag
                glColor3ub(0, 153, 115);
                glVertex2f(-.96,.24);
                glVertex2f(-.83,.24);
                glVertex2f(-.83,.38);
                glVertex2f(-.96,.38);
                glEnd();


                int q;  // flag circle-----------------------

    GLfloat sxx=-.9f; GLfloat syy=.31f; GLfloat radiusss =.03f;
    int triangleAmountss = 200;


    GLfloat twicePiss = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 71, 71);
    glVertex2f(sxx, syy);
    for(q = 0; q <= triangleAmountss;q++)
    {
        glVertex2f(
        sxx + (radiusss * cos(q *  twicePiss / triangleAmountss)),
        syy + (radiusss * sin(q * twicePiss / triangleAmountss))
            );
    }
    glEnd();








    //UPPER STRUCTURE==========================================================================================
    glBegin(GL_QUADS);  //upper center block---------
    glColor3ub(165,165,165);
    glVertex2f(-.15,.62);
    glVertex2f(.15,.62);
    glVertex2f(.15,.5);
    glVertex2f(-.15,.5);
    glEnd();

    glBegin(GL_QUADS);  //upper right block 1---------
    glColor3ub(180,180,180);
    glVertex2f(.15,.62);
    glVertex2f(.185,.59);
    glVertex2f(.185,.5);
    glVertex2f(.15,.5);
    glEnd();


    glBegin(GL_QUADS);  //upper right block 2---------
    glColor3ub(170,170,170);
    glVertex2f(.185,.59);
    glVertex2f(.25,.59);
    glVertex2f(.25,.4);
    glVertex2f(.185,.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(.25,.59);
    glVertex2f(.32,.56);
    glVertex2f(.32,.3);
    glVertex2f(.25,.3);
    glEnd();




    glScalef(-1.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);  //upper left block 1---------
    glColor3ub(180,180,180);
    glVertex2f(.15,.62);
    glVertex2f(.185,.59);
    glVertex2f(.185,.5);
    glVertex2f(.15,.5);
    glEnd();

    glBegin(GL_QUADS);  //upper left block 2---------
    glColor3ub(170,170,170);
    glVertex2f(.185,.59);
    glVertex2f(.25,.59);
    glVertex2f(.25,.4);
    glVertex2f(.185,.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(180,180,180);
    glVertex2f(.25,.59);
    glVertex2f(.32,.56);
    glVertex2f(.32,.3);
    glVertex2f(.25,.3);
    glEnd();

    glLoadIdentity();



     //UPPER STRUCTURE LINES==========================================================================
    glBegin(GL_LINES);
    glColor3ub(175,175,175);
    glVertex2f(-.15,.56);
    glVertex2f(.15,.56);
    glVertex2f(.15,.56);
    glVertex2f(.185,.53);
    glVertex2f(.185,.53);
    glVertex2f(.25,.53);
    glVertex2f(.185,.48);
    glVertex2f(.25,.48);
    glVertex2f(.25,.53);
    glVertex2f(.32,.50);
    glEnd();


    glScalef(-1.0f, 1.0f, 0.0f);
    glBegin(GL_LINES);
    glColor3ub(175,175,175);
    glVertex2f(.185,.53);
    glVertex2f(.25,.53);
    glVertex2f(.185,.48);
    glVertex2f(.25,.48);
    glVertex2f(.25,.53);
    glVertex2f(.32,.50);
    glEnd();
    glLoadIdentity();



    //Upper STRUCTURE CIRCLES & TRIANGLES=======================================================================================

    glBegin(GL_QUADS);
    glColor3ub(110,110,110);
    glVertex2f(-.1,.56);
    glVertex2f(.1,.56);
    glVertex2f(.1,.5);
    glVertex2f(-.1,.5);
    glEnd();

    int j;  // upper right circle

    GLfloat a=.285f; GLfloat b=.518f; GLfloat radius2 =.03f;
    int triangleAmount2 = 30;


    GLfloat twicePi2 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(110,110,110);
    glVertex2f(a, b);
    for(j = 0; j <= triangleAmount2;j++)
    {
        glVertex2f(
        a + (radius2 * cos(j *  twicePi2 / triangleAmount2)),
        b + (radius2 * sin(j * twicePi2 / triangleAmount2))
            );
    }
    glEnd();


    //int j;  // upper left circle

    //GLfloat a=-.285f; GLfloat b=-.518f; GLfloat radius2 =.03f;
    //int triangleAmount2 = 30;


    //GLfloat twicePi2 = 2.0f * PI;
    GLfloat e=-.285f;  // upper left circle
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(110,110,110);
    glVertex2f(e, b);
    for(j = 0; j <= triangleAmount2;j++)
    {
        glVertex2f(
        e + (radius2 * cos(j *  twicePi2 / triangleAmount2)),
        b + (radius2 * sin(j * twicePi2 / triangleAmount2))
            );
    }
    glEnd();



    //STRUCTURE ==========================================================================================
    glBegin(GL_QUADS);  //center block---------
    glColor3ub(150,150,150);
    glVertex2f(-.05,.5);
    glVertex2f(.05,.5);
    glVertex2f(.05,0);
    glVertex2f(-.05,0);
    glEnd();

    glBegin(GL_QUADS);  //right block 1--------
    glColor3ub(160,160,160);
    glVertex2f(.05,.52);
    glVertex2f(.22,.52);
    glVertex2f(.22,0);
    glVertex2f(.05,0);
    glEnd();

    glBegin(GL_QUADS);  //right block 2--------
    glColor3ub(150,150,150);
    glVertex2f(.22,.45);
    glVertex2f(.35,.48);
    glVertex2f(.35,0);
    glVertex2f(.22,0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160,160,160);
    glVertex2f(.35,.48);
    glVertex2f(.48,.45);
    glVertex2f(.48,0);
    glVertex2f(.35,0);
    glEnd();

    glBegin(GL_QUADS);  //right block 3---------
    glColor3ub(142,142,142);
    glVertex2f(.48,.44);
    glVertex2f(.5,.45);
    glVertex2f(.5,0);
    glVertex2f(.48,0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160,160,160);
    glVertex2f(.5,.45);
    glVertex2f(.63,.42);
    glVertex2f(.63,0);
    glVertex2f(.5,0);
    glEnd();

    glBegin(GL_QUADS);  //right block 4---------
    glColor3ub(150,150,150);
    glVertex2f(.63,.40);
    glVertex2f(.76,.40);
    glVertex2f(.76,.0);
    glVertex2f(.63,.0);
    glEnd();







    glScalef(-1.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);  //left block 1------------
    glColor3ub(160,160,160);
    glVertex2f(.05,.52);
    glVertex2f(.22,.52);
    glVertex2f(.22,0);
    glVertex2f(.05,0);
    glEnd();

    glBegin(GL_QUADS);  //left block 2-----------
    glColor3ub(150,150,150);
    glVertex2f(.22,.45);
    glVertex2f(.35,.48);
    glVertex2f(.35,0);
    glVertex2f(.22,0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160,160,160);
    glVertex2f(.35,.48);
    glVertex2f(.48,.45);
    glVertex2f(.48,0);
    glVertex2f(.35,0);
    glEnd();

    glBegin(GL_QUADS);  //left block 3----------
    glColor3ub(142,142,142);
    glVertex2f(.48,.44);
    glVertex2f(.5,.45);
    glVertex2f(.5,0);
    glVertex2f(.48,0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(160,160,160);
    glVertex2f(.5,.45);
    glVertex2f(.63,.42);
    glVertex2f(.63,0);
    glVertex2f(.5,0);
    glEnd();

    glBegin(GL_QUADS);  //left block 4---------
    glColor3ub(150,150,150);
    glVertex2f(.63,.40);
    glVertex2f(.76,.40);
    glVertex2f(.76,.0);
    glVertex2f(.63,.0);
    glEnd();
    glLoadIdentity();








    //STRUCTURE LINES==========================================================================
    glBegin(GL_LINES);
    glColor3ub(175,175,175);
    //glVertex2f(-.05,.5);  //center block-----------
    //glVertex2f(-.05,0);
    glVertex2f(-.05,.5);
    glVertex2f(.05,.5);
    //glVertex2f(.05,.5);
    //glVertex2f(.05,0);
    glVertex2f(0,.5);
    glVertex2f(0,0);
    glVertex2f(-.05,.45);
    glVertex2f(.05,.45);
    glVertex2f(-.05,.4);
    glVertex2f(.05,.4);
    glVertex2f(-.05,.35);
    glVertex2f(.05,.35);
    glVertex2f(-.05,.3);
    glVertex2f(.05,.3);
    glVertex2f(-.05,.25);
    glVertex2f(.05,.25);
    glVertex2f(-.05,.2);
    glVertex2f(.05,.2);
    glVertex2f(-.05,.15);
    glVertex2f(.05,.15);
    glVertex2f(-.05,.1);
    glVertex2f(.05,.1);
    glVertex2f(-.05,.05);
    glVertex2f(.05,.05);


    glVertex2f(.05,.52);  //right block 1------------
    glVertex2f(.05,.5);
    glVertex2f(.05,.52);
    glVertex2f(.22,.52);
    //glVertex2f(.22,.52);
    //glVertex2f(.22,.0);
    glVertex2f(.135,.52);
    glVertex2f(.135,.0);
    glVertex2f(.185,.52);
    glVertex2f(.185,.0);
    glVertex2f(.085,.52);
    glVertex2f(.085,.0);
    glVertex2f(.05,.47);
    glVertex2f(.22,.47);
    glVertex2f(.05,.42);
    glVertex2f(.22,.42);
    glVertex2f(.05,.37);
    glVertex2f(.22,.37);
    glVertex2f(.05,.32);
    glVertex2f(.22,.32);
    glVertex2f(.05,.27);
    glVertex2f(.22,.27);
    glVertex2f(.05,.22);
    glVertex2f(.22,.22);
    glVertex2f(.05,.17);
    glVertex2f(.22,.17);
    glVertex2f(.05,.12);
    glVertex2f(.22,.12);
    glVertex2f(.05,.07);
    glVertex2f(.22,.07);
    glVertex2f(.05,.02);
    glVertex2f(.22,.02);

    glVertex2f(.22,.45);  //right block 2------------
    glVertex2f(.35,.48);
    glVertex2f(.35,.48);
    glVertex2f(.48,.45);
    glVertex2f(48,.45);
    glVertex2f(.48,0);
    glVertex2f(.22,.4);
    glVertex2f(.35,.43);
    glVertex2f(.22,.35);
    glVertex2f(.35,.38);
    glVertex2f(.22,.3);
    glVertex2f(.35,.33);
    glVertex2f(.22,.25);
    glVertex2f(.35,.28);
    glVertex2f(.22,.2);
    glVertex2f(.35,.23);
    glVertex2f(.22,.15);
    glVertex2f(.35,.18);
    glVertex2f(.22,.1);
    glVertex2f(.35,.13);
    glVertex2f(.22,.05);
    glVertex2f(.35,.08);
    glVertex2f(.22,.0);
    glVertex2f(.35,.03);
    glVertex2f(.48,.4);
    glVertex2f(.35,.43);
    glVertex2f(.48,.35);
    glVertex2f(.35,.38);
    glVertex2f(.48,.3);
    glVertex2f(.35,.33);
    glVertex2f(.48,.25);
    glVertex2f(.35,.28);
    glVertex2f(.48,.2);
    glVertex2f(.35,.23);
    glVertex2f(.48,.15);
    glVertex2f(.35,.18);
    glVertex2f(.48,.1);
    glVertex2f(.35,.13);
    glVertex2f(.48,.05);
    glVertex2f(.35,.08);
    glVertex2f(.48,.0);
    glVertex2f(.35,.03);
    glVertex2f(.25,.46);
    glVertex2f(.25,.0);
    glVertex2f(.31,.47);
    glVertex2f(.31,.0);
    glVertex2f(.38,.47);
    glVertex2f(.38,.0);
    glVertex2f(.44,.46);
    glVertex2f(.44,.0);


    glVertex2f(.48,.44);  //right block 3---------------------
    glVertex2f(.5,.45);
    glVertex2f(.48,.39);
    glVertex2f(.5,.40);
    glVertex2f(.48,.34);
    glVertex2f(.5,.35);
    glVertex2f(.48,.39);
    glVertex2f(.5,.40);
    glVertex2f(.48,.34);
    glVertex2f(.5,.35);
    glVertex2f(.48,.29);
    glVertex2f(.5,.30);
    glVertex2f(.48,.24);
    glVertex2f(.5,.25);
    glVertex2f(.48,.19);
    glVertex2f(.5,.20);
    glVertex2f(.48,.14);
    glVertex2f(.5,.15);
    glVertex2f(.48,.09);
    glVertex2f(.5,.1);
    glVertex2f(.48,.04);
    glVertex2f(.5,.05);
    glVertex2f(.5,.45);
    glVertex2f(.63,.42);
    glVertex2f(.5,.40);
    glVertex2f(.63,.37);
    glVertex2f(.5,.35);
    glVertex2f(.63,.32);
    glVertex2f(.5,.30);
    glVertex2f(.63,.27);
    glVertex2f(.5,.25);
    glVertex2f(.63,.22);
    glVertex2f(.5,.20);
    glVertex2f(.63,.17);
    glVertex2f(.5,.15);
    glVertex2f(.63,.12);
    glVertex2f(.5,.10);
    glVertex2f(.63,.07);
    glVertex2f(.5,.05);
    glVertex2f(.63,.02);
    glVertex2f(.55,.44);
    glVertex2f(.55,.0);
    glVertex2f(.6,.43);
    glVertex2f(.6,.0);

    glVertex2f(.63,.40);   //right block 4-----------------
    glVertex2f(.76,.40);
    glVertex2f(.63,.35);
    glVertex2f(.76,.35);
    glVertex2f(.63,.30);
    glVertex2f(.76,.30);
    glVertex2f(.63,.25);
    glVertex2f(.76,.25);
    glVertex2f(.63,.20);
    glVertex2f(.76,.20);
    glVertex2f(.63,.15);
    glVertex2f(.76,.15);
    glVertex2f(.63,.10);
    glVertex2f(.76,.10);
    glVertex2f(.63,.05);
    glVertex2f(.76,.05);
    glVertex2f(.68,.40);
    glVertex2f(.68,.0);
    glVertex2f(.73,.40);
    glVertex2f(.73,.0);
    glEnd();



    glScalef(-1.0f, 1.0f, 0.0f);
    glBegin(GL_LINES);
    glColor3ub(175,175,175);
    glVertex2f(.05,.52);  //left block 1-------------------
    glVertex2f(.05,.5);
    glVertex2f(.05,.52);
    glVertex2f(.22,.52);
    //glVertex2f(.22,.52);
    //glVertex2f(.22,.0);
    glVertex2f(.135,.52);
    glVertex2f(.135,.0);
    glVertex2f(.185,.52);
    glVertex2f(.185,.0);
    glVertex2f(.085,.52);
    glVertex2f(.085,.0);
    glVertex2f(.05,.47);
    glVertex2f(.22,.47);
    glVertex2f(.05,.42);
    glVertex2f(.22,.42);
    glVertex2f(.05,.37);
    glVertex2f(.22,.37);
    glVertex2f(.05,.32);
    glVertex2f(.22,.32);
    glVertex2f(.05,.27);
    glVertex2f(.22,.27);
    glVertex2f(.05,.22);
    glVertex2f(.22,.22);
    glVertex2f(.05,.17);
    glVertex2f(.22,.17);
    glVertex2f(.05,.12);
    glVertex2f(.22,.12);
    glVertex2f(.05,.07);
    glVertex2f(.22,.07);
    glVertex2f(.05,.02);
    glVertex2f(.22,.02);

    glVertex2f(.22,.45);  //left block 2----------------
    glVertex2f(.35,.48);
    glVertex2f(.35,.48);
    glVertex2f(.48,.45);
    glVertex2f(48,.45);
    glVertex2f(.48,0);
    glVertex2f(.22,.4);
    glVertex2f(.35,.43);
    glVertex2f(.22,.35);
    glVertex2f(.35,.38);
    glVertex2f(.22,.3);
    glVertex2f(.35,.33);
    glVertex2f(.22,.25);
    glVertex2f(.35,.28);
    glVertex2f(.22,.2);
    glVertex2f(.35,.23);
    glVertex2f(.22,.15);
    glVertex2f(.35,.18);
    glVertex2f(.22,.1);
    glVertex2f(.35,.13);
    glVertex2f(.22,.05);
    glVertex2f(.35,.08);
    glVertex2f(.22,.0);
    glVertex2f(.35,.03);
    glVertex2f(.48,.4);
    glVertex2f(.35,.43);
    glVertex2f(.48,.35);
    glVertex2f(.35,.38);
    glVertex2f(.48,.3);
    glVertex2f(.35,.33);
    glVertex2f(.48,.25);
    glVertex2f(.35,.28);
    glVertex2f(.48,.2);
    glVertex2f(.35,.23);
    glVertex2f(.48,.15);
    glVertex2f(.35,.18);
    glVertex2f(.48,.1);
    glVertex2f(.35,.13);
    glVertex2f(.48,.05);
    glVertex2f(.35,.08);
    glVertex2f(.48,.0);
    glVertex2f(.35,.03);
    glVertex2f(.25,.46);
    glVertex2f(.25,.0);
    glVertex2f(.31,.47);
    glVertex2f(.31,.0);
    glVertex2f(.38,.47);
    glVertex2f(.38,.0);
    glVertex2f(.44,.46);
    glVertex2f(.44,.0);


    glVertex2f(.48,.44);  //left block 3-------------
    glVertex2f(.5,.45);
    glVertex2f(.48,.39);
    glVertex2f(.5,.40);
    glVertex2f(.48,.34);
    glVertex2f(.5,.35);
    glVertex2f(.48,.39);
    glVertex2f(.5,.40);
    glVertex2f(.48,.34);
    glVertex2f(.5,.35);
    glVertex2f(.48,.29);
    glVertex2f(.5,.30);
    glVertex2f(.48,.24);
    glVertex2f(.5,.25);
    glVertex2f(.48,.19);
    glVertex2f(.5,.20);
    glVertex2f(.48,.14);
    glVertex2f(.5,.15);
    glVertex2f(.48,.09);
    glVertex2f(.5,.1);
    glVertex2f(.48,.04);
    glVertex2f(.5,.05);
    glVertex2f(.5,.45);
    glVertex2f(.63,.42);
    glVertex2f(.5,.40);
    glVertex2f(.63,.37);
    glVertex2f(.5,.35);
    glVertex2f(.63,.32);
    glVertex2f(.5,.30);
    glVertex2f(.63,.27);
    glVertex2f(.5,.25);
    glVertex2f(.63,.22);
    glVertex2f(.5,.20);
    glVertex2f(.63,.17);
    glVertex2f(.5,.15);
    glVertex2f(.63,.12);
    glVertex2f(.5,.10);
    glVertex2f(.63,.07);
    glVertex2f(.5,.05);
    glVertex2f(.63,.02);
    glVertex2f(.55,.44);
    glVertex2f(.55,.0);
    glVertex2f(.6,.43);
    glVertex2f(.6,.0);

    glVertex2f(.63,.40);   //left block 4---------------
    glVertex2f(.76,.40);
    glVertex2f(.63,.35);
    glVertex2f(.76,.35);
    glVertex2f(.63,.30);
    glVertex2f(.76,.30);
    glVertex2f(.63,.25);
    glVertex2f(.76,.25);
    glVertex2f(.63,.20);
    glVertex2f(.76,.20);
    glVertex2f(.63,.15);
    glVertex2f(.76,.15);
    glVertex2f(.63,.10);
    glVertex2f(.76,.10);
    glVertex2f(.63,.05);
    glVertex2f(.76,.05);
    glVertex2f(.68,.40);
    glVertex2f(.68,.0);
    glVertex2f(.73,.40);
    glVertex2f(.73,.0);
    glEnd();
    glLoadIdentity();


    //STRUCTURE CIRCLES & TRIANGLES=======================================================================================

    int i;  // right circle

    GLfloat x=.29f; GLfloat y=.116f; GLfloat radius =.05f;
    int triangleAmount = 200;


    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(85,85,85);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(
        x + (radius * cos(i *  twicePi / triangleAmount)),
        y + (radius * sin(i * twicePi / triangleAmount))
            );
    }
    glEnd();


    glBegin(GL_TRIANGLES); // right triangle 1------------
    glColor3ub(85,85,85);
    glVertex2f(.36,.127);
    glVertex2f(.38,.38);
    glVertex2f(.41,.113);
    glEnd();

    glBegin(GL_QUADS);  // right square 1------------------
    glColor3ub(85,85,85);
    glVertex2f(.36,.079);
    glVertex2f(.41,.067);
    glVertex2f(.41,0);
    glVertex2f(.36,0);
    glEnd();

    //glTranslatef(.22,0,0);
    glBegin(GL_TRIANGLES); // right triangle 2-------------
    glColor3ub(85,85,85);
    glVertex2f(.58,.13);
    glVertex2f(.6,.33);
    glVertex2f(.62,.12);
    glEnd();

    glBegin(GL_QUADS);  // right square 2-------------------
    glColor3ub(85,85,85);
    glVertex2f(.58,.083);
    glVertex2f(.62,.074);
    glVertex2f(.62,0);
    glVertex2f(.58,0);
    glEnd();

    glBegin(GL_QUADS);  // right triangle 3-------------------
    glColor3ub(85,85,85);
    glVertex2f(.63,.049);
    glVertex2f(.68,.248);
    glVertex2f(.73,.049);
    glVertex2f(.63,.049);
    glEnd();



    glBegin(GL_QUADS);  // center square
    glColor3ub(85,85,85);
    glVertex2f(-.05,.1);
    glVertex2f(.05,.1);
    glVertex2f(.05,0);
    glVertex2f(-.05,0);
    glEnd();




    glScalef(-1.0f, 1.0f, 0.0f);
    //int i;  // left circle

    //GLfloat x=.29f; GLfloat y=.116f; GLfloat radius =.05f;
    //int triangleAmount = 200;


    //GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(85,85,85);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(
        x + (radius * cos(i *  twicePi / triangleAmount)),
        y + (radius * sin(i * twicePi / triangleAmount))
            );
    }
    glEnd();


    glBegin(GL_TRIANGLES); // left triangle 1------------
    glColor3ub(85,85,85);
    glVertex2f(.36,.127);
    glVertex2f(.38,.38);
    glVertex2f(.41,.113);
    glEnd();

    glBegin(GL_QUADS);  // left square 1------------------
    glColor3ub(85,85,85);
    glVertex2f(.36,.079);
    glVertex2f(.41,.067);
    glVertex2f(.41,0);
    glVertex2f(.36,0);
    glEnd();

    //glTranslatef(.22,0,0);
    glBegin(GL_TRIANGLES); // left triangle 2-------------
    glColor3ub(85,85,85);
    glVertex2f(.58,.13);
    glVertex2f(.6,.33);
    glVertex2f(.62,.12);
    glEnd();

    glBegin(GL_QUADS);  // left square 2-------------------
    glColor3ub(85,85,85);
    glVertex2f(.58,.083);
    glVertex2f(.62,.074);
    glVertex2f(.62,0);
    glVertex2f(.58,0);
    glEnd();

    glBegin(GL_QUADS);  // left triangle 3-------------------
    glColor3ub(85,85,85);
    glVertex2f(.63,.049);
    glVertex2f(.68,.248);
    glVertex2f(.73,.049);
    glVertex2f(.63,.049);
    glEnd();
    glLoadIdentity();


    //STAIRS==========================================================================================
    glBegin(GL_QUADS);  //stairs ------------------
    glColor3ub(194, 111, 111);
    glVertex2f(-1,0);
    glVertex2f(1,0);
    glVertex2f(1,-.05);
    glVertex2f(-1,-.05);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(194, 91, 91);
    glVertex2f(-1,-.05);
    glVertex2f(1,-.05);
    glVertex2f(1,-.1);
    glVertex2f(-1,-.1);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(184, 81, 81);
    glVertex2f(-1,-.1);
    glVertex2f(1,-.1);
    glVertex2f(1,-.15);
    glVertex2f(-1,-.15);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(174, 71, 71);
    glVertex2f(-1,-.15);
    glVertex2f(1,-.15);
    glVertex2f(1,-.2);
    glVertex2f(-1,-.2);
    glEnd();

    /*glBegin(GL_QUADS);  //stair right white lines-----------------
    glColor3ub(235, 235, 235);
    glVertex2f(.345,0);
    glVertex2f(.35,0);
    glVertex2f(.48,-.2);
    glVertex2f(.475,-.2);
    glEnd();

    glBegin(GL_QUADS);  //stair left white lines-----------------
    glColor3ub(255, 220, 220);
    glVertex2f(-.345,0);
    glVertex2f(-.35,0);
    glVertex2f(-.48,-.2);
    glVertex2f(-.475,-.2);
    glEnd();*/


    //GRASS==========================================================================================
    glBegin(GL_QUADS);
    glColor3ub(0, 153, 115);
    glVertex2f(-1,-.2);
    glVertex2f(1,-.2);
    glVertex2f(1,-.3);
    glVertex2f(-1,-.3);
    glEnd();


    //FOOTPATH==========================================================================================
    glBegin(GL_QUADS);
    glColor3ub(170,170,170);
    glVertex2f(-1,-.3);
    glVertex2f(1,-.3);
    glVertex2f(1,-.45);
    glVertex2f(-1,-.45);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(110,110,110);
    glVertex2f(-1,-.45);
    glVertex2f(1,-.45);
    glVertex2f(1,-.47);
    glVertex2f(-1,-.47);
    glEnd();





    //LAMPPOST==========================================================================================

    glBegin(GL_QUADS); //stand  //center----------------------
    glColor3ub(100,100,100);
    glVertex2f(-.005,-.3);
    glVertex2f(.005,-.3);
    glVertex2f(.005,-.45);
    glVertex2f(-.005,-.45);
    glEnd();
    glBegin(GL_QUADS);  //stand left
    glColor3ub(100,100,100);
    glVertex2f(-.025,-.24);
    glVertex2f(-.015,-.24);
    glVertex2f(.005,-.3);
    glVertex2f(-.005,-.3);
    glEnd();
    glBegin(GL_QUADS);  //stand right
    glColor3ub(100,100,100);
    glVertex2f(.025,-.24);
    glVertex2f(.015,-.24);
    glVertex2f(-.005,-.3);
    glVertex2f(.005,-.3);
    glEnd();

    int l;  // left light

    GLfloat la=-.032f; GLfloat lb=-.23f; GLfloat radiusl =.003f;
    int triangleAmountl = 30;


    GLfloat twicePil = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 204);
    glVertex2f(la, lb);
    for(l = 0; l <= triangleAmount2;l++)
    {
        glVertex2f(
        la + (radius2 * cos(l *  twicePil / triangleAmountl)),
        lb + (radius2 * sin(l * twicePil / triangleAmountl))
            );
    }
    glEnd();


    //int l;  // right light

    GLfloat la2=.032f; //GLfloat lb2=-.23f; GLfloat radiusl =.003f;
    //int triangleAmountl = 30;


    //GLfloat twicePil = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 204);
    glVertex2f(la2, lb);
    for(l = 0; l <= triangleAmount2;l++)
    {
        glVertex2f(
        la2 + (radius2 * cos(l *  twicePil / triangleAmountl)),
        lb + (radius2 * sin(l * twicePil / triangleAmountl))
            );
    }
    glEnd();

    glTranslatef(.5,0,0);
    glBegin(GL_QUADS); //stand  //right----------------------
    glColor3ub(100,100,100);
    glVertex2f(-.005,-.3);
    glVertex2f(.005,-.3);
    glVertex2f(.005,-.45);
    glVertex2f(-.005,-.45);
    glEnd();
    glBegin(GL_QUADS);  //stand left
    glColor3ub(100,100,100);
    glVertex2f(-.025,-.24);
    glVertex2f(-.015,-.24);
    glVertex2f(.005,-.3);
    glVertex2f(-.005,-.3);
    glEnd();
    glBegin(GL_QUADS);  //stand right
    glColor3ub(100,100,100);
    glVertex2f(.025,-.24);
    glVertex2f(.015,-.24);
    glVertex2f(-.005,-.3);
    glVertex2f(.005,-.3);
    glEnd();

    //int l;  // left light

    //GLfloat la=-.032f; GLfloat lb=-.23f; GLfloat radiusl =.003f;
    //int triangleAmountl = 30;


    //GLfloat twicePil = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 204);
    glVertex2f(la, lb);
    for(l = 0; l <= triangleAmount2;l++)
    {
        glVertex2f(
        la + (radius2 * cos(l *  twicePil / triangleAmountl)),
        lb + (radius2 * sin(l * twicePil / triangleAmountl))
            );
    }
    glEnd();


    //int l;  // right light

    //GLfloat la2=.032f; //GLfloat lb2=-.23f; GLfloat radiusl =.003f;
    //int triangleAmountl = 30;


    //GLfloat twicePil = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 204);
    glVertex2f(la2, lb);
    for(l = 0; l <= triangleAmount2;l++)
    {
        glVertex2f(
        la2 + (radius2 * cos(l *  twicePil / triangleAmountl)),
        lb + (radius2 * sin(l * twicePil / triangleAmountl))
            );
    }
    glEnd();
    glLoadIdentity();


    glTranslatef(-.5,0,0);
    glBegin(GL_QUADS); //stand  //left----------------------
    glColor3ub(100,100,100);
    glVertex2f(-.005,-.3);
    glVertex2f(.005,-.3);
    glVertex2f(.005,-.45);
    glVertex2f(-.005,-.45);
    glEnd();
    glBegin(GL_QUADS);  //stand left
    glColor3ub(100,100,100);
    glVertex2f(-.025,-.24);
    glVertex2f(-.015,-.24);
    glVertex2f(.005,-.3);
    glVertex2f(-.005,-.3);
    glEnd();
    glBegin(GL_QUADS);  //stand right
    glColor3ub(100,100,100);
    glVertex2f(.025,-.24);
    glVertex2f(.015,-.24);
    glVertex2f(-.005,-.3);
    glVertex2f(.005,-.3);
    glEnd();

//    int l;  // left light

//    GLfloat la=-.032f; GLfloat lb=-.23f; GLfloat radiusl =.003f;
//    int triangleAmountl = 30;


//    GLfloat twicePil = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 204);
    glVertex2f(la, lb);
    for(l = 0; l <= triangleAmount2;l++)
    {
        glVertex2f(
        la + (radius2 * cos(l *  twicePil / triangleAmountl)),
        lb + (radius2 * sin(l * twicePil / triangleAmountl))
            );
    }
    glEnd();


    //int l;  // right light

//    GLfloat la2=.032f; //GLfloat lb2=-.23f; GLfloat radiusl =.003f;
    //int triangleAmountl = 30;


    //GLfloat twicePil = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 204);
    glVertex2f(la2, lb);
    for(l = 0; l <= triangleAmount2;l++)
    {
        glVertex2f(
        la2 + (radius2 * cos(l *  twicePil / triangleAmountl)),
        lb + (radius2 * sin(l * twicePil / triangleAmountl))
            );
    }
    glEnd();

    glLoadIdentity();



    //ROAD==========================================================================================
    glBegin(GL_QUADS);
    glColor3ub(80,80,80);
    glVertex2f(-1,-.47);
    glVertex2f(1,-.47);
    glVertex2f(1,-1);
    glVertex2f(-1,-1);
    glEnd();

    glBegin(GL_QUADS); //road divider---------------
    glColor3ub(170,170,170);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(170,170,170);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(170,170,170);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(170,170,170);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(170,170,170);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(170,170,170);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(170,170,170);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(170,170,170);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(170,170,170);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glTranslatef(.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(170,170,170);
    glVertex2f(-.95,-.728);
    glVertex2f(-.85,-.728);
    glVertex2f(-.85,-.742);
    glVertex2f(-.95,-.742);
    glEnd();
    glLoadIdentity();

    //rain............................................

    glPushMatrix();
    glTranslatef(-position5,-position4, 0.0f);

    glPointSize(4.0);
    glBegin(GL_POINTS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-.8f,0.8f);
    glVertex2f(-.8f,0.7f);
    glVertex2f(-.8f,0.6f);
    glVertex2f(-.8f,0.5f);
    glVertex2f(-.8f,0.4f);
    glVertex2f(-.8f,0.3f);
    glVertex2f(-.8f,0.2f);
    glVertex2f(-.8f,0.1f);
    glVertex2f(-.8f,0.0f);
    glVertex2f(-.7f,0.0f);
    glVertex2f(-.6f,0.0f);
    glVertex2f(-.5f,0.0f);
    glVertex2f(-.4f,0.0f);
    glVertex2f(-.3f,0.0f);
    glVertex2f(-.2f,0.0f);
    glVertex2f(-.1f,0.0f);
    glVertex2f(-.0f,0.0f);
    glVertex2f(.1f,0.0f);
    glVertex2f(.2f,0.0f);
    glVertex2f(.3f,0.0f);
    glVertex2f(-.8f,0.1f);
    glVertex2f(-.7f,0.2f);
    glVertex2f(-.6f,0.3f);
    glVertex2f(-.5f,0.4f);
    glVertex2f(-.4f,0.5f);
    glVertex2f(-.3f,0.6f);
    glVertex2f(-.2f,0.7f);
    glVertex2f(-.1f,0.8f);
    glVertex2f(-.8f,0.1f);
    glVertex2f(-.7f,0.1f);
    glVertex2f(-.6f,0.1f);
    glVertex2f(-.5f,0.1f);
    glVertex2f(-.4f,0.1f);
    glVertex2f(-.3f,0.1f);
    glVertex2f(-.2f,0.1f);
    glVertex2f(-.1f,0.1f);
    glVertex2f(.1f,0.1f);
    glVertex2f(.2f,0.1f);
    glVertex2f(.3f,0.1f);
    glVertex2f(.4f,0.1f);


     glVertex2f(-.8f,0.2f);
    glVertex2f(-.7f,0.2f);
    glVertex2f(-.6f,0.2f);
    glVertex2f(-.5f,0.2f);
    glVertex2f(-.4f,0.2f);
    glVertex2f(-.3f,0.2f);
    glVertex2f(-.2f,0.2f);
    glVertex2f(-.1f,0.2f);
    glVertex2f(.1f,0.2f);
    glVertex2f(.2f,0.2f);
    glVertex2f(.3f,0.2f);
    glVertex2f(.4f,0.2f);

     glVertex2f(-.8f,0.3f);
    glVertex2f(-.7f,0.3f);
    glVertex2f(-.6f,0.3f);
    glVertex2f(-.5f,0.3f);
    glVertex2f(-.4f,0.3f);
    glVertex2f(-.3f,0.3f);
    glVertex2f(-.2f,0.3f);
    glVertex2f(-.1f,0.3f);
    glVertex2f(.1f,0.3f);
    glVertex2f(.2f,0.3f);
    glVertex2f(.3f,0.3f);
    glVertex2f(.4f,0.3f);



     glVertex2f(-.8f,0.4f);
    glVertex2f(-.7f,0.4f);
    glVertex2f(-.6f,0.4f);
    glVertex2f(-.5f,0.4f);
    glVertex2f(-.4f,0.4f);
    glVertex2f(-.3f,0.4);
    glVertex2f(-.2f,0.4);
    glVertex2f(-.1f,0.4f);
    glVertex2f(.1f,0.4f);
    glVertex2f(.2f,0.4f);
    glVertex2f(.3f,0.4f);
    glVertex2f(.4f,0.4f);



     glVertex2f(-.8f,0.5f);
    glVertex2f(-.7f,0.5f);
    glVertex2f(-.6f,0.5f);
    glVertex2f(-.5f,0.5f);
    glVertex2f(-.4f,0.5f);
    glVertex2f(-.3f,0.5);
    glVertex2f(-.2f,0.5);
    glVertex2f(-.1f,0.5f);
    glVertex2f(.1f,0.5f);
    glVertex2f(.2f,0.5f);
    glVertex2f(.3f,0.5f);
    glVertex2f(.4f,0.5f);



     glVertex2f(-.8f,0.6f);
    glVertex2f(-.7f,0.6f);
    glVertex2f(-.6f,0.6f);
    glVertex2f(-.5f,0.6f);
    glVertex2f(-.4f,0.6f);
    glVertex2f(-.3f,0.6);
    glVertex2f(-.2f,0.6);
    glVertex2f(-.1f,0.6f);
    glVertex2f(.1f,0.6f);
    glVertex2f(.2f,0.6f);
    glVertex2f(.3f,0.6f);
    glVertex2f(.4f,0.6f);




     glVertex2f(-.8f,0.7f);
    glVertex2f(-.7f,0.7f);
    glVertex2f(-.6f,0.7f);
    glVertex2f(-.5f,0.7f);
    glVertex2f(-.4f,0.7f);
    glVertex2f(-.3f,0.7);
    glVertex2f(-.2f,0.7);
    glVertex2f(-.1f,0.7f);
    glVertex2f(.1f,0.7f);
    glVertex2f(.2f,0.7f);
    glVertex2f(.3f,0.7f);
    glVertex2f(.4f,0.7f);


    glVertex2f(.3f,0.0f);
    glEnd();

    glPopMatrix();




    glEnd();

    glFlush();

}



int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("GraphicsProject");
	glutInitWindowSize(300,300);


	glutDisplayFunc(initial);

	glutTimerFunc(100, sunUpdate, 0);
    glutTimerFunc(100, crowdUpdate1, 0);

    glutTimerFunc(100, sunSetUpdate, 0);
    glutTimerFunc(100, crowdUpdate12, 0);
	glutTimerFunc(100, crowdUpdate2, 0);
	glutTimerFunc(100, crowdUpdate3, 0);
	glutTimerFunc(100, crowdUpdate4, 0);
	glutTimerFunc(100, crowdUpdate5, 0);
	glutTimerFunc(100, crowdUpdate6, 0);
	glutTimerFunc(100, crowdUpdate7, 0);
	glutTimerFunc(100, crowdUpdate8, 0);
	glutTimerFunc(100, crowdUpdate9, 0);
	glutTimerFunc(100, crowdUpdate10, 0);
	glutTimerFunc(100, carUpdate1, 0);
	glutTimerFunc(100, carUpdate2, 0);

	glutTimerFunc(100, ncrowdUpdate12, 0);
	glutTimerFunc(100, ncrowdUpdate2, 0);
	glutTimerFunc(100, ncrowdUpdate3, 0);
	glutTimerFunc(100, ncrowdUpdate4, 0);
	glutTimerFunc(100, ncrowdUpdate5, 0);
	glutTimerFunc(100, ncrowdUpdate6, 0);
	glutTimerFunc(100, ncrowdUpdate7, 0);
	glutTimerFunc(100, ncrowdUpdate8, 0);
	glutTimerFunc(100, ncrowdUpdate9, 0);
	glutTimerFunc(100, ncrowdUpdate10, 0);
	glutTimerFunc(100, ncarUpdate1, 0);
	glutTimerFunc(100, ncarUpdate2, 0);
	glutTimerFunc(100, moonUpdate, 0);

	//===================================================================================================== WinterView start

	glutTimerFunc(100, update61, 0);
    glutTimerFunc(100, update28, 0);
    glutTimerFunc(100, update29, 0);
    glutTimerFunc(100, update30, 0);

	//===================================================================================================== WinterView end

	//===================================================================================================== RainyView start

	glutTimerFunc(100, update6, 0);

	//===================================================================================================== RainyView end

    glutKeyboardFunc(handleKeypress);

    glutTimerFunc(500, birdupdate, 0);
    glutTimerFunc(500, birdupdate1, 0);

    glutMouseFunc(Mouse);

	glutMainLoop();

	return 0;
}
