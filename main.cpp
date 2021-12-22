#include<windows.h>
#ifdef APPLE
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#define PI 3.1416
float i=0, cx=0, cy=0,cm=0,cn=-3.1,ca=0,cb=0, angle=0;

void init(){
    glClearColor(0.00392f,0.749f,1.0f,1.0f);
    glOrtho(-10,+10,-10,+10,-10,+10);
}

void circle(float radiusX, float radiusY){
    int i=0;
    float angle = 0;
    glBegin(GL_POLYGON);


    for(i=0;i<50;i++){
        angle= 2* PI * i/50;
        glVertex2d(radiusX*cos(angle),radiusY*sin(angle));
        //printf("Angle : %f, X-Axis : %f, Y-Axis : %f\n,",angle,radiusX*cos(angle),radiusY*sin(angle));
    }
    glEnd();
}


void myDisplay(){
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();//boat
    glTranslated(cx,cy,0);
    glPushMatrix();//boat
    glTranslated(-8,4.85,0);
    glRotated(180,0,0,1);
    glRotated(180,0,1,0);
    glScaled(2,4,1);
    glPushMatrix();//big sail
    glBegin(GL_POLYGON);
    glColor3f(0.975,0.0509,0.0);
    glVertex2d(1.085,0.64);
    glVertex2d(1.14,0.825);
    glVertex2d(1.1575,0.995);
    glVertex2d(1.16,1.15);
    glVertex2d(1.1575,1.275);
    glVertex2d(1.1325,1.49);
    glVertex2d(1.095,1.685);
    glVertex2d(1.205,1.6325);
    glVertex2d(1.3825,1.585);
    glVertex2d(1.4375,1.5625);
    glVertex2d(1.5725,1.55);
    glVertex2d(1.7025,1.555);
    glVertex2d(1.8075,1.57);
    glVertex2d(1.735,1.2925);
    glVertex2d(1.5775,1.025);
    glVertex2d(1.4375,0.8725);
    glVertex2d(1.085,0.64);
    glEnd();
    glPopMatrix();

    glPushMatrix();//small sail
    glRotated(180,1,0,0);
    glTranslated(0,-2.53,0);
    glBegin(GL_POLYGON);
    glColor3f(0.825,0.0509,0.0);
    glVertex2d(1,0.86);
    glVertex2d(0.7125,1.2075);
    glVertex2d(1.005,1.685);
    glVertex2d(1,0.86);
    glEnd();
    glPopMatrix();

    glPushMatrix();//bar
    glColor3f(0.807,0.541,0.4);
    glBegin(GL_POLYGON);
    glVertex2d(1.03,0.6);
    glVertex2d(1.03,1.7225);
    glVertex2d(1.07,1.7225);
    glVertex2d(1.07,0.6);
    glVertex2d(1.03,0.6);
    glEnd();
    glPopMatrix();

    glPushMatrix();//deck
    glBegin(GL_POLYGON);
    glColor3f(0.576,0.2274,0.08627);
    glVertex2d(1.805,1.63);
    glVertex2d(1.5,1.6725);
    glVertex2d(1.3625,1.69);
    glVertex2d(1.07,1.7225);
    glVertex2d(0.84,1.74);
    glVertex2d(0.69,1.7475);
    glVertex2d(0.74,1.8725);
    glVertex2d(0.75,1.8875);
    glVertex2d(0.7775,1.905);
    glVertex2d(0.8125,1.9125);
    glVertex2d(1.5675,1.9125);
    glVertex2d(1.5975,1.9025);
    glVertex2d(1.6275,1.8775);
    glVertex2d(1.805,1.63);
    glEnd();
    glPopMatrix();

    glPushMatrix();//black paint


    glScaled(0.34,0.22,1);
    glTranslated(2.19,8,0);
    glRotated(-8,0,0,1);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2d(-0.15,0);//bottom left
    glVertex2d(3.1,0);//top right
    glVertex2d(2.73,0.5);//bottom right
    glVertex2d(-0.1,0.3);//bottom left
    glVertex2d(-0.15,0);//bottom left
    glEnd();
    glPopMatrix();

    glPopMatrix();
    glPopMatrix();


    glPushMatrix();//sun
    glTranslated(6,7,0);
    glColor3f(1,0.913,0);
    circle(1.01,1.75);
    glPopMatrix();

    glPushMatrix();//wave
    glPushMatrix();//wave1
    glTranslated(0,-2.5,0);
    glPushMatrix();//wave 1
    glScaled(0.7,1,1);
    glTranslated(-8,0,0);
    glBegin(GL_POLYGON);
    glColor3f(0,0.196,0.73);
    glVertex2d(8,-3);
    glVertex2d(-8,-3);
    glVertex2d(-8,0);
    glVertex2d(-7.68,-0.122);
    glVertex2d(-7.395,-0.045);
    glVertex2d(-7,0);
    glVertex2d(-6.7,0.012);
    glVertex2d(-6.391,-0.160);
    glVertex2d(-5.986,-0.238);
    glVertex2d(-5.58,-0.103);
    glVertex2d(-5.214,0.0706);
    glVertex2d(-4.828,0.0706);
    glVertex2d(-4.48,-0.045);
    glVertex2d(-4.152,-0.16);
    glVertex2d(-3.824,-0.238);
    glVertex2d(-3.438,-0.122);
    glVertex2d(-3.129,-0.083);
    glVertex2d(-2.82,-0.18);
    glVertex2d(-2.473,-0.238);
    glVertex2d(-2.106,-0.160);
    glVertex2d(-1.817,-0.103);
    glVertex2d(-1.431,-0.103);
    glVertex2d(-1.160,-0.218);
    glVertex2d(-0.813,-0.315);
    glVertex2d(-0.35,-0.218);
    glVertex2d(0,0);
    glVertex2d(0.286,-0.103);
    glVertex2d(0.653,-0.199);
    glVertex2d(0.962,-0.257);
    glVertex2d(1.42,-0.0837);
    glVertex2d(1.811,-0.025);
    glVertex2d(2,0);
    glVertex2d(2.332,-0.122);
    glVertex2d(2.699,-0.160);
    glVertex2d(3,0);
    glVertex2d(3.336,-0.122);
    glVertex2d(3.606,-0.276);
    glVertex2d(3.915,-0.334);
    glVertex2d(4.205,-0.276);
    glVertex2d(4.533,-0.122);
    glVertex2d(4.88,-0.160);
    glVertex2d(5.170,-0.257);
    glVertex2d(5.53,-0.122);
    glVertex2d(5.807,-0.0451);
    glVertex2d(6.115,-0.160);
    glVertex2d(6.463,-0.296);
    glVertex2d(6.791,-0.257);
    glVertex2d(7.138,-0.0258);
    glVertex2d(7.525,0.032);
    glVertex2d(8,0);
    glVertex2d(8,-3);

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glScaled(0.7,1,1);
    glTranslated(8,0,0);
    glBegin(GL_POLYGON);
    glColor3f(0,0.196,0.73);
    glVertex2d(8,-3);
    glVertex2d(-8,-3);
    glVertex2d(-8,0);
    glVertex2d(-7.684,-0.122);
    glVertex2d(-7.395,-0.045);
    glVertex2d(-7,0);
    glVertex2d(-6.700,0.012);
    glVertex2d(-6.391,-0.160);
    glVertex2d(-5.986,-0.238);
    glVertex2d(-5.58,-0.103);
    glVertex2d(-5.214,0.0706);
    glVertex2d(-4.828,0.0706);
    glVertex2d(-4.480,-0.0451);
    glVertex2d(-4.152,-0.160);
    glVertex2d(-3.82,-0.23);
    glVertex2d(-3.438,-0.122);
    glVertex2d(-3.129,-0.083);
    glVertex2d(-2.820,-0.180);
    glVertex2d(-2.473,0.238);
    glVertex2d(-2.106,-0.160);
    glVertex2d(-1.817,-0.103);
    glVertex2d(-1.431,-0.103);
    glVertex2d(-1.160,-0.218);
    glVertex2d(-0.813,-0.315);
    glVertex2d(-0.350,-0.218);
    glVertex2d(0,0);
    glVertex2d(0.286,-0.103);
    glVertex2d(0.653,-0.199);
    glVertex2d(0.962,-0.257);
    glVertex2d(1.425,-0.083);
    glVertex2d(1.811,-0.025);
    glVertex2d(2,0);
    glVertex2d(2.33,-0.122);
    glVertex2d(2.699,-0.160);
    glVertex2d(3,0);
    glVertex2d(3.336,-0.122);
    glVertex2d(3.606,-0.276);
    glVertex2d(3.915,-0.334);
    glVertex2d(4.205,-0.2767);
    glVertex2d(4.533,0.122);
    glVertex2d(4.880,-0.160);
    glVertex2d(5.170,-0.257);
    glVertex2d(5.536,-0.122);
    glVertex2d(5.807,-0.0451);
    glVertex2d(6.115,-0.160);
    glVertex2d(6.463,-0.296);
    glVertex2d(6.791,-0.257);
    glVertex2d(7.138,-0.025);
    glVertex2d(7.525,0.032);
    glVertex2d(8,0);
    glVertex2d(8,-3);

    glEnd();
    glPopMatrix();
    glPopMatrix();//wave 1
    glPopMatrix();//wave 1

    glPushMatrix();
    glScaled(0.59,1,1);
    glTranslated(cm,cn,0);
    glRotated(angle,0,0,-1);
    glBegin(GL_POLYGON);//dolphin
    glColor3f(0.4,0.624,0.8);//head
    glVertex2d(-1.91,0.561);
    glVertex2d(-1.958,0.429);
    glVertex2d(-1.735,0.416);
    glVertex2d(-1.158,0.246);
    glVertex2d(-0.843,0.0365);
    glVertex2d(-0.424,0.652);
    glVertex2d(-0.306,1.0069);
    glColor3f(0.6,0.6,0.6);
    glVertex2d(-0.843,1.0725);
    glVertex2d(-1.355,0.967);
    glVertex2d(-1.643,0.718);
    glVertex2d(-1.91,0.561);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4,0.624,0.8);
    glVertex2d(-0.843,0.0365);//neck
    glVertex2d(-0.424,0.652);
    glVertex2d(-0.306,1.0069);
    glVertex2d(0.3102,0.784);
    glVertex2d(0.0479,0.416);
    glVertex2d(-0.174,-0.00281);
    glVertex2d(-0.371,-0.2519);
    glVertex2d(-0.843,0.0365);
    glEnd();

    glBegin(GL_POLYGON);//belly
    glColor3f(0.4,0.630,0.8);
    glVertex2d(0.3102,0.784);
    glVertex2d(0.0479,0.416);
    glVertex2d(-0.174,-0.00281);
    glVertex2d(-0.371,-0.2519);
    glVertex2d(-0.096,-0.645);
    glVertex2d(0.336,-1.051);
    glVertex2d(0.585,-1.406);
    glVertex2d(0.874,-1.091);
    glVertex2d(1.057,-0.789);
    glVertex2d(1.28,-0.514);
    glColor3f(0.6,0.6,0.6);
    glVertex2d(1.201,-0.147);
    glVertex2d(1.057,0.141);
    glVertex2d(0.756,0.469);
    glVertex2d(0.3102,0.784);
    glEnd();

    glBegin(GL_POLYGON);//back
    glColor3f(0.4,0.630,0.8);
    glVertex2d(0.585,-1.406);
    glVertex2d(0.874,-1.091);
    glVertex2d(1.057,-0.789);
    glVertex2d(1.28,-0.514);
    glVertex2d(1.385,-1.065);
    glVertex2d(1.372,-1.471);
    glVertex2d(1.28,-2.022);
    glVertex2d(1.018,-2.455);
    glVertex2d(0.782,-2.468);
    glVertex2d(0.611,-2.297);
    glVertex2d(0.638,-1.891);
    glVertex2d(0.585,-1.406);
    glEnd();

    glBegin(GL_POLYGON);//tail
    glColor3f(0.4,0.645,0.8);
    glVertex2d(1.018,-2.455);
    glVertex2d(0.782,-2.468);
    glVertex2d(0.611,-2.297);
    glVertex2d(0.454,-2.756);
    glVertex2d(0.297,-2.953);
    glColor3f(0.5,0.5,0.5);
    glVertex2d(0.506,-3.241);
    glVertex2d(0.638,-2.927);
    glVertex2d(1.018,-2.455);
    glEnd();

    glBegin(GL_POLYGON);//rear tail
    glColor3f(0.4,0.605,0.8);
    glVertex2d(-0.201,-2.796);
    glVertex2d(-0.542,-2.835);
    glVertex2d(-0.804,-2.979);
    glVertex2d(-0.489,-3.032);
    glColor3f(0.5,0.5,0.5);
    glVertex2d(-0.161,-3.097);
    glVertex2d(0.087,-3.333);
    glVertex2d(0.297,-3.36);
    glVertex2d(0.506,-3.241);
    glVertex2d(0.297,-2.953);
    glVertex2d(-0.201,-2.796);
    glEnd();

    glBegin(GL_POLYGON);//rear tail
    glColor3f(0.4,0.603,0.8);
    glVertex2d(0.585,-3.609);
    glVertex2d(0.559,-3.937);
    glVertex2d(0.467,-4.212);
    glColor3f(0.5,0.5,0.5);
    glVertex2d(0.362,-3.871);
    glVertex2d(0.310,-3.635);
    glVertex2d(0.297,-3.36);
    glVertex2d(0.506,-3.241);
    glVertex2d(0.585,-3.609);
    glEnd();

    glBegin(GL_POLYGON);//lower tail
    glColor3f(0.4,0.640,0.8);
    glVertex2d(-0.371,-0.251);
    glVertex2d(-0.843,0.0365);
    glColor3f(0.5,0.5,0.5);
    glVertex2d(-0.696,-0.366);
    glVertex2d(-0.538,-0.641);
    glVertex2d(-0.276,-0.786);
    glVertex2d(-0.368,-0.602);
    glVertex2d(-0.371,-0.251);
    glEnd();

    glBegin(GL_POLYGON);//upper tail
    glColor3f(0.4,0.599,0.8);
    glVertex2d(1.201,-0.147);
    glVertex2d(1.057,0.141);
    glVertex2d(0.756,0.469);
    glColor3f(0.5,0.5,0.5);
    glVertex2d(1.258,0.381);
    glVertex2d(1.626,0.0798);
    glVertex2d(1.403,-0.012);
    glVertex2d(1.201,-0.147);
    glEnd();

    glPushMatrix();//eye
    glTranslated(-1.15,0.68,0);
    glColor3f(0,0,0);
    circle(0.11,0.11);
    glPushMatrix();
    glTranslated(0.03,-0.02,0);
    glColor3f(1,1,1);
    circle(0.038,0.038);
    glPopMatrix();
    glPopMatrix();

    glRotated(136,0,0,1);//belly mark
    glTranslated(-0.32,0.50,0);
    circle(1,0.087);

    glPopMatrix();

    glPushMatrix();//wave 2
    glRotated(180,0,1,0);
    glTranslated(0,-3.5,0);
    glPushMatrix();//wave 2
    glScaled(0.7,1,1);
    glTranslated(-8,0,0);
    glBegin(GL_POLYGON);
    glColor3f(0.00392,0.415,0.964);
    glVertex2d(8,-3);
    glVertex2d(-8,-3);
    glVertex2d(-8,0);
    glVertex2d(-7.6848363121074,-0.1223626794911);
    glVertex2d(-7.3953088480056,-0.0451553557306);
    glVertex2d(-7,0);
    glVertex2d(-6.7004429341614,0.0127501370898);
    glVertex2d(-6.3916136391194,-0.16096634137131);
    glVertex2d(-5.9862751893769,-0.2381736651318);
    glVertex2d(-5.5809367396344,-0.1030608485509);
    glVertex2d(-5.2142019517722,0.0706556299101);
    glVertex2d(-4.8281653329698,0.0706556299101);
    glVertex2d(-4.4807323760477,-0.0451553557306);
    glVertex2d(-4.1526012500656,-0.1609663413713);
    glVertex2d(-3.8244701240836,-0.2381736651318);
    glVertex2d(-3.4384335052812,-0.1223626794911);
    glVertex2d(-3.1296042102393,-0.0837590176108);
    glVertex2d(-2.8207749151974,-0.1802681723114);
    glVertex2d(-2.4733419582753,-0.2381736651318);
    glVertex2d(-2.106607170413,-0.1609663413713);
    glVertex2d(-1.8170797063112,-0.1030608485509);
    glVertex2d(-1.4310430875088,-0.1030608485509);
    glVertex2d(-1.1608174543472,-0.2188718341917);
    glVertex2d(-0.813384497425,-0.3153809888923);
    glVertex2d(-0.3501405548622,-0.2188718341917);
    glVertex2d(0,0);
    glVertex2d(0.2868198661618,-0.1030608485509);
    glVertex2d(0.653554654024,-0.1995700032515);
    glVertex2d(0.9623839490659,-0.2574754960719);
    glVertex2d(1.4256278916288,-0.0837590176108);
    glVertex2d(1.8116645104312,-0.0258535247905);
    glVertex2d(2,0);
    glVertex2d(2.3328139458144,-0.1223626794911);
    glVertex2d(2.6995487336767,-0.1609663413713);
    glVertex2d(3,0);
    glVertex2d(3.3365091547006,-0.1223626794911);
    glVertex2d(3.6067347878623,-0.276777327012);
    glVertex2d(3.9155640829042,-0.3346828198324);
    glVertex2d(4.205091547006,-0.276777327012);
    glVertex2d(4.533222672988,-0.1223626794911);
    glVertex2d(4.8806556299101,-0.1609663413713);
    glVertex2d(5.1701830940119,-0.2574754960719);
    glVertex2d(5.5369178818742,-0.1223626794911);
    glVertex2d(5.8071435150358,-0.0451553557306);
    glVertex2d(6.1159728100778,-0.1609663413713);
    glVertex2d(6.4634057669999,-0.2960791579521);
    glVertex2d(6.7915368929819,-0.2574754960719);
    glVertex2d(7.1389698499041,-0.0258535247905);
    glVertex2d(7.5250064687064,0.0320519680299);
    glVertex2d(8,0);
    glVertex2d(8,-3);

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glScaled(0.7,1,1);
    glTranslated(8,0,0);
    glBegin(GL_POLYGON);
    glColor3f(0.00392,0.415,0.964);
    glVertex2d(8,-3);
    glVertex2d(-8,-3);
    glVertex2d(-8,0);
    glVertex2d(-7.6848363121074,-0.1223626794911);
    glVertex2d(-7.3953088480056,-0.0451553557306);
    glVertex2d(-7,0);
    glVertex2d(-6.7004429341614,0.0127501370898);
    glVertex2d(-6.3916136391194,-0.16096634137131);
    glVertex2d(-5.9862751893769,-0.2381736651318);
    glVertex2d(-5.5809367396344,-0.1030608485509);
    glVertex2d(-5.2142019517722,0.0706556299101);
    glVertex2d(-4.8281653329698,0.0706556299101);
    glVertex2d(-4.4807323760477,-0.0451553557306);
    glVertex2d(-4.1526012500656,-0.1609663413713);
    glVertex2d(-3.8244701240836,-0.2381736651318);
    glVertex2d(-3.4384335052812,-0.1223626794911);
    glVertex2d(-3.1296042102393,-0.0837590176108);
    glVertex2d(-2.8207749151974,-0.1802681723114);
    glVertex2d(-2.4733419582753,-0.2381736651318);
    glVertex2d(-2.106607170413,-0.1609663413713);
    glVertex2d(-1.8170797063112,-0.1030608485509);
    glVertex2d(-1.4310430875088,-0.1030608485509);
    glVertex2d(-1.1608174543472,-0.2188718341917);
    glVertex2d(-0.813384497425,-0.3153809888923);
    glVertex2d(-0.3501405548622,-0.2188718341917);
    glVertex2d(0,0);
    glVertex2d(0.2868198661618,-0.1030608485509);
    glVertex2d(0.653554654024,-0.1995700032515);
    glVertex2d(0.9623839490659,-0.2574754960719);
    glVertex2d(1.4256278916288,-0.0837590176108);
    glVertex2d(1.8116645104312,-0.0258535247905);
    glVertex2d(2,0);
    glVertex2d(2.3328139458144,-0.1223626794911);
    glVertex2d(2.6995487336767,-0.1609663413713);
    glVertex2d(3,0);
    glVertex2d(3.3365091547006,-0.1223626794911);
    glVertex2d(3.6067347878623,-0.276777327012);
    glVertex2d(3.9155640829042,-0.3346828198324);
    glVertex2d(4.205091547006,-0.276777327012);
    glVertex2d(4.533222672988,-0.1223626794911);
    glVertex2d(4.8806556299101,-0.1609663413713);
    glVertex2d(5.1701830940119,-0.2574754960719);
    glVertex2d(5.5369178818742,-0.1223626794911);
    glVertex2d(5.8071435150358,-0.0451553557306);
    glVertex2d(6.1159728100778,-0.1609663413713);
    glVertex2d(6.4634057669999,-0.2960791579521);
    glVertex2d(6.7915368929819,-0.2574754960719);
    glVertex2d(7.1389698499041,-0.0258535247905);
    glVertex2d(7.5250064687064,0.0320519680299);
    glVertex2d(8,0);
    glVertex2d(8,-3);

    glEnd();
    glPopMatrix();
    glPopMatrix();//wave 2
    glPopMatrix();//wave 2

    glPushMatrix();//wave 3
    glTranslated(0,-4.5,0);
    glPushMatrix();//wave 3
    glScaled(0.7,1,1);
    glTranslated(-8,0,0);
    glBegin(GL_POLYGON);
    glColor3f(0.3686,0.847,1);
    glVertex2d(8,-3);
    glVertex2d(-8,-3);
    glVertex2d(-8,0);
    glVertex2d(-7.6848363121074,-0.1223626794911);
    glVertex2d(-7.3953088480056,-0.0451553557306);
    glVertex2d(-7,0);
    glVertex2d(-6.7004429341614,0.0127501370898);
    glVertex2d(-6.3916136391194,-0.16096634137131);
    glVertex2d(-5.9862751893769,-0.2381736651318);
    glVertex2d(-5.5809367396344,-0.1030608485509);
    glVertex2d(-5.2142019517722,0.0706556299101);
    glVertex2d(-4.8281653329698,0.0706556299101);
    glVertex2d(-4.4807323760477,-0.0451553557306);
    glVertex2d(-4.1526012500656,-0.1609663413713);
    glVertex2d(-3.8244701240836,-0.2381736651318);
    glVertex2d(-3.4384335052812,-0.1223626794911);
    glVertex2d(-3.1296042102393,-0.0837590176108);
    glVertex2d(-2.8207749151974,-0.1802681723114);
    glVertex2d(-2.4733419582753,-0.2381736651318);
    glVertex2d(-2.106607170413,-0.1609663413713);
    glVertex2d(-1.8170797063112,-0.1030608485509);
    glVertex2d(-1.4310430875088,-0.1030608485509);
    glVertex2d(-1.1608174543472,-0.2188718341917);
    glVertex2d(-0.813384497425,-0.3153809888923);
    glVertex2d(-0.3501405548622,-0.2188718341917);
    glVertex2d(0,0);
    glVertex2d(0.2868198661618,-0.1030608485509);
    glVertex2d(0.653554654024,-0.1995700032515);
    glVertex2d(0.9623839490659,-0.2574754960719);
    glVertex2d(1.4256278916288,-0.0837590176108);
    glVertex2d(1.8116645104312,-0.0258535247905);
    glVertex2d(2,0);
    glVertex2d(2.3328139458144,-0.1223626794911);
    glVertex2d(2.6995487336767,-0.1609663413713);
    glVertex2d(3,0);
    glVertex2d(3.3365091547006,-0.1223626794911);
    glVertex2d(3.6067347878623,-0.276777327012);
    glVertex2d(3.9155640829042,-0.3346828198324);
    glVertex2d(4.205091547006,-0.276777327012);
    glVertex2d(4.533222672988,-0.1223626794911);
    glVertex2d(4.8806556299101,-0.1609663413713);
    glVertex2d(5.1701830940119,-0.2574754960719);
    glVertex2d(5.5369178818742,-0.1223626794911);
    glVertex2d(5.8071435150358,-0.0451553557306);
    glVertex2d(6.1159728100778,-0.1609663413713);
    glVertex2d(6.4634057669999,-0.2960791579521);
    glVertex2d(6.7915368929819,-0.2574754960719);
    glVertex2d(7.1389698499041,-0.0258535247905);
    glVertex2d(7.5250064687064,0.0320519680299);
    glVertex2d(8,0);
    glVertex2d(8,-3);

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glScaled(0.7,1,1);
    glTranslated(8,0,0);
    glBegin(GL_POLYGON);
    glColor3f(0.3686,0.847,1);
    glVertex2d(8,-3);
    glVertex2d(-8,-3);
    glVertex2d(-8,0);
    glVertex2d(-7.6848363121074,-0.1223626794911);
    glVertex2d(-7.3953088480056,-0.0451553557306);
    glVertex2d(-7,0);
    glVertex2d(-6.7004429341614,0.0127501370898);
    glVertex2d(-6.3916136391194,-0.16096634137131);
    glVertex2d(-5.9862751893769,-0.2381736651318);
    glVertex2d(-5.5809367396344,-0.1030608485509);
    glVertex2d(-5.2142019517722,0.0706556299101);
    glVertex2d(-4.8281653329698,0.0706556299101);
    glVertex2d(-4.4807323760477,-0.0451553557306);
    glVertex2d(-4.1526012500656,-0.1609663413713);
    glVertex2d(-3.8244701240836,-0.2381736651318);
    glVertex2d(-3.4384335052812,-0.1223626794911);
    glVertex2d(-3.1296042102393,-0.0837590176108);
    glVertex2d(-2.8207749151974,-0.1802681723114);
    glVertex2d(-2.4733419582753,-0.2381736651318);
    glVertex2d(-2.106607170413,-0.1609663413713);
    glVertex2d(-1.8170797063112,-0.1030608485509);
    glVertex2d(-1.4310430875088,-0.1030608485509);
    glVertex2d(-1.1608174543472,-0.2188718341917);
    glVertex2d(-0.813384497425,-0.3153809888923);
    glVertex2d(-0.3501405548622,-0.2188718341917);
    glVertex2d(0,0);
    glVertex2d(0.2868198661618,-0.1030608485509);
    glVertex2d(0.653554654024,-0.1995700032515);
    glVertex2d(0.9623839490659,-0.2574754960719);
    glVertex2d(1.4256278916288,-0.0837590176108);
    glVertex2d(1.8116645104312,-0.0258535247905);
    glVertex2d(2,0);
    glVertex2d(2.3328139458144,-0.1223626794911);
    glVertex2d(2.6995487336767,-0.1609663413713);
    glVertex2d(3,0);
    glVertex2d(3.3365091547006,-0.1223626794911);
    glVertex2d(3.6067347878623,-0.276777327012);
    glVertex2d(3.9155640829042,-0.3346828198324);
    glVertex2d(4.205091547006,-0.276777327012);
    glVertex2d(4.533222672988,-0.1223626794911);
    glVertex2d(4.8806556299101,-0.1609663413713);
    glVertex2d(5.1701830940119,-0.2574754960719);
    glVertex2d(5.5369178818742,-0.1223626794911);
    glVertex2d(5.8071435150358,-0.0451553557306);
    glVertex2d(6.1159728100778,-0.1609663413713);
    glVertex2d(6.4634057669999,-0.2960791579521);
    glVertex2d(6.7915368929819,-0.2574754960719);
    glVertex2d(7.1389698499041,-0.0258535247905);
    glVertex2d(7.5250064687064,0.0320519680299);
    glVertex2d(8,0);
    glVertex2d(8,-3);

    glEnd();
    glPopMatrix();
    glPopMatrix();//wave 3
    glPopMatrix();//wave 3


    glPopMatrix();//wave

    glPushMatrix();//sand
    glTranslated(0,-9,0);
    glColor3f(0.93,0.86,0.4352);
    circle(15,3);
    glPopMatrix();


    glPushMatrix();
    if(ca<5){
        ca=ca+0.0009;

    }else
            ca=-12;
    glPushMatrix();
    glTranslated(ca,0,0);
    glPushMatrix();//cloud1
    glTranslated(8,4.3,0);
    glRotated(25,0,0,1);
    glScaled(0.6,0.6,1);
    glColor3f(1,1,1);
    circle(2,1);
    glPushMatrix();
    glRotated(49,0,0,1);
    glTranslated(0.5,0.2,0);
    circle(1.6,1);
    glPopMatrix();
    glPushMatrix();
    glTranslated(0.5,0.3,0);
    circle(0.9,1.6);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.7,0.3,0);
    circle(1.1,1.3);
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();//cloud2
    glTranslated(3,7,0);
    glColor3f(1,1,1);
    circle(2.1,1.2);
    glPushMatrix();
    glRotated(49,0,0,1);
    glTranslated(0.5,0.2,0);
    circle(1.6,1);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.7,0.3,0);
    circle(1.1,1.3);
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();//cloud3
    glTranslated(-2.2,4.9,0);
    glRotated(25,0,0,1);
    glScaled(0.4,0.4,1);
    glColor3f(1,1,1);
    circle(2,1.5);
    glPushMatrix();
    glRotated(40,0,0,1);
    glTranslated(0.7,0.2,0);
    circle(1.4,1);
    glPopMatrix();
    glPushMatrix();
    glTranslated(0.3,0.3,0);
    circle(0.9,1.7);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.7,0.3,0);
    circle(1,1.3);
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();//cloud4
    glTranslated(-5,7.6,0);
    glScaled(1.2,1.2,1);
    glColor3f(1,1,1);
    glPushMatrix();
    glTranslated(-0.5,0,0);
    glRotated(5,0,0,1);
    circle(1.9,1.2);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.3,0.5,0);
    circle(0.7,1.3);
    glPopMatrix();
    glPushMatrix();
    glRotated(49,0,0,1);
    glTranslated(0.5,0.2,0);
    circle(1.6,0.7);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.7,-0.3,0);
    circle(1,1.3);
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();//cloud5
    glTranslated(-8,4.3,0);
    glRotated(7,0,0,-1);
    glScaled(0.7,0.6,1);
    glColor3f(1,1,1);
    circle(2,1);
    glPushMatrix();
    glRotated(49,0,0,1);
    glTranslated(0.5,0.2,0);
    circle(1.6,1.3);
    glPopMatrix();
    glPushMatrix();
    glTranslated(0.5,0.3,0);
    circle(0.9,1.6);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.7,0.3,0);
    circle(1.1,1.3);
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();


    glPushMatrix();//tree
    glTranslated(6,-4.5,0);
    glScaled(1.5,1.5,1);
    glRotated(5,0,0,1);
    glPushMatrix();//steam
    glScaled(1.25,1.95,1);
    glBegin(GL_POLYGON);
    glColor3f(0.87,0.49,0.223);
    glVertex2d(-0.2280463997518,-0.7819225092978);
    glVertex2d(0.1574968896777,-0.7819225092978);
    glVertex2d(-0.0668192059904,-0.4033890978579);
    glVertex2d(-0.0948587179489,-0.0949544663142);
    glVertex2d(-0.1158883519178,0.1854406532709);
    glVertex2d(-0.1158883519178,0.3957369929597);
    glVertex2d(-0.0948587179489,0.5499543087315);
    glVertex2d(-0.0598093280008,0.711181502493);
    glVertex2d(-0.017750060063,0.9074580862025);
    glVertex2d(0.0523487198333,1.1387840598603);
    glVertex2d(-0.0107401820734,1.1528038158395);
    glVertex2d(-0.129908107897,0.879418574244);
    glVertex2d(-0.2630957897,0.4518160168767);
    glVertex2d(-0.2630957897,0.1994604092501);
    glVertex2d(-0.2981451796481,-0.0108359304387);
    glVertex2d(-0.3051550576377,-0.1229939782727);
    glVertex2d(-0.2911353016585,-0.3893693418786);
    glVertex2d(-0.2280463997518,-0.7819225092978);
    glEnd();
    glPopMatrix();

    glPushMatrix();//leaf
    glTranslated(0.173,0.431,0);
    glScaled(1.2,1.9,1);
    glBegin(GL_POLYGON);//center
    glColor3f(0.1,1,0.3);
    glVertex2d(-0.2703814473305,0.9877224100832);
    glVertex2d(-0.2194005164968,1.1151747371674);
    glVertex2d(-0.162046969309,1.2426270642515);
    glVertex2d(-0.0154767931622,1.1916461334179);
    glVertex2d(0.0418767540257,1.2426270642515);
    glVertex2d(0.1629564647556,1.1279199698758);
    glVertex2d(-0.0473398749332,1.0960568881048);
    glVertex2d(0,1);
    glVertex2d(-0.0983208057669,0.9367414792496);
    glVertex2d(-0.19391005108,0.917623630187);
    glVertex2d(-0.2703814473305,0.9877224100832);
    glEnd();

    glBegin(GL_POLYGON);//ll
    glVertex2d(-0.2703814473305,0.9877224100832);
    glVertex2d(-0.19391005108,0.917623630187);
    glVertex2d(-0.3277349945183,0.6882094414355);
    glVertex2d(-0.5826396486866,0.3504607746625);
    glVertex2d(-0.5380313342072,0.7391903722692);
    glVertex2d(-0.2703814473305,0.9877224100832);
    glEnd();

    glBegin(GL_POLYGON);//lr
    glVertex2d(-0.0983208057669,0.9367414792496);
    glVertex2d(-0.0600851076416,0.6563463596645);
    glVertex2d(0.0673672194425,0.2803619947662);
    glVertex2d(0.1183481502762,0.4651678690383);
    glVertex2d(0.0992303012135,0.7455629886234);
    glVertex2d(0.0801124521509,0.9558593283122);
    glVertex2d(0,1);
    glVertex2d(-0.0983208057669,0.9367414792496);
    glEnd();

    glBegin(GL_POLYGON);//mr
    glVertex2d(0.1629564647556,1.1279199698758);
    glVertex2d(0.3923706535071,1.1215473535216);
    glVertex2d(0.3158992572566,0.9239962465412);
    glVertex2d(0.0801124521509,0.9558593283122);
    glVertex2d(0,1);
    glVertex2d(-0.0154767931622,1.1916461334179);
    glVertex2d(0.1629564647556,1.1279199698758);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(0.3158992572566,0.9239962465412);
    glVertex2d(0.4879598988202,0.8347796175823);
    glVertex2d(0.6154122259043,0.8921331647701);
    glVertex2d(0.3923706535071,1.1215473535216);
    glVertex2d(0.3158992572566,0.9239962465412);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(0.6154122259043,0.8921331647701);
    glVertex2d(0.4879598988202,0.8347796175823);
    glVertex2d(0.5962943768417,0.5989928124766);
    glVertex2d(0.6154122259043,0.8921331647701);
    glEnd();

    glBegin(GL_POLYGON);//ml
    glVertex2d(-0.2703814473305,0.9877224100832);
    glVertex2d(-0.4296968561857,0.9622319446664);
    glVertex2d(-0.6527384285829,0.9112510138328);
    glVertex2d(-0.8566621519175,0.9048783974785);
    glVertex2d(-0.4997956360819,1.1597830516468);
    glVertex2d(-0.2194005164968,1.1151747371674);
    glVertex2d(-0.2703814473305,0.9877224100832);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(-0.6527384285829,0.9112510138328);
    glVertex2d(-0.8566621519175,0.9048783974785);
    glVertex2d(-0.933133548168,0.5862475797682);
    glVertex2d(-0.6527384285829,0.9112510138328);
    glEnd();

    glBegin(GL_POLYGON);//up
    glVertex2d(-0.162046969309,1.2426270642515);
    glVertex2d(-0.0154767931622,1.1916461334179);
    glVertex2d(0.0227589049631,1.4338055548777);
    glVertex2d(-0.1046934221211,1.4210603221693);
    glVertex2d(-0.162046969309,1.2426270642515);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(-0.1046934221211,1.4210603221693);
    glVertex2d(0.0227589049631,1.4338055548777);
    glVertex2d(0.1629564647556,1.5994935800871);
    glVertex2d(0.0291315213173,1.5740031146703);
    glVertex2d(-0.1046934221211,1.4210603221693);
    glEnd();

    glBegin(GL_POLYGON);//ur
    glVertex2d(0.0418767540257,1.2426270642515);
    glVertex2d(0.1629564647556,1.1279199698758);
    glVertex2d(0.3350171063192,1.2999806114394);
    glVertex2d(0.2394278610061,1.4146877058151);
    glVertex2d(0.0418767540257,1.2426270642515);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(0.2394278610061,1.4146877058151);
    glVertex2d(0.3350171063192,1.2999806114394);
    glVertex2d(0.4688420497576,1.3063532277936);
    glVertex2d(0.5070777478828,1.3955698567525);
    glVertex2d(0.2394278610061,1.4146877058151);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(0.5070777478828,1.3955698567525);
    glVertex2d(0.4688420497576,1.3063532277936);
    glVertex2d(0.7110014712174,1.2362544478973);
    glVertex2d(0.5070777478828,1.3955698567525);
    glEnd();

    glBegin(GL_POLYGON);//ul
    glVertex2d(-0.2703814473305,0.9877224100832);
    glVertex2d(-0.2194005164968,1.1151747371674);
    glVertex2d(-0.346852843581,1.4019424731067);
    glVertex2d(-0.3914611580604,1.2681175296684);
    glVertex2d(-0.2703814473305,0.9877224100832);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(-0.346852843581,1.4019424731067);
    glVertex2d(-0.6909741267081,1.3318436932104);
    glVertex2d(-0.8056812210839,1.2362544478973);
    glVertex2d(-0.5252861014988,1.2999806114394);
    glVertex2d(-0.3914611580604,1.2681175296684);
    glVertex2d(-0.346852843581,1.4019424731067);
    glEnd();

    glPopMatrix();


    glPopMatrix();

    glPushMatrix();//tree 2
    glScaled(0.8,0.8,1);
    glTranslated(10,-6.5,0);
    glRotated(180,0,1,0);
    glScaled(1.5,1.5,1);
    glRotated(3,0,0,1);
    glPushMatrix();//steam
    glScaled(1.25,1.95,1);
    glBegin(GL_POLYGON);
    glColor3f(0.87,0.49,0.223);
    glVertex2d(-0.2280463997518,-0.7819225092978);
    glVertex2d(0.1574968896777,-0.7819225092978);
    glVertex2d(-0.0668192059904,-0.4033890978579);
    glVertex2d(-0.0948587179489,-0.0949544663142);
    glVertex2d(-0.1158883519178,0.1854406532709);
    glVertex2d(-0.1158883519178,0.3957369929597);
    glVertex2d(-0.0948587179489,0.5499543087315);
    glVertex2d(-0.0598093280008,0.711181502493);
    glVertex2d(-0.017750060063,0.9074580862025);
    glVertex2d(0.0523487198333,1.1387840598603);
    glVertex2d(-0.0107401820734,1.1528038158395);
    glVertex2d(-0.129908107897,0.879418574244);
    glVertex2d(-0.2630957897,0.4518160168767);
    glVertex2d(-0.2630957897,0.1994604092501);
    glVertex2d(-0.2981451796481,-0.0108359304387);
    glVertex2d(-0.3051550576377,-0.1229939782727);
    glVertex2d(-0.2911353016585,-0.3893693418786);
    glVertex2d(-0.2280463997518,-0.7819225092978);
    glEnd();
    glPopMatrix();

    glPushMatrix();//leaf
    glRotated(180,0,1,0);
    glTranslated(0.173,0.431,0);
    glScaled(1.2,1.9,1);
    glBegin(GL_POLYGON);//center
    glColor3f(0.1,1,0.3);
    glVertex2d(-0.2703814473305,0.9877224100832);
    glVertex2d(-0.2194005164968,1.1151747371674);
    glVertex2d(-0.162046969309,1.2426270642515);
    glVertex2d(-0.0154767931622,1.1916461334179);
    glVertex2d(0.0418767540257,1.2426270642515);
    glVertex2d(0.1629564647556,1.1279199698758);
    glVertex2d(-0.0473398749332,1.0960568881048);
    glVertex2d(0,1);
    glVertex2d(-0.0983208057669,0.9367414792496);
    glVertex2d(-0.19391005108,0.917623630187);
    glVertex2d(-0.2703814473305,0.9877224100832);
    glEnd();

    glBegin(GL_POLYGON);//ll
    glVertex2d(-0.2703814473305,0.9877224100832);
    glVertex2d(-0.19391005108,0.917623630187);
    glVertex2d(-0.3277349945183,0.6882094414355);
    glVertex2d(-0.5826396486866,0.3504607746625);
    glVertex2d(-0.5380313342072,0.7391903722692);
    glVertex2d(-0.2703814473305,0.9877224100832);
    glEnd();
    glPushMatrix();
    glTranslated(-.29,0.03,0);
    glRotated(184,1,0,0);

    glBegin(GL_POLYGON);//lr
    glVertex2d(0.2703814473305,-0.9877224100832);
    glVertex2d(0.19391005108,-0.917623630187);
    glVertex2d(0.3277349945183,-0.6882094414355);
    glVertex2d(0.5826396486866,-0.3504607746625);
    glVertex2d(0.5380313342072,-0.7391903722692);
    glVertex2d(0.2703814473305,-0.9877224100832);
    glEnd();
    glPopMatrix();

    glBegin(GL_POLYGON);//mr
    glVertex2d(0.1629564647556,1.1279199698758);
    glVertex2d(0.3923706535071,1.1215473535216);
    glVertex2d(0.3158992572566,0.9239962465412);
    glVertex2d(0.0801124521509,0.9558593283122);
    glVertex2d(0,1);
    glVertex2d(-0.0154767931622,1.1916461334179);
    glVertex2d(0.1629564647556,1.1279199698758);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(0.3158992572566,0.9239962465412);
    glVertex2d(0.4879598988202,0.8347796175823);
    glVertex2d(0.6154122259043,0.8921331647701);
    glVertex2d(0.3923706535071,1.1215473535216);
    glVertex2d(0.3158992572566,0.9239962465412);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(0.6154122259043,0.8921331647701);
    glVertex2d(0.4879598988202,0.8347796175823);
    glVertex2d(0.5962943768417,0.5989928124766);
    glVertex2d(0.6154122259043,0.8921331647701);
    glEnd();

    glBegin(GL_POLYGON);//ml
    glVertex2d(-0.2703814473305,0.9877224100832);
    glVertex2d(-0.4296968561857,0.9622319446664);
    glVertex2d(-0.6527384285829,0.9112510138328);
    glVertex2d(-0.8566621519175,0.9048783974785);
    glVertex2d(-0.4997956360819,1.1597830516468);
    glVertex2d(-0.2194005164968,1.1151747371674);
    glVertex2d(-0.2703814473305,0.9877224100832);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(-0.6527384285829,0.9112510138328);
    glVertex2d(-0.8566621519175,0.9048783974785);
    glVertex2d(-0.933133548168,0.5862475797682);
    glVertex2d(-0.6527384285829,0.9112510138328);
    glEnd();

    glBegin(GL_POLYGON);//up
    glVertex2d(-0.162046969309,1.2426270642515);
    glVertex2d(-0.0154767931622,1.1916461334179);
    glVertex2d(0.0227589049631,1.4338055548777);
    glVertex2d(-0.1046934221211,1.4210603221693);
    glVertex2d(-0.162046969309,1.2426270642515);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(-0.1046934221211,1.4210603221693);
    glVertex2d(0.0227589049631,1.4338055548777);
    glVertex2d(0.1629564647556,1.5994935800871);
    glVertex2d(0.0291315213173,1.5740031146703);
    glVertex2d(-0.1046934221211,1.4210603221693);
    glEnd();

    glBegin(GL_POLYGON);//ur
    glVertex2d(0.0418767540257,1.2426270642515);
    glVertex2d(0.1629564647556,1.1279199698758);
    glVertex2d(0.3350171063192,1.2999806114394);
    glVertex2d(0.2394278610061,1.4146877058151);
    glVertex2d(0.0418767540257,1.2426270642515);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(0.2394278610061,1.4146877058151);
    glVertex2d(0.3350171063192,1.2999806114394);
    glVertex2d(0.4688420497576,1.3063532277936);
    glVertex2d(0.5070777478828,1.3955698567525);
    glVertex2d(0.2394278610061,1.4146877058151);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(0.5070777478828,1.3955698567525);
    glVertex2d(0.4688420497576,1.3063532277936);
    glVertex2d(0.7110014712174,1.2362544478973);
    glVertex2d(0.5070777478828,1.3955698567525);
    glEnd();

    glBegin(GL_POLYGON);//ul
    glVertex2d(-0.2703814473305,0.9877224100832);
    glVertex2d(-0.2194005164968,1.1151747371674);
    glVertex2d(-0.346852843581,1.4019424731067);
    glVertex2d(-0.3914611580604,1.2681175296684);
    glVertex2d(-0.2703814473305,0.9877224100832);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(-0.346852843581,1.4019424731067);
    glVertex2d(-0.6909741267081,1.3318436932104);
    glVertex2d(-0.8056812210839,1.2362544478973);
    glVertex2d(-0.5252861014988,1.2999806114394);
    glVertex2d(-0.3914611580604,1.2681175296684);
    glVertex2d(-0.346852843581,1.4019424731067);
    glEnd();

    glPopMatrix();


    glPopMatrix();



    glPushMatrix();//ball
    glTranslated(-5,-7,0);
    glPushMatrix();
    glRotated(45,1,1,1);
    glScaled(1,.87,1);
    glColor3f(0.3686,0.847,0.8);//skyblue

    circle(0.505,0.875);
    //glColor3f(1,0.913,0.1);
    glColor3f(0.53,1,0.07);//green
    circle(0.35,0.875);
    glColor3f(1,.4,.4);//red
    circle(0.15,0.875);
    glPopMatrix();
    glPopMatrix();





    glFlush();

}

void specialKey(int key,int x, int y){
    switch(key){
case GLUT_KEY_LEFT:
    cx--;
    glutPostRedisplay();
    break;

case GLUT_KEY_RIGHT:

    if (cx<16.5)
        cx=cx+0.03;

    else
    cx=-5.7;
    glutPostRedisplay();
    break;
    glutPostRedisplay();
    break;

    case GLUT_KEY_DOWN:
    cy--;
    glutPostRedisplay();
    break;

    case GLUT_KEY_UP:
    cy++;
    glutPostRedisplay();
    break;

    default:
        break;
    }
}
void rotateD(){

if (cm>-19){
angle=angle-0.29;
cm=cm-0.015;
}
else
{
 cm=24;
}

glutPostRedisplay();
}
void rotateb(){
if (cx<16.5)
        cx= cx+0.01;

    else
    cx=-5.7;

glutPostRedisplay();
}
void rotatea(){

if (cm>-19){
angle=angle-0.29;
cm=cm-0.015;
}
else
{
 cm=24;
}

if (cx<16.5)
        cx= cx+0.01;

    else
    cx=-5.7;
glutPostRedisplay();
}
void normalKey(unsigned char key, int x,int y){
 switch(key){
 case 'd':                 //dolphin
     glutIdleFunc(rotateD);

     break;
     case 'b':             //boat
     glutIdleFunc(rotateb);

     break;
 case 'a':                 //all
    glutIdleFunc(rotatea);
    glutPostRedisplay();
    break;
    case 's':               //stop
    glutIdleFunc(NULL);
    glutPostRedisplay();


 default:
    break;
 }

}
void mouse(int button, int state,int x,int y){

switch(button){
case GLUT_LEFT_BUTTON:  //all
if(state==GLUT_DOWN){
    glutIdleFunc(rotatea);
}
break;

case GLUT_RIGHT_BUTTON:  //stop
if(state==GLUT_DOWN){
glutIdleFunc(NULL);
glutPostRedisplay();
}
break;
default:
    break;
}
}
int main()
{
   // glutInit(&argc, argv);
    glutInitWindowSize(glutGet(GLUT_SCREEN_WIDTH),glutGet(GLUT_SCREEN_HEIGHT));
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("A beautiful Seascape");
    init();
    glutDisplayFunc(myDisplay);
    glutMouseFunc(mouse);
    glutSpecialFunc(specialKey);
    glutKeyboardFunc(normalKey);
    glutMainLoop();
    return 0;
}

