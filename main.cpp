#include <windows.h>
#include <GL\glut.h>
#include<iostream>
#include<stdlib.h>
#include <stdio.h>
#include <math.h>
#include <mmsystem.h>
using namespace std;


static float cloud1 = -120;
static float cloud2 = -50;
static float cloud3 = -70;
static float cloud4 = -110;
static float cloud5 = -130;
static float sun = -60;
static float moon= -60;
///static float car = -60;
static float tmove = -40;
static float twheel =-40;
static float cmove = -30;
static float cwheel =-30;




void declare(char *string)
{
    while(*string)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, *string++);
}


void delay()
{
    for(int i=0; i<100000000; i++);
}
void circle(GLfloat rx, GLfloat ry, GLfloat x, GLfloat y)
{
    int i=0;
    float angle;
    GLfloat PI= 2.0f * 3.1416;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x,y);
    for(i=0; i<100; i++)
    {
        angle = 2 * PI * i/100;
        glVertex2f(x+(cos(angle)*rx),y+(sin(angle)* ry));
    }
    glEnd();
}

void daycloudMove()
{
    cloud1 += 2.50;
    if(cloud1 > 800)
    {
        cloud1 = -20;
    }
    glutPostRedisplay();
    cloud2 += 2.5;
    if(cloud2 > 800)
    {
        cloud2 = -60;
    }
    glutPostRedisplay();
    cloud3 += 2.50;
    if(cloud3 > 800)
    {
        cloud3 = -80;
    }
    glutPostRedisplay();
    cloud4 += 2.4;

    if(cloud4 > 800)
    {
        cloud4 = -110;
    }
    glutPostRedisplay();

    cloud5 += 2.5;
    if(cloud5 > 600)
    {
        cloud5 = -130;
    }
    glutPostRedisplay();

    sun+=0.5;
    if(sun>400)
    {
        sun=-10;
    }
    glutPostRedisplay();

}

void daymovingCloud()
{
    //sun..................................
    glPushMatrix();
    glTranslatef(0,sun,1);
    glColor3f(1.3,1.0,0.0);
    circle(30,30,730,490);
    glPopMatrix();

    glColor3f(1,1,1);
    daycloudMove();
    glPushMatrix();
    glTranslatef(cloud1,1,0);
    glColor3f(1.0, 1.0, 1.0);
    circle(40,18,800,500);
    circle(17,24,810,500);
    circle(17,24,790,500);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(cloud2,-2,0);
    circle(40,18,140,520);
    circle(19,24,150,520);
    circle(19,24,130,520);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(cloud3,-3,0);
    circle(40,18,250,505);
    circle(19,24,260,505);
    circle(19,24,240,505);

    glPopMatrix();
    glPushMatrix();
    glTranslatef(cloud4,1,0);
    circle(40,18,30,570);
    circle(19,24,40,570);
    circle(19,24,20,570);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(cloud5,1,0);

    circle(43,18,730,550);
    circle(17,22,745,550);
    circle(17,22,719,550);

    glPopMatrix();




}
void nightcloudMove()
{
    cloud1 += 2.50;
    if(cloud1 > 800)
    {
        cloud1 = -20;
    }
    glutPostRedisplay();
    cloud2 += 2.5;
    if(cloud2 > 800)
    {
        cloud2 = -60;
    }
    glutPostRedisplay();
    cloud3 += 2.50;
    if(cloud3 > 800)
    {
        cloud3 = -80;
    }
    glutPostRedisplay();
    cloud4 += 2.4;

    if(cloud4 > 800)
    {
        cloud4 = -110;
    }
    glutPostRedisplay();

    cloud5 += 2.5;
    if(cloud5 > 600)
    {
        cloud5 = -130;
    }
    glutPostRedisplay();

    moon+=0.5;
    if(moon>400)
    {
        moon=-10;
    }
    glutPostRedisplay();

}


void nightmovingCloud()
{
    //moon..................................
    glPushMatrix();
    glTranslatef(0,moon,1);
    glColor3f(255,255,255);
    circle(30,30,730,490);
    glPopMatrix();

    glColor3f(1,1,1);
    daycloudMove();
    glPushMatrix();
    glTranslatef(cloud1,1,0);
    glColor3f(0.4f, 0.4f, 0.4f);
    circle(40,18,800,500);
    circle(17,24,810,500);
    circle(17,24,790,500);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(cloud2,-2,0);
    circle(40,18,140,520);
    circle(19,24,150,520);
    circle(19,24,130,520);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(cloud3,-3,0);
    circle(40,18,250,505);
    circle(19,24,260,505);
    circle(19,24,240,505);

    glPopMatrix();
    glPushMatrix();
    glTranslatef(cloud4,1,0);
    circle(40,18,30,570);
    circle(19,24,40,570);
    circle(19,24,20,570);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(cloud5,1,0);

    circle(43,18,730,550);
    circle(17,22,745,550);
    circle(17,22,719,550);

    glPopMatrix();




}
void raincloudMove()
{
    cloud1 += 2.50;
    if(cloud1 > 800)
    {
        cloud1 = -20;
    }
    glutPostRedisplay();
    cloud2 += 2.5;
    if(cloud2 > 800)
    {
        cloud2 = -60;
    }
    glutPostRedisplay();
    cloud3 += 2.50;
    if(cloud3 > 800)
    {
        cloud3 = -80;
    }
    glutPostRedisplay();
    cloud4 += 2.4;

    if(cloud4 > 800)
    {
        cloud4 = -110;
    }
    glutPostRedisplay();

    cloud5 += 2.5;
    if(cloud5 > 600)
    {
        cloud5 = -130;
    }
    glutPostRedisplay();

}

void rainmovingCloud()
{

    glColor3f(1,1,1);
    daycloudMove();
    glPushMatrix();
    glTranslatef(cloud1,1,0);
    glColor3f(1.0, 1.0, 1.0);
    circle(40,18,800,500);
    circle(17,24,810,500);
    circle(17,24,790,500);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(cloud2,-2,0);
    circle(40,18,140,520);
    circle(19,24,150,520);
    circle(19,24,130,520);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(cloud3,-3,0);
    circle(40,18,250,505);
    circle(19,24,260,505);
    circle(19,24,240,505);

    glPopMatrix();
    glPushMatrix();
    glTranslatef(cloud4,1,0);
    circle(40,18,30,570);
    circle(19,24,40,570);
    circle(19,24,20,570);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(cloud5,1,0);

    circle(43,18,730,550);
    circle(17,22,745,550);
    circle(17,22,719,550);

    glPopMatrix();

}


void daysky()
{
    glColor3f(0.2, 0.70, 1.0);
    glBegin(GL_POLYGON);
    glVertex2i(0,600);
    glVertex2i(900,600);
    glVertex2i(900, 400);
    glVertex2i(0, 400);
    glEnd();
}

void nightsky()
{
    glColor3f(0.1f, 0.1f, 0.2f);
    glBegin(GL_POLYGON);
    glVertex2i(0,600);
    glVertex2i(900,600);
    glVertex2i(900, 400);
    glVertex2i(0, 400);
    glEnd();

}
void rainsky()
{
    glColor3f(0.1f, 0.3f, 0.4f);
    glBegin(GL_POLYGON);
    glVertex2i(0,600);
    glVertex2i(900,600);
    glVertex2i(900, 400);
    glVertex2i(0, 400);
    glEnd();
}


//train.......................................................


void trainMove()
{
    tmove  += 5.5 ;
    if (tmove >1100)
    {
        tmove = -60;
    }
    glutPostRedisplay();

    twheel+=5.5;
    if(twheel>1100)
    {
        twheel=-60;

    }
    glutPostRedisplay();

}

void train()
{
    //train block 1........................................
    glBegin(GL_QUADS);

    glColor3ub(58, 90, 145);
    glVertex2d(20,90);
    glVertex2d(100,90);
    glVertex2d(100,30);
    glVertex2d(20,30);


    glColor3ub(158, 100, 145);
    glVertex2d(15,100);
    glVertex2d(90,100);
    glVertex2d(100,90);
    glVertex2d(20,90);

    glColor3ub(158, 100, 45);
    glVertex2d(15,100);
    glVertex2d(20,90);
    glVertex2d(20,30);
    glVertex2d(15,40);

    glColor3ub(158, 150, 145);
    glVertex2d(80,110);
    glVertex2d(90,110);
    glVertex2d(90,100);
    glVertex2d(80,100);

    glColor3ub(158, 150, 145);
    glVertex2d(0,50);
    glVertex2d(20,50);
    glVertex2d(20,40);
    glVertex2d(0,40);

    //train  block 2.........................................................

    glColor3ub(58, 90, 145);
    glVertex2d(-80,90);
    glVertex2d(0,90);
    glVertex2d(0,30);
    glVertex2d(-80,30);


    glColor3ub(158, 100, 145);
    glVertex2d(-85,100);
    glVertex2d(-5,100);
    glVertex2d(0,90);
    glVertex2d(-80,90);

    glColor3ub(158, 100, 45);
    glVertex2d(-85,100);
    glVertex2d(-80,90);
    glVertex2d(-80,30);
    glVertex2d(-85,40);

    glColor3ub(158, 150, 145);
    glVertex2d(-100,50);
    glVertex2d(-80,50);
    glVertex2d(-80,40);
    glVertex2d(-100,40);

    //train blocl 3...............................................
    glColor3ub(58, 90, 145);
    glVertex2d(-180,90);
    glVertex2d(-100,90);
    glVertex2d(-100,30);
    glVertex2d(-180,30);


    glColor3ub(158, 100, 145);
    glVertex2d(-185,100);
    glVertex2d(-105,100);
    glVertex2d(-100,90);
    glVertex2d(-180,90);

    glColor3ub(158, 100, 45);
    glVertex2d(-185,100);
    glVertex2d(-180,90);
    glVertex2d(-180,30);
    glVertex2d(-185,40);



    glEnd();


}

void movingTrain()
{
    trainMove();
    glPushMatrix();
    glTranslatef(tmove, 0,0);
    train();
    glPopMatrix();

//train wheel....................................................

    glPushMatrix();
    glTranslatef(twheel,0,0);
    glColor3f(0.0,0.0,0.0);
    circle(10,10,85,30);
    circle(10,10,45,30);

    circle(10,10,-20,30);
    circle(10,10,-60,30);

    circle(10,10,-120,30);
    circle(10,10,-160,30);

    glColor3f(1.0,1.0,1.0);
    circle(5,5,85,30);
    circle(5,5,45,30);

    circle(5,5,-20,30);
    circle(5,5,-60,30);

    circle(5,5,-120,30);
    circle(5,5,-160,30);

    glPopMatrix();

}

//Start------------------------------------------------------------
//---------------------------------------------------------------------
//-------------------------------------------------------------------------


void t_tree()
{
    glPushMatrix();
    glScalef(1.3, 1.7, 0.0);
    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3ub(255, 153, 51);

    glVertex2f(18.0f, 32.0f);
    glVertex2f(22.0f, 52.0f);
    glVertex2f(22.0f, 58.0f);
    glVertex2f(20.0f, 67.0f);
    glVertex2f(30.0f, 67.0f);
    glVertex2f(28.0f, 58.0f);
    glVertex2f(28.0f, 52.0f);
    glVertex2f(30.0f, 32.0f);
    glVertex2f(18.0f, 32.0f);

    glEnd();

    glColor3f(0.0f, 1.0f, 0.0f);
    circle(10,15,25,85);    //middle

    glColor3ub(102, 255, 102);
    circle(7,10,16,78);    //left

    glColor3ub(102, 255, 102);
    circle(7,10,35,78);    //right

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 153, 51);
    glVertex2f(20.0f, 67.0f);   //left
    glVertex2f(15.0f, 77.0f);
    glVertex2f(24.0f, 67.0f);

    glVertex2f(23.0f, 67.0f);  //middle
    glVertex2f(25.0f, 82.0f);
    glVertex2f(27.0f, 67.0f);

    glVertex2f(26.0f, 67.0f);  //right
    glVertex2f(35.0f, 77.0f);
    glVertex2f(30.0f, 67.0f);
    glEnd();

    glPopMatrix();
    glPopMatrix();
}

void field()
{
    glBegin(GL_QUADS);
    glColor3ub(34, 139, 34);

    glVertex2f(0.0f, 0.0f);
    glVertex2f(900.0f, 0.0f);
    glVertex2f(900.0f, 400.0f);
    glVertex2f(0.0f, 400.0f);

    glEnd();


}


//.......................Road.............................

void road()
{
    glBegin(GL_QUADS);
    glColor3ub(112, 128, 144);

    glVertex2f(800.0f, 130.0f);    ///main road to terminal road
    glVertex2f(835.0f, 168.0f);
    glVertex2f(900.0f, 168.0f);
    glVertex2f(900.0f, 130.0f);

    glVertex2f(900.0f, 130.0f);   ///main road
    glVertex2f(0.0f, 130.0f);
    glVertex2f(0.0f, 60.0f);
    glVertex2f(900.0f, 60.0f);

    glEnd();
}

void d_r_border()
{

    glBegin(GL_QUADS);
    glColor3ub(255, 246, 143);    //left-first light head
    glVertex2f(55.0f, 150.0f);
    glVertex2f(52.0f, 165.0f);
    glVertex2f(68.0f, 165.0f);
    glVertex2f(65.0f, 150.0f);

    glVertex2f(145.0f, 150.0f);   //second
    glVertex2f(142.0f, 165.0f);
    glVertex2f(158.0f, 165.0f);
    glVertex2f(155.0f, 150.0f);

    glVertex2f(245.0f, 150.0f);   //3rd
    glVertex2f(242.0f, 165.0f);
    glVertex2f(258.0f, 165.0f);
    glVertex2f(255.0f, 150.0f);

    glVertex2f(345.0f, 150.0f);   //4th
    glVertex2f(342.0f, 165.0f);
    glVertex2f(358.0f, 165.0f);
    glVertex2f(355.0f, 150.0f);

    glVertex2f(445.0f, 150.0f);   //5th
    glVertex2f(442.0f, 165.0f);
    glVertex2f(458.0f, 165.0f);
    glVertex2f(455.0f, 150.0f);

    glVertex2f(545.0f, 150.0f);   //6th
    glVertex2f(542.0f, 165.0f);
    glVertex2f(558.0f, 165.0f);
    glVertex2f(555.0f, 150.0f);

    glVertex2f(645.0f, 150.0f);   //7th
    glVertex2f(642.0f, 165.0f);
    glVertex2f(658.0f, 165.0f);
    glVertex2f(655.0f, 150.0f);

    glVertex2f(885.0f, 150.0f);   //8th
    glVertex2f(882.0f, 165.0f);
    glVertex2f(898.0f, 165.0f);
    glVertex2f(895.0f, 150.0f);

    //black............................................
    glColor3ub(0,0,0);    //left-first light head

    glVertex2f(52.0f, 165.0f);
    glVertex2f(55.0f, 172.0f);
    glVertex2f(65.0f, 172.0f);
    glVertex2f(68.0f, 165.0f);

    glVertex2f(142.0f, 165.0f);   //second
    glVertex2f(145.0f, 172.0f);
    glVertex2f(155.0f, 172.0f);
    glVertex2f(158.0f, 165.0f);

    glVertex2f(242.0f, 165.0f);   //3rd
    glVertex2f(245.0f, 172.0f);
    glVertex2f(255.0f, 172.0f);
    glVertex2f(258.0f, 165.0f);

    glVertex2f(342.0f, 165.0f);   //4th
    glVertex2f(345.0f, 172.0f);
    glVertex2f(355.0f, 172.0f);
    glVertex2f(358.0f, 165.0f);

    glVertex2f(442.0f, 165.0f);   //5th
    glVertex2f(445.0f, 172.0f);
    glVertex2f(455.0f, 172.0f);
    glVertex2f(458.0f, 165.0f);

    glVertex2f(542.0f, 165.0f);   //6th
    glVertex2f(545.0f, 172.0f);
    glVertex2f(555.0f, 172.0f);
    glVertex2f(558.0f, 165.0f);

    glVertex2f(642.0f, 165.0f);   //7th
    glVertex2f(645.0f, 172.0f);
    glVertex2f(655.0f, 172.0f);
    glVertex2f(658.0f, 165.0f);

    glVertex2f(882.0f, 165.0f);   //8th
    glVertex2f(885.0f, 172.0f);
    glVertex2f(895.0f, 172.0f);
    glVertex2f(898.0f, 165.0f);

    //...........................................................
    glEnd();


    glColor3f(1.0, 1.0, 1.0);     // zebra crossing
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2i(665, 125);
    glVertex2i(695, 125);

    glVertex2i(665, 118);
    glVertex2i(695, 118);

    glVertex2i(665, 111);
    glVertex2i(695, 111);

    glVertex2i(665, 104);
    glVertex2i(695, 104);

    glVertex2i(665, 97);
    glVertex2i(695, 97);

    glVertex2i(665, 83);
    glVertex2i(695, 83);

    glVertex2i(665, 76);
    glVertex2i(695, 76);

    glVertex2i(665, 69);
    glVertex2i(695, 69);

    glVertex2i(665, 62);
    glVertex2i(695, 62);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);     // white line
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(60, 93);          //first road light left
    glVertex2i(60, 150);

    glVertex2i(150, 93);          //second road light left
    glVertex2i(150, 150);

    glVertex2i(250, 93);          //third road light left
    glVertex2i(250, 150);

    glVertex2i(350, 93);          //fourth road light left
    glVertex2i(350, 150);

    glVertex2i(450, 93);          //fourth road light right
    glVertex2i(450, 150);

    glVertex2i(550, 93);          //third road light right
    glVertex2i(550, 150);

    glVertex2i(650, 93);          //second road light right
    glVertex2i(650, 150);

    glVertex2i(890, 93);          //first road light right
    glVertex2i(890, 150);
    glEnd();


    glColor3f(1.0, 1.0, 1.0);     // white line
    glLineWidth(9);
    glBegin(GL_LINES);
    glVertex2i(0, 93);
    glVertex2i(700, 93);

    glVertex2i(850, 93);
    glVertex2i(900, 93);


    glColor3f(0.0, 0.0, 0.0);      // black border
    glVertex2i(5, 93);
    glVertex2i(20, 93);

    glVertex2i(35, 93);
    glVertex2i(50, 93);

    glVertex2i(65, 93);
    glVertex2i(80, 93);

    glVertex2i(95, 93);
    glVertex2i(110, 93);

    glVertex2i(125, 93);
    glVertex2i(140, 93);


    glVertex2i(155, 93);
    glVertex2i(170, 93);

    glVertex2i(185, 93);
    glVertex2i(200, 93);

    glVertex2i(215, 93);
    glVertex2i(230, 93);

    glVertex2i(245, 93);
    glVertex2i(260, 93);

    glVertex2i(275, 93);
    glVertex2i(290, 93);

    glVertex2i(305, 93);
    glVertex2i(320, 93);

    glVertex2i(335, 93);
    glVertex2i(350, 93);

    glVertex2i(365, 93);
    glVertex2i(380, 93);

    glVertex2i(395, 93);
    glVertex2i(410, 93);

    glVertex2i(425, 93);
    glVertex2i(440, 93);

    glVertex2i(455, 93);
    glVertex2i(470, 93);

    glVertex2i(485, 93);
    glVertex2i(500, 93);

    glVertex2i(515, 93);
    glVertex2i(530, 93);

    glVertex2i(545, 93);
    glVertex2i(560, 93);

    glVertex2i(575, 93);
    glVertex2i(590, 93);

    glVertex2i(605, 93);
    glVertex2i(620, 93);

    glVertex2i(635, 93);
    glVertex2i(650, 93);

    glVertex2i(665, 93);
    glVertex2i(680, 93);

    glVertex2i(695, 93);
    glVertex2i(700, 93);

    glVertex2i(845, 93);  //after space
    glVertex2i(860, 93);
    glEnd();

}


//night...................................
void n_road()
{
    glBegin(GL_QUADS);
    glColor3ub(84, 84, 84);

    glVertex2f(800.0f, 130.0f);
    glVertex2f(835.0f, 168.0f);
    glVertex2f(900.0f, 168.0f);
    glVertex2f(900.0f, 130.0f);

    glVertex2f(900.0f, 130.0f);
    glVertex2f(0.0f, 130.0f);
    glVertex2f(0.0f, 60.0f);
    glVertex2f(900.0f, 60.0f);

    glEnd();
}

void n_r_border()
{

    glBegin(GL_QUADS);
    glColor3ub(255, 215, 0);    //left-first light head
    glVertex2f(55.0f, 150.0f);
    glVertex2f(52.0f, 165.0f);
    glVertex2f(68.0f, 165.0f);
    glVertex2f(65.0f, 150.0f);

    glVertex2f(145.0f, 150.0f);   //second
    glVertex2f(142.0f, 165.0f);
    glVertex2f(158.0f, 165.0f);
    glVertex2f(155.0f, 150.0f);

    glVertex2f(245.0f, 150.0f);   //3rd
    glVertex2f(242.0f, 165.0f);
    glVertex2f(258.0f, 165.0f);
    glVertex2f(255.0f, 150.0f);

    glVertex2f(345.0f, 150.0f);   //4th
    glVertex2f(342.0f, 165.0f);
    glVertex2f(358.0f, 165.0f);
    glVertex2f(355.0f, 150.0f);

    glVertex2f(445.0f, 150.0f);   //5th
    glVertex2f(442.0f, 165.0f);
    glVertex2f(458.0f, 165.0f);
    glVertex2f(455.0f, 150.0f);

    glVertex2f(545.0f, 150.0f);   //6th
    glVertex2f(542.0f, 165.0f);
    glVertex2f(558.0f, 165.0f);
    glVertex2f(555.0f, 150.0f);

    glVertex2f(645.0f, 150.0f);   //7th
    glVertex2f(642.0f, 165.0f);
    glVertex2f(658.0f, 165.0f);
    glVertex2f(655.0f, 150.0f);

    glVertex2f(885.0f, 150.0f);   //8th
    glVertex2f(882.0f, 165.0f);
    glVertex2f(898.0f, 165.0f);
    glVertex2f(895.0f, 150.0f);

    //black............................................
    glColor3ub(0,0,0);    //left-first light head

    glVertex2f(52.0f, 165.0f);
    glVertex2f(55.0f, 172.0f);
    glVertex2f(65.0f, 172.0f);
    glVertex2f(68.0f, 165.0f);

    glVertex2f(142.0f, 165.0f);   //second
    glVertex2f(145.0f, 172.0f);
    glVertex2f(155.0f, 172.0f);
    glVertex2f(158.0f, 165.0f);

    glVertex2f(242.0f, 165.0f);   //3rd
    glVertex2f(245.0f, 172.0f);
    glVertex2f(255.0f, 172.0f);
    glVertex2f(258.0f, 165.0f);

    glVertex2f(342.0f, 165.0f);   //4th
    glVertex2f(345.0f, 172.0f);
    glVertex2f(355.0f, 172.0f);
    glVertex2f(358.0f, 165.0f);

    glVertex2f(442.0f, 165.0f);   //5th
    glVertex2f(445.0f, 172.0f);
    glVertex2f(455.0f, 172.0f);
    glVertex2f(458.0f, 165.0f);

    glVertex2f(542.0f, 165.0f);   //6th
    glVertex2f(545.0f, 172.0f);
    glVertex2f(555.0f, 172.0f);
    glVertex2f(558.0f, 165.0f);

    glVertex2f(642.0f, 165.0f);   //7th
    glVertex2f(645.0f, 172.0f);
    glVertex2f(655.0f, 172.0f);
    glVertex2f(658.0f, 165.0f);

    glVertex2f(882.0f, 165.0f);   //8th
    glVertex2f(885.0f, 172.0f);
    glVertex2f(895.0f, 172.0f);
    glVertex2f(898.0f, 165.0f);

    //...........................................................
    glEnd();


    glColor3f(1.0, 1.0, 1.0);     // zebra crossing
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2i(665, 125);
    glVertex2i(695, 125);

    glVertex2i(665, 118);
    glVertex2i(695, 118);

    glVertex2i(665, 111);
    glVertex2i(695, 111);

    glVertex2i(665, 104);
    glVertex2i(695, 104);

    glVertex2i(665, 97);
    glVertex2i(695, 97);

    glVertex2i(665, 83);
    glVertex2i(695, 83);

    glVertex2i(665, 76);
    glVertex2i(695, 76);

    glVertex2i(665, 69);
    glVertex2i(695, 69);

    glVertex2i(665, 62);
    glVertex2i(695, 62);
    glEnd();


    glColor3f(0.0, 0.0, 0.0);     // white line
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(60, 93);          //first road light left
    glVertex2i(60, 150);

    glVertex2i(150, 93);          //second road light left
    glVertex2i(150, 150);

    glVertex2i(250, 93);          //third road light left
    glVertex2i(250, 150);

    glVertex2i(350, 93);          //fourth road light left
    glVertex2i(350, 150);

    glVertex2i(450, 93);          //fourth road light right
    glVertex2i(450, 150);

    glVertex2i(550, 93);          //third road light right
    glVertex2i(550, 150);

    glVertex2i(650, 93);          //second road light right
    glVertex2i(650, 150);

    glVertex2i(890, 93);          //first road light right
    glVertex2i(890, 150);
    glEnd();


    glColor3f(1.0, 1.0, 1.0);     // white line
    glLineWidth(9);
    glBegin(GL_LINES);
    glVertex2i(0, 93);
    glVertex2i(700, 93);

    glVertex2i(850, 93);
    glVertex2i(900, 93);


    glColor3f(0.0, 0.0, 0.0);      // black border
    glVertex2i(5, 93);
    glVertex2i(20, 93);

    glVertex2i(35, 93);
    glVertex2i(50, 93);

    glVertex2i(65, 93);
    glVertex2i(80, 93);

    glVertex2i(95, 93);
    glVertex2i(110, 93);

    glVertex2i(125, 93);
    glVertex2i(140, 93);


    glVertex2i(155, 93);
    glVertex2i(170, 93);

    glVertex2i(185, 93);
    glVertex2i(200, 93);

    glVertex2i(215, 93);
    glVertex2i(230, 93);

    glVertex2i(245, 93);
    glVertex2i(260, 93);

    glVertex2i(275, 93);
    glVertex2i(290, 93);

    glVertex2i(305, 93);
    glVertex2i(320, 93);

    glVertex2i(335, 93);
    glVertex2i(350, 93);

    glVertex2i(365, 93);
    glVertex2i(380, 93);

    glVertex2i(395, 93);
    glVertex2i(410, 93);

    glVertex2i(425, 93);
    glVertex2i(440, 93);

    glVertex2i(455, 93);
    glVertex2i(470, 93);

    glVertex2i(485, 93);
    glVertex2i(500, 93);

    glVertex2i(515, 93);
    glVertex2i(530, 93);

    glVertex2i(545, 93);
    glVertex2i(560, 93);

    glVertex2i(575, 93);
    glVertex2i(590, 93);

    glVertex2i(605, 93);
    glVertex2i(620, 93);

    glVertex2i(635, 93);
    glVertex2i(650, 93);

    glVertex2i(665, 93);
    glVertex2i(680, 93);

    glVertex2i(695, 93);
    glVertex2i(700, 93);

    glVertex2i(845, 93);  //after space
    glVertex2i(860, 93);

    glVertex2i(875, 93);
    glVertex2i(890, 93);


    glEnd();


}

//...................................
//.....................................

void house1()
{

    glBegin(GL_QUADS);
    glColor3ub(0, 128, 128);
    glVertex2f(30.0f, 380.0f);      //front
    glVertex2f(30.0f, 445.0f);
    glVertex2f(80.0f, 445.0f);
    glVertex2f(80.0f, 380.0f);


    glColor3ub(0, 128, 128);
    glVertex2f(30.0f, 380.0f);       //left side
    glVertex2f(20.0f, 390.0f);
    glVertex2f(20.0f, 455.0f);
    glVertex2f(30.0f, 445.0f);

    glColor3ub(159, 226, 191);
    glVertex2f(30.0f, 445.0f);
    glVertex2f(20.0f, 455.0f);
    glVertex2f(70.0f, 455.0f);
    glVertex2f(80.0f, 445.0f);

    glColor3ub(208, 223, 204);   //window left up
    glVertex2f(33.0f, 430.0f);
    glVertex2f(33.0f, 440.0f);
    glVertex2f(45.0f, 440.0f);
    glVertex2f(45.0f, 430.0f);

    glVertex2f(49.0f, 430.0f);
    glVertex2f(49.0f, 440.0f);
    glVertex2f(61.0f, 440.0f);
    glVertex2f(61.0f, 430.0f);

    glVertex2f(65.0f, 430.0f);
    glVertex2f(65.0f, 440.0f);
    glVertex2f(77.0f, 440.0f);
    glVertex2f(77.0f, 430.0f);

    glVertex2f(33.0f, 410.0f);   //middle window
    glVertex2f(33.0f, 420.0f);
    glVertex2f(45.0f, 420.0f);
    glVertex2f(45.0f, 410.0f);

    glVertex2f(49.0f, 410.0f);
    glVertex2f(49.0f, 420.0f);
    glVertex2f(61.0f, 420.0f);
    glVertex2f(61.0f, 410.0f);

    glVertex2f(65.0f, 410.0f);
    glVertex2f(65.0f, 420.0f);
    glVertex2f(77.0f, 420.0f);
    glVertex2f(77.0f, 410.0f);


    glVertex2f(33.0f, 390.0f);   //bottom window
    glVertex2f(33.0f, 400.0f);
    glVertex2f(45.0f, 400.0f);
    glVertex2f(45.0f, 390.0f);

    glVertex2f(49.0f, 390.0f);
    glVertex2f(49.0f, 400.0f);
    glVertex2f(61.0f, 400.0f);
    glVertex2f(61.0f, 390.0f);

    glVertex2f(65.0f, 390.0f);
    glVertex2f(65.0f, 400.0f);
    glVertex2f(77.0f, 400.0f);
    glVertex2f(77.0f, 390.0f);

    glEnd();
}

//.....................................................
//.................................................

void house3()
{

    glBegin(GL_QUADS);
    glColor3ub(241, 148, 138);
    glVertex2f(120.0f, 380.0f);      //front
    glVertex2f(120.0f, 460.0f);
    glVertex2f(170.0f, 460.0f);
    glVertex2f(170.0f, 380.0f);


    glColor3ub(241, 148, 138);
    glVertex2f(120.0f, 380.0f);       //left side
    glVertex2f(110.0f, 390.0f);
    glVertex2f(110.0f, 470.0f);
    glVertex2f(120.0f, 460.0f);

    glColor3ub(238, 223, 204);
    glVertex2f(120.0f, 460.0f);
    glVertex2f(110.0f, 470.0f);
    glVertex2f(160.0f, 470.0f);
    glVertex2f(170.0f, 460.0f);


    glColor3ub(208, 223, 204);   //window 4th floor
    glVertex2f(122.0f, 455.0f);
    glVertex2f(122.0f, 445.0f);
    glVertex2f(132.0f, 445.0f);
    glVertex2f(132.0f, 455.0f);

    glVertex2f(134.0f, 455.0f);
    glVertex2f(134.0f, 445.0f);
    glVertex2f(144.0f, 445.0f);
    glVertex2f(144.0f, 455.0f);

    glVertex2f(146.0f, 455.0f);
    glVertex2f(146.0f, 445.0f);
    glVertex2f(156.0f, 445.0f);
    glVertex2f(156.0f, 455.0f);

    glVertex2f(158.0f, 455.0f);
    glVertex2f(158.0f, 445.0f);
    glVertex2f(168.0f, 445.0f);
    glVertex2f(168.0f, 455.0f);


    glColor3ub(208, 223, 204);   //window 3rd floor
    glVertex2f(122.0f, 425.0f);
    glVertex2f(122.0f, 435.0f);
    glVertex2f(132.0f, 435.0f);
    glVertex2f(132.0f, 425.0f);

    glVertex2f(134.0f, 425.0f);
    glVertex2f(134.0f, 435.0f);
    glVertex2f(144.0f, 435.0f);
    glVertex2f(144.0f, 425.0f);

    glVertex2f(146.0f, 425.0f);
    glVertex2f(146.0f, 435.0f);
    glVertex2f(156.0f, 435.0f);
    glVertex2f(156.0f, 425.0f);

    glVertex2f(158.0f, 425.0f);
    glVertex2f(158.0f, 435.0f);
    glVertex2f(168.0f, 435.0f);
    glVertex2f(168.0f, 425.0f);


    glVertex2f(122.0f, 405.0f);        //middle window
    glVertex2f(122.0f, 415.0f);
    glVertex2f(132.0f, 415.0f);
    glVertex2f(132.0f, 405.0f);

    glVertex2f(134.0f, 405.0f);
    glVertex2f(134.0f, 415.0f);
    glVertex2f(144.0f, 415.0f);
    glVertex2f(144.0f, 405.0f);

    glVertex2f(146.0f, 405.0f);
    glVertex2f(146.0f, 415.0f);
    glVertex2f(156.0f, 415.0f);
    glVertex2f(156.0f, 405.0f);

    glVertex2f(158.0f, 405.0f);
    glVertex2f(158.0f, 415.0f);
    glVertex2f(168.0f, 415.0f);
    glVertex2f(168.0f, 405.0f);


    glVertex2f(122.0f, 385.0f);    //bottom window
    glVertex2f(122.0f, 395.0f);
    glVertex2f(132.0f, 395.0f);
    glVertex2f(132.0f, 385.0f);

    glVertex2f(134.0f, 385.0f);
    glVertex2f(134.0f, 395.0f);
    glVertex2f(144.0f, 395.0f);
    glVertex2f(144.0f, 385.0f);

    glVertex2f(146.0f, 385.0f);
    glVertex2f(146.0f, 395.0f);
    glVertex2f(156.0f, 395.0f);
    glVertex2f(156.0f, 385.0f);

    glVertex2f(158.0f, 385.0f);
    glVertex2f(158.0f, 395.0f);
    glVertex2f(168.0f, 395.0f);
    glVertex2f(168.0f, 385.0f);
    glEnd();

}


void house2()
{

    glBegin(GL_QUADS);
    glColor3ub(255, 195, 0);
    glVertex2f(220.0f, 380.0f);      //front
    glVertex2f(220.0f, 440.0f);
    glVertex2f(260.0f, 440.0f);
    glVertex2f(260.0f, 380.0f);


    glColor3ub(255, 195, 0);
    glVertex2f(220.0f, 380.0f);       //left side
    glVertex2f(210.0f, 390.0f);
    glVertex2f(210.0f, 450.0f);
    glVertex2f(220.0f, 440.0f);

    glColor3ub(238, 223, 204);         //top
    glVertex2f(210.0f, 450.0f);
    glVertex2f(220.0f, 440.0f);
    glVertex2f(260.0f, 440.0f);
    glVertex2f(250.0f, 450.0f);

    glColor3ub(208, 223, 204);   //window bottom
    glVertex2f(222.0f, 388.0f);
    glVertex2f(232.0f, 388.0f);
    glVertex2f(232.0f, 398.0f);
    glVertex2f(222.0f, 398.0f);

    glVertex2f(235.0f, 388.0f);
    glVertex2f(245.0f, 388.0f);
    glVertex2f(245.0f, 398.0f);
    glVertex2f(235.0f, 398.0f);

    glVertex2f(248.0f, 388.0f);
    glVertex2f(258.0f, 388.0f);
    glVertex2f(258.0f, 398.0f);
    glVertex2f(248.0f, 398.0f);



    glVertex2f(222.0f, 408.0f);  //middle window
    glVertex2f(232.0f, 408.0f);
    glVertex2f(232.0f, 418.0f);
    glVertex2f(222.0f, 418.0f);

    glVertex2f(235.0f, 408.0f);
    glVertex2f(245.0f, 408.0f);
    glVertex2f(245.0f, 418.0f);
    glVertex2f(235.0f, 418.0f);

    glVertex2f(248.0f, 408.0f);
    glVertex2f(258.0f, 408.0f);
    glVertex2f(258.0f, 418.0f);
    glVertex2f(248.0f, 418.0f);



    glVertex2f(222.0f, 428.0f);    //left up window
    glVertex2f(232.0f, 428.0f);
    glVertex2f(232.0f, 438.0f);
    glVertex2f(222.0f, 438.0f);

    glVertex2f(235.0f, 428.0f);
    glVertex2f(245.0f, 428.0f);
    glVertex2f(245.0f, 438.0f);
    glVertex2f(235.0f, 438.0f);

    glVertex2f(248.0f, 428.0f);
    glVertex2f(258.0f, 428.0f);
    glVertex2f(258.0f, 438.0f);
    glVertex2f(248.0f, 438.0f);


    glEnd();

}
//........................................;;;;;;;;;;;;;;;;;;
//;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;



//...........................................
//...............Wall...................................

void t_wall()
{


    glColor3ub(205, 175, 149);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2i(0, 42);
    glVertex2i(900, 42);

    glVertex2i(0, 50);
    glVertex2i(900, 50);

    glVertex2i(0, 58);
    glVertex2i(900, 58);
//left to right
    glVertex2i(5, 42);
    glVertex2i(10, 65);

    glVertex2i(25, 42);
    glVertex2i(30, 65);

    glVertex2i(45, 42);
    glVertex2i(50, 65);

    glVertex2i(65, 42);
    glVertex2i(70, 65);

    glVertex2i(85, 42);
    glVertex2i(90, 65);

    glVertex2i(105, 42);
    glVertex2i(110, 65);

    glVertex2i(125, 42);
    glVertex2i(130, 65);

    glVertex2i(145, 42);
    glVertex2i(150, 65);

    glVertex2i(165, 42);
    glVertex2i(170, 65);

    glVertex2i(185, 42);
    glVertex2i(190, 65);

    glVertex2i(205, 42);
    glVertex2i(210, 65);

    glVertex2i(225, 42);
    glVertex2i(230, 65);

    glVertex2i(245, 42);
    glVertex2i(250, 65);

    glVertex2i(265, 42);
    glVertex2i(270, 65);

    glVertex2i(285, 42);
    glVertex2i(290, 65);

    glVertex2i(305, 42);
    glVertex2i(310, 65);

    glVertex2i(325, 42);
    glVertex2i(330, 65);

    glVertex2i(345, 42);
    glVertex2i(350, 65);

    glVertex2i(365, 42);
    glVertex2i(370, 65);

    glVertex2i(385, 42);
    glVertex2i(390, 65);

    glVertex2i(405, 42);
    glVertex2i(410, 65);

    glVertex2i(425, 42);
    glVertex2i(430, 65);

    glVertex2i(445, 42);
    glVertex2i(450, 65);

    glVertex2i(465, 42);
    glVertex2i(470, 65);

    glVertex2i(485, 42);
    glVertex2i(490, 65);

    glVertex2i(505, 42);
    glVertex2i(510, 65);

    glVertex2i(525, 42);
    glVertex2i(530, 65);

    glVertex2i(545, 42);
    glVertex2i(550, 65);

    glVertex2i(565, 42);
    glVertex2i(570, 65);

    glVertex2i(585, 42);
    glVertex2i(590, 65);

    glVertex2i(605, 42);
    glVertex2i(610, 65);

    glVertex2i(625, 42);
    glVertex2i(630, 65);

    glVertex2i(645, 42);
    glVertex2i(650, 65);

    glVertex2i(665, 42);
    glVertex2i(670, 65);

    glVertex2i(685, 42);
    glVertex2i(690, 65);

    glVertex2i(705, 42);
    glVertex2i(710, 65);

    glVertex2i(725, 42);
    glVertex2i(730, 65);

    glVertex2i(745, 42);
    glVertex2i(750, 65);

    glVertex2i(765, 42);
    glVertex2i(770, 65);

    glVertex2i(785, 42);
    glVertex2i(790, 65);

    glVertex2i(805, 42);
    glVertex2i(810, 65);

    glVertex2i(825, 42);
    glVertex2i(830, 65);

    glVertex2i(845, 42);
    glVertex2i(850, 65);

    glVertex2i(865, 42);
    glVertex2i(870, 65);

    glVertex2i(885, 42);
    glVertex2i(890, 65);
    //end.....................................
    glEnd();

}

//tREE//////////////////////////////////////////////////////////////////////////////////

void B_tree()
{

    glBegin(GL_POLYGON);
    glColor3ub(169, 50, 38);

    glVertex2f(83.0f, 390.0f);     ///tree bottom
    glVertex2f(107.0f, 390.0f);
    glVertex2f(100.0f, 410.0f);
    glVertex2f(90.0f, 410.0f);
    glVertex2f(83.0f, 390.0f);

    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(90.0f, 410.0f);     ///middle
    glVertex2f(100.0f, 410.0f);
    glVertex2f(100.0f, 430.0f);
    glVertex2f(90.0f, 430.0f);

    glEnd();

    glBegin(GL_POLYGON);                ///tree top

    glVertex2f(90.0f, 430.0f);
    glVertex2f(100.0f, 430.0f);
    glVertex2f(105.0f, 450.0f);
    glVertex2f(85.0f, 450.0f);
    glVertex2f(90.0f, 430.0f);

    glEnd();

    glColor3ub(0, 139, 69);
    circle(20,30,95,483);    //middle

    glColor3ub(124, 205, 124);
    circle(17,25,76,472);    //left

    glColor3ub(124, 205, 124);
    circle(17,25,116,472);    //right





    glBegin(GL_TRIANGLES);
    glColor3ub(169, 50, 38);
    glVertex2f(85.0f, 450.0f);   //left
    glVertex2f(92.0f, 450.0f);
    glVertex2f(78.0f, 470.0f);

    glVertex2f(92.0f, 450.0f);  //middle
    glVertex2f(98.0f, 450.0f);
    glVertex2f(95.0f, 470.0f);

    glVertex2f(98.0f, 450.0f);  //right
    glVertex2f(105.0f, 450.0f);
    glVertex2f(112.0f, 470.0f);
    glEnd();

}

//////////////////////////////////////////////////////////////////////////////////////////


void star()
{

    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(50.0f, 500.0f);
    glVertex2f(52.0f, 580.0f);
    glVertex2f(70.0f, 530.0f);
    glVertex2f(90.0f, 590.0f);
    glVertex2f(110.0f, 550.0f);
    glVertex2f(24.0f, 530.0f);
    glVertex2f(140.0f, 560.0f);
    glVertex2f(166.0f, 520.0f);
    glVertex2f(175.0f, 578.0f);
    glVertex2f(200.0f, 540.0f);
    glVertex2f(223.0f, 587.0f);
    glVertex2f(247.0f, 541.0f);

    glVertex2f(274.0f, 590.0f);
    glVertex2f(283.0f, 525.0f);
    glVertex2f(310.0f, 560.0f);
    glVertex2f(350.0f, 530.0f);
    glVertex2f(374.0f, 510.0f);
    glVertex2f(380.0f, 440.0f);
    glVertex2f(400.0f, 560.0f);
    glVertex2f(430.0f, 515.0f);
    glVertex2f(475.0f, 578.0f);
    glVertex2f(500.0f, 470.0f);
    glVertex2f(540.0f, 587.0f);
    glVertex2f(579.0f, 541.0f);


    glVertex2f(610.0f, 570.0f);
    glVertex2f(639.0f, 538.0f);
    glVertex2f(678.0f, 510.0f);
    glVertex2f(700.0f, 546.0f);
    glVertex2f(735.0f, 579.0f);
    glVertex2f(768.0f, 515.0f);
    glVertex2f(788.0f, 568.0f);
    glVertex2f(810.0f, 535.0f);
    glVertex2f(846.0f, 597.0f);
    glVertex2f(874.0f, 541.0f);
    glEnd();

}

//Airport....................................................
void terminal()
{

    glPushMatrix();
    glScalef(1.0, 1.2, 0.0);
    glPushMatrix();

    glBegin(GL_QUADS);
    glColor3ub(253, 245, 230);         //front
    glVertex2f(780.0f, 165.0f);
    glVertex2f(760.0f, 180.0f);
    glVertex2f(850.0f, 180.0f);
    glVertex2f(870.0f, 165.0f);

    glVertex2f(760.0f, 180.0f);        //front ar upor
    glVertex2f(750.0f, 190.0f);
    glVertex2f(840.0f, 190.0f);
    glVertex2f(850.0f, 180.0f);


    glVertex2f(750.0f, 190.0f);        //Next
    glVertex2f(740.0f, 200.0f);
    glVertex2f(850.0f, 200.0f);
    glVertex2f(840.0f, 190.0f);

    glVertex2f(740.0f, 200.0f);        //then
    glVertex2f(740.0f, 210.0f);
    glVertex2f(850.0f, 210.0f);
    glVertex2f(850.0f, 200.0f);

    glVertex2f(690.0f, 210.0f);        //then
    glVertex2f(680.0f, 240.0f);
    glVertex2f(890.0f, 240.0f);
    glVertex2f(900.0f, 210.0f);

    glVertex2f(680.0f, 240.0f);        // left
    glVertex2f(670.0f, 255.0f);
    glVertex2f(720.0f, 255.0f);
    glVertex2f(730.0f, 240.0f);

    glVertex2f(840.0f, 240.0f);        //right
    glVertex2f(830.0f, 255.0f);
    glVertex2f(880.0f, 255.0f);
    glVertex2f(890.0f, 240.0f);

    glVertex2f(670.0f, 255.0f);        //left
    glVertex2f(665.0f, 265.0f);
    glVertex2f(705.0f, 265.0f);
    glVertex2f(710.0f, 255.0f);

    glVertex2f(840.0f, 255.0f);        //right
    glVertex2f(835.0f, 265.0f);
    glVertex2f(870.0f, 265.0f);
    glVertex2f(880.0f, 255.0f);
    glEnd();


    glLineWidth(3);

    glBegin(GL_LINES);
    glVertex2i(691, 210);
    glVertex2i(691, 190);

    glVertex2i(701, 210);
    glVertex2i(701, 190);

    glVertex2i(711, 210);
    glVertex2i(711, 190);

    glVertex2i(721, 210);
    glVertex2i(721, 190);

    glVertex2i(731, 210);
    glVertex2i(731, 190);

    glVertex2i(739, 210);
    glVertex2i(739, 180);
///.............................................
    glVertex2i(691, 200);
    glVertex2i(739, 200);

///.....................................


///............................
    glVertex2i(739, 189);
    glVertex2i(776, 158);

///.................................

    glVertex2i(745, 196);
    glVertex2i(745, 176);

    glVertex2i(755, 186);
    glVertex2i(755, 166);

    glVertex2i(765, 178);
    glVertex2i(765, 155);

    glVertex2i(776, 169);
    glVertex2i(776, 148);


///............................
    glVertex2i(776, 158);
    glVertex2i(868, 155);

///.................................

    glVertex2i(785, 165);
    glVertex2i(785, 145);

    glVertex2i(795, 165);
    glVertex2i(795, 145);

    glVertex2i(805, 165);
    glVertex2i(805, 145);

    glVertex2i(815, 165);
    glVertex2i(815, 145);

    glVertex2i(825, 165);
    glVertex2i(825, 145);

    glVertex2i(835, 165);
    glVertex2i(835, 145);

    glVertex2i(845, 165);
    glVertex2i(845, 145);

    glVertex2i(852, 165);
    glVertex2i(852, 145);

    glVertex2i(860, 165);
    glVertex2i(860, 145);

    glVertex2i(868, 165);
    glVertex2i(868, 145);

///........................
    glVertex2i(899, 200);
    glVertex2i(850, 200);
///....................

    glVertex2i(899, 210);
    glVertex2i(899, 190);

    glVertex2i(889, 210);
    glVertex2i(889, 190);

    glVertex2i(879, 210);
    glVertex2i(879, 190);

    glVertex2i(869, 210);
    glVertex2i(869, 190);

    glVertex2i(859, 210);
    glVertex2i(859, 190);

///..........

    /*glLineWidth(1);
    glVertex2i(680, 240);
    glVertex2i(680, 220);

    glVertex2i(684, 230);
    glVertex2i(684, 210);

    glVertex2i(687, 220);
    glVertex2i(687, 200);

    glVertex2i(835, 265);
    glVertex2i(835, 255);

    glVertex2i(665, 265);
    glVertex2i(665, 245);

    glVertex2i(670, 255);
    glVertex2i(670, 235);

        glVertex2i(675, 250);
    glVertex2i(675, 230);*/


    glLineWidth(1);
    glColor3ub(200, 200, 230);
    glVertex2i(682, 265);
    glVertex2i(710, 210);

    glVertex2i(700, 265);
    glVertex2i(727, 210);

    glVertex2i(720, 255);
    glVertex2i(740, 210);

    glVertex2i(740, 240);
    glVertex2i(760, 180);

    glVertex2i(760, 240);
    glVertex2i(777, 166);

    glVertex2i(777, 240);
    glVertex2i(794, 166);

    glVertex2i(794, 240);
    glVertex2i(811, 166);

    glVertex2i(811, 240);
    glVertex2i(828, 166);

    glVertex2i(833, 255);
    glVertex2i(850, 210);

    glVertex2i(845, 265);
    glVertex2i(865, 210);

    glVertex2i(860, 265);
    glVertex2i(882, 210);

    glVertex2i(828, 240);
    glVertex2i(845, 166);


    glEnd();


///......................................
    glPointSize(6.0);
    glBegin(GL_POINTS);
    glVertex2f(837.0f, 230.0f);
    glVertex2f(840.0f, 220.0f);
    glVertex2f(843.0f, 210.0f);
    glVertex2f(845.0f, 200.0f);

    glVertex2f(821.0f, 230.0f);
    glVertex2f(824.0f, 220.0f);
    glVertex2f(827.0f, 210.0f);
    glVertex2f(830.0f, 200.0f);
    glVertex2f(832.0f, 190.0f);

    glVertex2f(805.0f, 230.0f);
    glVertex2f(808.0f, 220.0f);
    glVertex2f(811.0f, 210.0f);
    glVertex2f(814.0f, 200.0f);
    glVertex2f(816.0f, 190.0f);

    glVertex2f(788.0f, 230.0f);
    glVertex2f(790.0f, 220.0f);
    glVertex2f(793.0f, 210.0f);
    glVertex2f(795.0f, 200.0f);
    glVertex2f(798.0f, 190.0f);

    glVertex2f(770.0f, 230.0f);
    glVertex2f(774.0f, 220.0f);
    glVertex2f(776.0f, 210.0f);
    glVertex2f(778.0f, 200.0f);
    glVertex2f(780.0f, 190.0f);

    glVertex2f(770.0f, 230.0f);
    glVertex2f(774.0f, 220.0f);
    glVertex2f(776.0f, 210.0f);
    glVertex2f(778.0f, 200.0f);
    glVertex2f(780.0f, 190.0f);

    glVertex2f(754.0f, 230.0f);
    glVertex2f(756.0f, 220.0f);
    glVertex2f(758.0f, 210.0f);
    glVertex2f(761.0f, 200.0f);
    glVertex2f(763.0f, 190.0f);

    glVertex2f(738.0f, 230.0f);
    glVertex2f(742.0f, 220.0f);
    glVertex2f(744.0f, 210.0f);
    glVertex2f(746.0f, 200.0f);

    ///............................................


    glVertex2f(834.0f, 172.0f);
    glVertex2f(852.0f, 172.0f);
    glVertex2f(819.0f, 172.0f);
    glVertex2f(802.0f, 172.0f);
    glVertex2f(786.0f, 172.0f);

    ///right
    glVertex2i(870, 260);
    glVertex2i(875, 250);
    glVertex2i(880, 240);
    glVertex2i(885, 230);
    glVertex2i(890, 220);

    glVertex2i(855, 260);
    glVertex2i(858, 250);
    glVertex2i(863, 240);
    glVertex2i(865, 230);
    glVertex2i(872, 220);


    glVertex2i(843, 250);
    glVertex2i(847, 240);
    glVertex2i(851, 230);
    glVertex2i(855, 220);


    ///left

    glVertex2i(675, 260);
    glVertex2i(680, 250);
    glVertex2i(685, 240);
    glVertex2i(690, 230);
    glVertex2i(695, 220);

    glVertex2i(695, 260);
    glVertex2i(700, 250);
    glVertex2i(705, 240);
    glVertex2i(710, 230);
    glVertex2i(715, 220);


    glVertex2i(715, 250);
    glVertex2i(720, 240);
    glVertex2i(725, 230);
    glVertex2i(730, 220);


    glEnd();


    glPopMatrix();
    glPopMatrix();

}
void plane()
{

    glBegin(GL_POLYGON);
    glColor3f(255, 0, 0);

    glVertex2f(20.0f, 275.0f);
    glVertex2f(40.0f, 265.0f);
    glVertex2f(140.0f, 285.0f);
    glVertex2f(160.0f, 305.0f);
    glVertex2f(135.0f, 315.0f);   ///  body
    glVertex2f(40.0f, 295.0f);
    glVertex2f(20.0f, 275.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0, 0, 255);

    glVertex2f(20.0f, 275.0f);
    glVertex2f(40.0f, 295.0f);
    glVertex2f(20.0f, 330.0f); //Tail
    glVertex2f(10.0f, 310.0f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0, 0, 255);

    glVertex2f(80.0f, 285.0f);
    glVertex2f(40.0f, 275.0f); //Dana
    glVertex2f(20.0f, 240.0f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(255, 255, 255);

    glVertex2f(40.0f, 278.0f);
    glVertex2f(50.0f, 280.0f);
    glVertex2f(50.0f, 290.0f); //window 1
    glVertex2f(40.0f, 288.0f);

    glVertex2f(60.0f, 282.0f);
    glVertex2f(70.0f, 284.0f);
    glVertex2f(70.0f, 294.0f); //window 2
    glVertex2f(60.0f, 292.0f);

    glVertex2f(80.0f, 285.0f);
    glVertex2f(90.0f, 287.0f);
    glVertex2f(90.0f, 297.0f); //window 3
    glVertex2f(80.0f, 295.0f);

    glVertex2f(100.0f, 289.0f);
    glVertex2f(110.0f, 291.0f);
    glVertex2f(110.0f, 301.0f); //window 4
    glVertex2f(100.0f, 299.0f);

    glVertex2f(120.0f, 294.0f);
    glVertex2f(130.0f, 295.0f);
    glVertex2f(130.0f, 305.0f); //window 5
    glVertex2f(120.0f, 304.0f);



    glEnd();

}

void runway()
{

    glBegin(GL_QUADS);
    glColor3ub(112, 128, 144);

    glVertex2f(0.0f, 220.0f);
    glVertex2f(0.0f, 330.0f);
    glVertex2f(900.0f, 310.0f);
    glVertex2f(900.0f, 240.0f);

    glVertex2f(550.0f, 310.0f);
    glVertex2f(720.0f, 400.0f);
    glVertex2f(780.0f, 400.0f);
    glVertex2f(680.0f, 310.0f);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);   //white color
    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2i(600, 285); //back runway
    glVertex2i(615, 300);

    glVertex2i(625, 310);
    glVertex2i(643, 325);

    glVertex2i(658, 335);
    glVertex2i(673, 348);

    glVertex2i(690, 360);
    glVertex2i(715, 377);

    glVertex2i(733, 385);
    glVertex2i(750, 396);

    glVertex2i(0, 275);
    glVertex2i(25, 275);

    glVertex2i(0, 275);
    glVertex2i(20, 275);

    glVertex2i(50, 275);
    glVertex2i(75, 275);

    glVertex2i(100, 275);
    glVertex2i(125, 275);

    glVertex2i(150, 275);
    glVertex2i(175, 275);

    glVertex2i(200, 275);
    glVertex2i(225, 275);

    glVertex2i(250, 275);
    glVertex2i(275, 275);

    glVertex2i(300, 275);
    glVertex2i(325, 275);

    glVertex2i(350, 275);
    glVertex2i(375, 275);

    glVertex2i(400, 275);
    glVertex2i(425, 275);

    glVertex2i(450, 275);
    glVertex2i(475, 275);

    glVertex2i(500, 275);
    glVertex2i(525, 275);

    glVertex2i(550, 275);
    glVertex2i(575, 275);

    glVertex2i(600, 275);
    glVertex2i(625, 275);

    glVertex2i(650, 275);
    glVertex2i(675, 275);

    glVertex2i(700, 275);
    glVertex2i(725, 275);

    glVertex2i(750, 275);
    glVertex2i(775, 275);

    glVertex2i(800, 275);
    glVertex2i(825, 275);

    glVertex2i(850, 275);
    glVertex2i(875, 275);

    glEnd();

}

void n_runway()
{

    glBegin(GL_QUADS);
    glColor3ub(84, 84, 84);

    glVertex2f(0.0f, 220.0f);
    glVertex2f(0.0f, 330.0f);
    glVertex2f(900.0f, 310.0f);
    glVertex2f(900.0f, 240.0f);


    glVertex2f(550.0f, 310.0f);
    glVertex2f(720.0f, 400.0f);
    glVertex2f(780.0f, 400.0f);
    glVertex2f(680.0f, 310.0f);
    glEnd();

    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(3);
    glBegin(GL_LINES);


    glVertex2i(600, 285); //back runway
    glVertex2i(615, 300);

    glVertex2i(625, 310);
    glVertex2i(643, 325);

    glVertex2i(658, 335);
    glVertex2i(673, 348);

    glVertex2i(690, 360);
    glVertex2i(715, 377);

    glVertex2i(733, 385);
    glVertex2i(750, 396);

    glVertex2i(0, 275);
    glVertex2i(25, 275);

    glVertex2i(0, 275);
    glVertex2i(20, 275);

    glVertex2i(50, 275);
    glVertex2i(75, 275);

    glVertex2i(100, 275);
    glVertex2i(125, 275);

    glVertex2i(150, 275);
    glVertex2i(175, 275);

    glVertex2i(200, 275);
    glVertex2i(225, 275);

    glVertex2i(250, 275);
    glVertex2i(275, 275);

    glVertex2i(300, 275);
    glVertex2i(325, 275);

    glVertex2i(350, 275);
    glVertex2i(375, 275);

    glVertex2i(400, 275);
    glVertex2i(425, 275);

    glVertex2i(450, 275);
    glVertex2i(475, 275);

    glVertex2i(500, 275);
    glVertex2i(525, 275);

    glVertex2i(550, 275);
    glVertex2i(575, 275);

    glVertex2i(600, 275);
    glVertex2i(625, 275);

    glVertex2i(650, 275);
    glVertex2i(675, 275);

    glVertex2i(700, 275);
    glVertex2i(725, 275);

    glVertex2i(750, 275);
    glVertex2i(775, 275);

    glVertex2i(800, 275);
    glVertex2i(825, 275);

    glVertex2i(850, 275);
    glVertex2i(875, 275);

    glEnd();
}

void terminal_wall()
{

    glColor3ub(77, 77, 77);
    glLineWidth(5);
    glBegin(GL_LINES);

    glVertex2i(0, 180);
    glVertex2i(800, 180);

    glVertex2i(10, 168);
    glVertex2i(10, 200);

    glVertex2i(60, 168);
    glVertex2i(60, 200);

    glVertex2i(110, 168);
    glVertex2i(110, 200);

    glVertex2i(160, 168);
    glVertex2i(160, 200);

    glVertex2i(210, 168);
    glVertex2i(210, 200);

    glVertex2i(260, 168);
    glVertex2i(260, 200);

    glVertex2i(310, 168);
    glVertex2i(310, 200);

    glVertex2i(360, 168);
    glVertex2i(360, 200);

    glVertex2i(410, 168);
    glVertex2i(410, 200);

    glVertex2i(460, 168);
    glVertex2i(460, 200);

    glVertex2i(510, 168);
    glVertex2i(510, 200);

    glVertex2i(560, 168);
    glVertex2i(560, 200);

    glVertex2i(610, 168);
    glVertex2i(610, 200);

    glVertex2i(660, 168);
    glVertex2i(660, 200);

    glVertex2i(710, 168);
    glVertex2i(710, 200);

    glVertex2i(760, 168);
    glVertex2i(760, 200);

    glVertex2i(798, 168);
    glVertex2i(798, 200);


    glVertex2i(35, 168);         //light
    glVertex2i(35, 190);

    glVertex2i(85, 168);
    glVertex2i(85, 190);

    glVertex2i(135, 168);
    glVertex2i(135, 190);

    glVertex2i(185, 168);
    glVertex2i(185, 190);

    glVertex2i(235, 168);
    glVertex2i(235, 190);

    glVertex2i(285, 168);
    glVertex2i(285, 190);

    glVertex2i(335, 168);
    glVertex2i(335, 190);

    glVertex2i(385, 168);
    glVertex2i(385, 190);

    glVertex2i(435, 168);
    glVertex2i(435, 190);

    glVertex2i(485, 168);
    glVertex2i(485, 190);

    glVertex2i(535, 168);
    glVertex2i(535, 190);

    glVertex2i(585, 168);
    glVertex2i(585, 190);

    glVertex2i(635, 168);
    glVertex2i(635, 190);

    glVertex2i(685, 168);
    glVertex2i(685, 190);

    glVertex2i(735, 168);
    glVertex2i(735, 190);

    glVertex2i(780, 168);
    glVertex2i(780, 190);

    glEnd();


    glColor3ub(255, 250, 205);     //light yellow
    circle(8,10,110,210);         //right side light-15
    circle(8,10,260,210);         //right side light-12
    circle(8,10,410,210);         //right side light-9
    circle(8,10,560,210);         //right side light-6
    circle(8,10,710,210);         //right side light-3

    glColor3ub(135, 206, 250);     //light sky blue
    circle(8,10,10,210);         //right side light-17
    circle(8,10,160,210);         //right side light-14
    circle(8,10,310,210);         //right side light-11
    circle(8,10,460,210);         //right side light-8
    circle(8,10,610,210);         //right side light-5
    circle(8,10,760,210);         //right side light-2

    glColor3ub(255, 99, 71);       //   light red
    circle(8,10,60,210);         //right side light-16
    circle(8,10,210,210);         //right side light-13
    circle(8,10,360,210);         //right side light-10
    circle(8,10,510,210);         //right side light-7
    circle(8,10,660,210);         //right side light-4
    circle(8,10,798,210);        //right side light-1

    glColor3ub(139, 137, 137);
    glBegin(GL_QUADS);             //wall
    glVertex2f(0.0f, 140.0f);
    glVertex2f(0.0f, 170.0f);
    glVertex2f(800.0f, 170.0f);
    glVertex2f(800.0f, 140.0f);

    glEnd();

}

void n_terminal_wall()
{

    glColor3ub(77, 77, 77);
    glLineWidth(5);
    glBegin(GL_LINES);

    glVertex2i(0, 180);
    glVertex2i(800, 180);

    glVertex2i(10, 168);
    glVertex2i(10, 200);

    glVertex2i(60, 168);
    glVertex2i(60, 200);

    glVertex2i(110, 168);
    glVertex2i(110, 200);

    glVertex2i(160, 168);
    glVertex2i(160, 200);

    glVertex2i(210, 168);
    glVertex2i(210, 200);

    glVertex2i(260, 168);
    glVertex2i(260, 200);

    glVertex2i(310, 168);
    glVertex2i(310, 200);

    glVertex2i(360, 168);
    glVertex2i(360, 200);

    glVertex2i(410, 168);
    glVertex2i(410, 200);

    glVertex2i(460, 168);
    glVertex2i(460, 200);

    glVertex2i(510, 168);
    glVertex2i(510, 200);

    glVertex2i(560, 168);
    glVertex2i(560, 200);

    glVertex2i(610, 168);
    glVertex2i(610, 200);

    glVertex2i(660, 168);
    glVertex2i(660, 200);

    glVertex2i(710, 168);
    glVertex2i(710, 200);

    glVertex2i(760, 168);
    glVertex2i(760, 200);

    glVertex2i(798, 168);
    glVertex2i(798, 200);


    glVertex2i(35, 168);         //light
    glVertex2i(35, 190);

    glVertex2i(85, 168);
    glVertex2i(85, 190);

    glVertex2i(135, 168);
    glVertex2i(135, 190);

    glVertex2i(185, 168);
    glVertex2i(185, 190);

    glVertex2i(235, 168);
    glVertex2i(235, 190);

    glVertex2i(285, 168);
    glVertex2i(285, 190);

    glVertex2i(335, 168);
    glVertex2i(335, 190);

    glVertex2i(385, 168);
    glVertex2i(385, 190);

    glVertex2i(435, 168);
    glVertex2i(435, 190);

    glVertex2i(485, 168);
    glVertex2i(485, 190);

    glVertex2i(535, 168);
    glVertex2i(535, 190);

    glVertex2i(585, 168);
    glVertex2i(585, 190);

    glVertex2i(635, 168);
    glVertex2i(635, 190);

    glVertex2i(685, 168);
    glVertex2i(685, 190);

    glVertex2i(735, 168);
    glVertex2i(735, 190);

    glVertex2i(780, 168);
    glVertex2i(780, 190);

    glEnd();


    glColor3ub(238, 201, 0);    //yellow
    circle(8,10,110,210);         //right side light-15
    circle(8,10,260,210);         //right side light-12
    circle(8,10,410,210);         //right side light-9
    circle(8,10,560,210);         //right side light-6
    circle(8,10,710,210);         //right side light-3

    glColor3ub(0, 154, 205);     //deep sky blue
    circle(8,10,10,210);         //right side light-17
    circle(8,10,160,210);         //right side light-14
    circle(8,10,310,210);         //right side light-11
    circle(8,10,460,210);         //right side light-8
    circle(8,10,610,210);         //right side light-5
    circle(8,10,760,210);         //right side light-2

    glColor3ub(205, 0, 0);        //deep red
    circle(8,10,60,210);         //right side light-16
    circle(8,10,210,210);         //right side light-13
    circle(8,10,360,210);         //right side light-10
    circle(8,10,510,210);         //right side light-7
    circle(8,10,660,210);         //right side light-4
    circle(8,10,798,210);        //right side light-1

    glColor3ub(139, 125, 107);
    glBegin(GL_QUADS);             //wall
    glVertex2f(0.0f, 140.0f);
    glVertex2f(0.0f, 170.0f);
    glVertex2f(800.0f, 170.0f);
    glVertex2f(800.0f, 140.0f);

    glEnd();

}

void bus()
{

    glBegin(GL_QUADS);
    glColor3ub(255, 193, 37);
    glVertex2f(36.0f, 102.0f);     ///body
    glVertex2f(105.0f, 102.0f);
    glVertex2f(105.0f, 142.0f);
    glVertex2f(36.0f, 142.0f);

    glColor3ub(99, 184, 255);
    glVertex2f(41.0f, 125.0f);     ///right window
    glVertex2f(50.0f, 125.0f);
    glVertex2f(50.0f, 136.0f);
    glVertex2f(41.0f, 136.0f);

    glVertex2f(51.0f, 125.0f);     ///2nd window
    glVertex2f(60.0f, 125.0f);
    glVertex2f(60.0f, 136.0f);
    glVertex2f(51.0f, 136.0f);

    glVertex2f(61.0f, 125.0f);     ///3rd window
    glVertex2f(70.0f, 125.0f);
    glVertex2f(70.0f, 136.0f);
    glVertex2f(61.0f, 136.0f);

    glVertex2f(71.0f, 125.0f);     ///4th window
    glVertex2f(80.0f, 125.0f);
    glVertex2f(80.0f, 136.0f);
    glVertex2f(71.0f, 136.0f);

    glVertex2f(81.0f, 125.0f);     ///5th window
    glVertex2f(90.0f, 125.0f);
    glVertex2f(90.0f, 136.0f);
    glVertex2f(81.0f, 136.0f);

    glVertex2f(91.0f, 116.0f);     ///6th window
    glVertex2f(102.0f, 116.0f);
    glVertex2f(102.0f, 136.0f);
    glVertex2f(91.0f, 136.0f);
    glEnd();


    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2i(41, 121);
    glVertex2i(89, 121);

    glVertex2i(41, 118);
    glVertex2i(89, 118);
    glEnd();

    glColor3ub(0, 0, 0);        //chaka
    circle(5,6,50,104);
    circle(5,6,87,104);

    glColor3ub(112, 128, 144);
    circle(2,3,50,104);
    circle(2,3,87,104);

}

void bus1()
{

    glBegin(GL_QUADS);
    glColor3ub(255, 48, 48);
    glVertex2f(357.0f, 104.0f);     ///body
    glVertex2f(435.0f, 104.0f);
    glVertex2f(435.0f, 162.0f);
    glVertex2f(358.0f, 162.0f);

    glColor3ub(238, 233, 233);
    glVertex2f(361.0f, 125.0f);     ///right window
    glVertex2f(370.0f, 125.0f);
    glVertex2f(370.0f, 136.0f);
    glVertex2f(361.0f, 136.0f);

    glVertex2f(371.0f, 125.0f);     ///2nd window
    glVertex2f(380.0f, 125.0f);
    glVertex2f(380.0f, 136.0f);
    glVertex2f(371.0f, 136.0f);

    glVertex2f(381.0f, 125.0f);     ///3rd window
    glVertex2f(390.0f, 125.0f);
    glVertex2f(390.0f, 136.0f);
    glVertex2f(381.0f, 136.0f);

    glVertex2f(391.0f, 125.0f);     ///4th window
    glVertex2f(400.0f, 125.0f);
    glVertex2f(400.0f, 136.0f);
    glVertex2f(391.0f, 136.0f);

    glVertex2f(401.0f, 125.0f);     ///5th window
    glVertex2f(410.0f, 125.0f);
    glVertex2f(410.0f, 136.0f);
    glVertex2f(401.0f, 136.0f);

    glVertex2f(411.0f, 125.0f);     ///6th window
    glVertex2f(420.0f, 125.0f);
    glVertex2f(420.0f, 136.0f);
    glVertex2f(411.0f, 136.0f);

    glVertex2f(421.0f, 116.0f);     ///7th window
    glVertex2f(430.0f, 116.0f);
    glVertex2f(430.0f, 136.0f);
    glVertex2f(421.0f, 136.0f);

///..................................

    glVertex2f(361.0f, 145.0f);     ///right window
    glVertex2f(370.0f, 145.0f);
    glVertex2f(370.0f, 156.0f);
    glVertex2f(361.0f, 156.0f);

    glVertex2f(371.0f, 145.0f);     ///2nd window
    glVertex2f(380.0f, 145.0f);
    glVertex2f(380.0f, 156.0f);
    glVertex2f(371.0f, 156.0f);

    glVertex2f(381.0f, 145.0f);     ///3rd window
    glVertex2f(390.0f, 145.0f);
    glVertex2f(390.0f, 156.0f);
    glVertex2f(381.0f, 156.0f);

    glVertex2f(391.0f, 145.0f);     ///4th window
    glVertex2f(400.0f, 145.0f);
    glVertex2f(400.0f, 156.0f);
    glVertex2f(391.0f, 156.0f);

    glVertex2f(401.0f, 145.0f);     ///5th window
    glVertex2f(410.0f, 145.0f);
    glVertex2f(410.0f, 156.0f);
    glVertex2f(401.0f, 156.0f);

    glVertex2f(411.0f, 145.0f);     ///6th window
    glVertex2f(420.0f, 145.0f);
    glVertex2f(420.0f, 156.0f);
    glVertex2f(411.0f, 156.0f);

    glVertex2f(421.0f, 145.0f);     ///7th window
    glVertex2f(430.0f, 145.0f);
    glVertex2f(430.0f, 156.0f);
    glVertex2f(421.0f, 156.0f);
    glEnd();


///..................................

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(362, 138);
    glVertex2i(430, 138);

    glVertex2i(362, 121);
    glVertex2i(420, 121);

    glVertex2i(362, 118);
    glVertex2i(420, 118);
    glEnd();

    glColor3ub(3, 3, 3);        //chaka
    circle(5,6,415,106);

    glColor3ub(3, 3, 3);
    circle(5,6,370,106);


    glColor3ub(110, 123, 139);
    circle(2,3,370,106);
    circle(2,3,415,106);
}



void bus2()
{

    glBegin(GL_QUADS);
    glColor3ub(16, 78, 139);
    glVertex2f(500.0f, 115.0f);     ///body
    glVertex2f(582.0f, 115.0f);
    glVertex2f(582.0f, 153.0f);
    glVertex2f(500.0f, 153.0f);

    glColor3ub(255, 225, 255);
    glVertex2f(502.0f, 132.0f);     ///right window
    glVertex2f(517.0f, 132.0f);
    glVertex2f(517.0f, 148.0f);
    glVertex2f(502.0f, 148.0f);

    glVertex2f(519.0f, 132.0f);     ///2nd window
    glVertex2f(534.0f, 132.0f);
    glVertex2f(534.0f, 148.0f);
    glVertex2f(519.0f, 148.0f);

    glVertex2f(536.0f, 132.0f);     ///3rd window
    glVertex2f(551.0f, 132.0f);
    glVertex2f(551.0f, 148.0f);
    glVertex2f(536.0f, 148.0f);

    glVertex2f(553.0f, 132.0f);     ///4th window
    glVertex2f(567.0f, 132.0f);
    glVertex2f(567.0f, 148.0f);
    glVertex2f(553.0f, 148.0f);

    glVertex2f(569.0f, 125.0f);     ///5th window
    glVertex2f(580.0f, 125.0f);
    glVertex2f(580.0f, 148.0f);
    glVertex2f(569.0f, 148.0f);

    glEnd();
    glColor3ub(0, 0, 0);        //chaka
    circle(5,6,512,115);
    glColor3ub(0, 0, 0);
    circle(5,6,567,115);

    glColor3ub(112, 128, 144);
    circle(2,3,512,115);
    circle(2,3,567,115);

}


void bus3()
{

    glBegin(GL_QUADS);
    glColor3ub(238, 174, 238);
    glVertex2f(48.0f, 65.0f);     ///body
    glVertex2f(114.0f, 65.0f);
    glVertex2f(114.0f, 104.0f);
    glVertex2f(48.0f, 104.0f);

    glColor3ub(255, 225, 255);

    glVertex2f(51.0f, 70.0f);     ///1st
    glVertex2f(60.0f, 70.0f);
    glVertex2f(60.0f, 98.0f);
    glVertex2f(51.0f, 98.0f);

    glVertex2f(61.0f, 88.0f);     ///2nd window
    glVertex2f(70.0f, 88.0f);
    glVertex2f(70.0f, 98.0f);
    glVertex2f(61.0f, 98.0f);

    glVertex2f(71.0f, 88.0f);     ///3rd window
    glVertex2f(80.0f, 88.0f);
    glVertex2f(80.0f, 98.0f);
    glVertex2f(71.0f, 98.0f);

    glVertex2f(81.0f, 88.0f);     ///4th window
    glVertex2f(90.0f, 88.0f);
    glVertex2f(90.0f, 98.0f);
    glVertex2f(81.0f, 98.0f);

    glVertex2f(91.0f, 88.0f);     ///5th window
    glVertex2f(100.0f, 88.0f);
    glVertex2f(100.0f, 98.0f);
    glVertex2f(91.0f, 98.0f);

    glVertex2f(101.0f, 88.0f);     ///right window
    glVertex2f(110.0f, 88.0f);
    glVertex2f(110.0f, 98.0f);
    glVertex2f(101.0f, 98.0f);
    glEnd();


    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2i(62, 84);
    glVertex2i(110, 84);

    glVertex2i(62, 80);
    glVertex2i(110, 80);
    glEnd();

    glColor3ub(0, 0, 0);        //chaka
    circle(5,6,67,67);
    circle(5,6,102,67);

    glColor3ub(112, 128, 144);
    circle(2,3,67,67);
    circle(2,3,102,67);

}


void car1()
{

    glBegin(GL_QUADS);
    glColor3ub(67, 110, 238);
    glVertex2f(170.0f, 130.0f);     ///body top
    glVertex2f(210.0f, 130.0f);
    glVertex2f(200.0f, 145.0f);
    glVertex2f(178.0f, 145.0f);

    glVertex2f(170.0f, 110.0f);     ///body bottom
    glVertex2f(220.0f, 110.0f);
    glVertex2f(220.0f, 130.0f);
    glVertex2f(170.0f, 130.0f);

    glColor3ub(99, 184, 255);
    glVertex2f(172.0f, 130.0f);     /// window left
    glVertex2f(190.0f, 130.0f);
    glVertex2f(190.0f, 143.0f);
    glVertex2f(179.0f, 143.0f);


    glVertex2f(192.0f, 130.0f);     ///window right
    glVertex2f(208.0f, 130.0f);
    glVertex2f(198.0f, 143.0f);
    glVertex2f(192.0f, 143.0f);

    glEnd();


    glColor3ub(0, 0, 0);        //chaka
    circle(5,6,180,112);
    circle(5,6,210,112);

    glColor3ub(112, 128, 144);
    circle(2,3,180,112);
    circle(2,3,210,112);

}
//Airport code end......................................................


float positionRain=0;

float speedRain=-2.0;

void rainDown()
{
    if (positionRain > 900)

    {
        positionRain = 0;

    }
    positionRain += speedRain;

    glutPostRedisplay();
}

void rain()
{
    glLineWidth(1.0);


    glPushMatrix();
    glTranslated(0, positionRain, 0);

    glBegin(GL_LINES);

    glColor3ub (255, 255, 255);

    int X = 7, Y = -700;
    for(int i=0; i<50; i++)
    {
        for(int j=0; j<60; j++)
        {

            glVertex2i(X, Y);
            glVertex2i(X+3, Y+10);

            X=X+40;
        }
        X=7;
        Y=Y+30;
    }
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslated(0, positionRain, 0);

    glBegin(GL_LINES);

    glColor3ub (255, 255, 255);

    X = 27, Y = -683;
    for(int i=0; i<50; i++)
    {
        for(int j=0; j<60; j++)
        {

            glVertex2i(X, Y);
            glVertex2i(X+3, Y+10);

            X=X+40;
        }
        X=27;
        Y=Y+30;
    }
    glEnd();

    glPopMatrix();

}


void mountain()
{


//mountain.......................

    glColor3f(0.6, 45.85, 0.40);
    glBegin(GL_TRIANGLES);
    glVertex2i(150, 500);
    glVertex2i(250, 400);
    glVertex2i(50, 400);
    glEnd();

    glColor3f(0.0, 1, 0.4);
    glBegin(GL_TRIANGLES);
    glVertex2i(200, 520);
    glVertex2i(300, 400);
    glVertex2i(100, 400);
    glEnd();

    glColor3f(0.3, 100.9, 0.5);
    glBegin(GL_TRIANGLES);
    glVertex2i(280, 480);
    glVertex2i(350, 400);
    glVertex2i(210, 400);
    glEnd();

    glColor3f(0.0, 1.5, 0.7);
    glBegin(GL_TRIANGLES);
    glVertex2i(90, 490);
    glVertex2i(140, 400);
    glVertex2i(40, 400);
    glEnd();



    glColor3f(0.3, 1.5, 0.5);
    glBegin(GL_TRIANGLES);
    glVertex2i(40, 500);
    glVertex2i(90, 400);
    glVertex2i(-10, 400);
    glEnd();


    glColor3f(0.3, 1.0, 0.5);
    glBegin(GL_TRIANGLES);
    glVertex2i(610, 470);
    glVertex2i(660, 400);
    glVertex2i(560, 400);
    glEnd();

    glColor3f(0.5, 1.5, 0.5);
    glBegin(GL_TRIANGLES);
    glVertex2i(685, 475);
    glVertex2i(730, 400);
    glVertex2i(640, 400);
    glEnd();

    glColor3f(0.5, 1.0, 0.7);
    glBegin(GL_TRIANGLES);
    glVertex2i(775, 465);
    glVertex2i(720, 400);
    glVertex2i(830, 400);
    glEnd();

    glColor3f(0.5, 1.0, 0.7);
    glBegin(GL_TRIANGLES);
    glVertex2i(895, 500);
    glVertex2i(850, 400);
    glVertex2i(950, 400);
    glEnd();

    glColor3f(0.0, 1.5, 0.5);
    glBegin(GL_TRIANGLES);
    glVertex2i(845, 480);
    glVertex2i(890, 400);
    glVertex2i(800, 400);
    glEnd();


//rail line....................................................

    glColor3ub(46, 46, 46);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(0, 20);
    glVertex2i(900, 20);
    glEnd();

    glColor3ub(46, 46, 46);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(0, 35);
    glVertex2i(900, 35);
    glEnd();

    int xx=0;
    int yy=10;
    for(int a=0; a<100; a++)
    {


        glColor3ub(205, 133, 63);
        glLineWidth(5.90);
        glBegin(GL_LINES);
        glVertex2i(xx, 35);
        glVertex2i(yy, 20);
        glEnd();

        xx=yy;
        yy=xx+10;
    }

    movingTrain();


}



void init()
{


    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);

    gluOrtho2D(0.0, 900, 0.0, 600);
}


void daydisplay()

{

    glClear(GL_COLOR_BUFFER_BIT);
    field();

    daysky();

    daycloudMove();

    daymovingCloud();
    runway();
    plane();
    terminal();
    terminal_wall();
    road();
    bus();
    bus1();
    bus2();
    car1();
    d_r_border();
    bus3();
    t_tree();
    t_wall();
    mountain();
    B_tree();
    house1();
    house2();
    house3();
    delay();



    glFlush();

}

void nightdisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    field();
    nightsky();
    star();

    nightcloudMove();

    nightmovingCloud();
    runway();
    plane();
    terminal();
    n_terminal_wall();
    n_road();
    bus();
    bus1();
    bus2();
    car1();
    n_r_border();
    bus3();
    t_tree();
    t_wall();
    delay();
    mountain();
    B_tree();
    house1();
    house2();
    house3();
    glFlush();
}

void raindisplay(void)
{

    glClear(GL_COLOR_BUFFER_BIT);

    field();
    rainsky();
    raincloudMove();
    rainmovingCloud();
    runway();
    plane();
    terminal();
    terminal_wall();
    road();
    bus();
    bus1();
    bus2();
    car1();
    d_r_border();
    bus3();
    t_tree();
    t_wall();
    delay();
    mountain();
    B_tree();
    house1();
    house2();
    house3();
    rain();
    rainDown();


    glFlush();


}
void myKey(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'd':

        glutDisplayFunc(daydisplay);

        break;

    case 'n':

        glutDisplayFunc(nightdisplay);

        break;

    case 'r':

        glutDisplayFunc(raindisplay);
        break;

    case 't':
        exit(0);
        break;

    default:
        glutDisplayFunc(daydisplay);
        break;
    }
}


int main(int argc, char ** argv)
{
    cout << endl << "******** Dream city ********" << endl << endl;

    cout << "Press N : For Night mode " << endl << endl;
    cout << "Press R : For Rainy mode " << endl << endl;
    cout << "Press D : For Day mode " << endl << endl;
    cout << "Press T : To terminate the window " << endl << endl;

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowPosition(100, 100);

    glutInitWindowSize(1000, 600);

    glutCreateWindow("Airport Scenario ");

    glutKeyboardFunc(myKey);

    init();

    glutDisplayFunc(daydisplay);
    glutMainLoop();
}
