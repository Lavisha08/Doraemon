#include <GL/glut.h>
#include <cmath>
#include <iostream>
int x,y;
int rFlag=0;

float position = 300.0f;
float elapsedTime = 0.0f;
float animationDuration = 16.0f;
bool isStopped=false;
bool showMessage = false;
bool isJumping = false;
float jumpHeight = 20.0f;
float jumpSpeed = 0.5f;
float verticalPosition = 0.0f;
float flyHeight = 50.0f;
float flySpeed = 1.0f;
bool isFlying=false;
float scale_factor=1.0;



void draw_pixel(float x1,float y1)
{
	glColor3f(0.0,0.0,1.0);
	glPointSize(5.0);
	glBegin(GL_POINTS);
	glVertex2f(x1,y1);
	glEnd();
}



void mountains()
{
   glBegin(GL_POLYGON); //mountains
 glColor3f(0.0,1.0,0.0);
 glVertex2f(0,350);
 glVertex2f(50,420);
 glVertex2f(100,350);
 glEnd();

    glBegin(GL_POLYGON); //mountains
 glColor3f(0.0,1.0,0.0);
 glVertex2f(100,350);
 glVertex2f(150,420);
 glVertex2f(200,350);
 glEnd();

glBegin(GL_POLYGON); //mountains
 glColor3f(0.0,1.0,0.0);
 glVertex2f(200,350);
 glVertex2f(250,420);
 glVertex2f(300,350);
 glEnd();


glBegin(GL_POLYGON); //mountains
 glColor3f(0.0,1.0,0.0);
 glVertex2f(300,350);
 glVertex2f(350,420);
 glVertex2f(400,350);
 glEnd();

 glBegin(GL_POLYGON); //mountains
 glColor3f(0.0,1.0,0.0);
 glVertex2f(400,350);
 glVertex2f(450,420);
 glVertex2f(499,350);
 glEnd();

}
void house()
{
    glBegin(GL_POLYGON);
 glColor3f(1.0,0.0,0.0);
 glVertex2f(370,250);
 glVertex2f(435,300);
 glVertex2f(495,250);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(1,1,1);
 glVertex2f(370,250);
 glVertex2f(495,250);
 glVertex2f(495,100);
 glVertex2f(370,100);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(1,0,1);
 glVertex2f(380,200);
 glVertex2f(400,200);
 glVertex2f(400,180);
 glVertex2f(380,180);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(1,0,1);
 glVertex2f(465,200);
 glVertex2f(485,200);
 glVertex2f(485,180);
 glVertex2f(465,180);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(0,0,1);
 glVertex2f(410,170);
 glVertex2f(455,170);
 glVertex2f(455,100);
 glVertex2f(410,100);
 glEnd();

}

void doraemon()
{
    glPushMatrix();
    glTranslatef(0.0f, verticalPosition, 0.0f);
    glScalef(scale_factor, scale_factor, scale_factor);

    glBegin(GL_POLYGON);
 glColor3f(0,0,1);
 glVertex2f(200,200);
 glVertex2f(220,200);
 glVertex2f(220,220);
 glVertex2f(200,220);
 glEnd();




glBegin(GL_POLYGON);
 glColor3f(0,0,1);
 glVertex2f(190,200);
 glVertex2f(230,200);
 glVertex2f(230,140);
 glVertex2f(190,140);
 glEnd();


glBegin(GL_POLYGON);
 glColor3f(1,1,1);
 glVertex2f(200,165);
 glVertex2f(220,165);
 glVertex2f(220,150);
 glVertex2f(200,150);
 glEnd();

/* glBegin(GL_POLYGON);
 glColor3f(0,0,1);
 glVertex2f(190,200);
 glVertex2f(230,200);
 glVertex2f(230,140);
 glVertex2f(190,140);
 glEnd();*/

 glBegin(GL_POLYGON);
 glColor3f(0,0,1);
 glVertex2f(190,140);
 glVertex2f(205,140);
 glVertex2f(205,80);
 glVertex2f(190,80);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(0,0,1);
 glVertex2f(215,140);
 glVertex2f(230,140);
 glVertex2f(230,80);
 glVertex2f(215,80);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(0,0,1);
 glVertex2f(190,195);
 glVertex2f(190,180);
 glVertex2f(175,140);
 glVertex2f(160,140);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(0,0,1);
 glVertex2f(230,195);
 glVertex2f(230,180);
 glVertex2f(245,140);
 glVertex2f(260,140);
 glEnd();

 glColor3f(1.0f, 1.0f, 1.0f);
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glVertex2f(206, 214);
    glVertex2f(214, 214);
    glEnd();
   
   
   /* glColor3f(0.0f, 0.5f, 0.9f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++)
    {
        float theta = i * 3.14159 / 180;
        glVertex2f(200 + 25 * cos(theta), 200 + 30 * sin(theta));
    }
    glEnd();

    // Face
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++)
    {
        float theta = i * 3.14159 / 180;
        glVertex2f(200 + 20 * cos(theta), 210 + 20 * sin(theta));
    }
    glEnd();

    // Eyes
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glVertex2f(190, 215);
    glVertex2f(210, 215);
    glEnd();

    // Mouth
    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glVertex2f(190, 200);
    glVertex2f(210, 200);
    glEnd();

    // Whiskers
    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(1.0f);
    glBegin(GL_LINES);
    glVertex2f(180, 210);
    glVertex2f(170, 210);
    glVertex2f(180, 200);
    glVertex2f(170, 200);
    glVertex2f(180, 190);
    glVertex2f(170, 190);
    glVertex2f(220, 210);
    glVertex2f(230, 210);
    glVertex2f(220, 200);
    glVertex2f(230, 200);
    glVertex2f(220, 190);
    glVertex2f(230, 190);
    glEnd();

    // Nose
    glColor3f(1.0f, 0.5f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(200, 210);
    glVertex2f(195, 205);
    glVertex2f(205, 205);
    glEnd();

    // Bell
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++)
    {
        float theta = i * 3.14159 / 180;
        glVertex2f(200 + 5 * cos(theta), 200 - 35 * sin(theta));
    }
    glEnd();

    // Legs
    glColor3f(0.0f, 0.5f, 0.9f);
    glBegin(GL_QUADS);
    glVertex2f(192, 175);
    glVertex2f(192, 125);
    glVertex2f(208, 125);
    glVertex2f(208, 175);
    glEnd();

    // Hands
    glColor3f(0.0f, 0.5f, 0.9f);
    glBegin(GL_QUADS);
    glVertex2f(165, 210);
    glVertex2f(165, 190);
    glVertex2f(192, 190);
    glVertex2f(192, 210);
    glVertex2f(208, 210);
    glVertex2f(208, 190);
    glVertex2f(235, 190);
    glVertex2f(235, 210);
    glEnd();

    // Pocket
    glColor3f(0.0f, 0.5f, 0.9f);
    glBegin(GL_POLYGON);
    glVertex2f(200, 175);
    glVertex2f(190, 160);
    glVertex2f(200, 145);
    glVertex2f(210, 160);
    glEnd();

    // Eyes Highlight
    glColor3f(1.0f, 1.0f, 1.0f);
    glPointSize(1.0f);
    glBegin(GL_POINTS);
    glVertex2f(188, 217);
    glVertex2f(192, 217);
    glEnd();

    // Body Pocket
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(3.0f);
    glBegin(GL_POINTS);
    glVertex2f(200, 160);
    glEnd();

    // Hat
    glColor3f(0.0f, 0.5f, 0.9f);
    glBegin(GL_POLYGON);
    glVertex2f(200, 230);
    glVertex2f(180, 240);
    glVertex2f(180, 250);
    glVertex2f(220, 250);
    glVertex2f(220, 240);
    glEnd();*/
 glPopMatrix();
  }
/*void rot(){
	if(ro==1){
            trX=0.0;trY=0.0;th+=0.1;
                    draw_pixel(0.0,0.0);
    }
}*/

void increase_size() {
    scale_factor *= 0.8;  // Double the size of Doraemon
    glutPostRedisplay();
}

void restore_size() {
    scale_factor *= 1.2;  // Restore Doraemon to its original size
    glutPostRedisplay();
}

void keyboard(unsigned char key, int x, int y) {
    if (key == 'i' || key == 'I') {
        increase_size();
    } else if (key == 'r' || key == 'R') {
        restore_size();
    }
}
float th=0.0;
float trX=0.0,trY=0.0;

void display()
{
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    glTranslatef(position, 0.0f, 0.0f);
    doraemon();
    glPopMatrix();

    mountains();
    house();
    if(isStopped){
                   glPushMatrix();
            glTranslatef(190.0f, 250.0f, 0.0f);
            glColor3f(1.0f, 1.0f, 1.0f);
            glBegin(GL_QUADS);
            glVertex2f(-200.0f, -20.0f);
            glVertex2f(200.0f, -20.0f);
            glVertex2f(200.0f, 20.0f);
            glVertex2f(-200.0f, 20.0f);
            glEnd();
            glPopMatrix();

            // Draw text inside the speech bubble for the first message
            glColor3f(0.0f, 0.0f, 0.0f);
            glRasterPos2f(40, 245);
            std::string message1 = "Such nice weather!let's walk a bit";
            for (const char& c : message1) {
                glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c);
        }
    }
    glLoadIdentity();
    /*void ro(){
	    trX=0.0;trY=0.0;th+=0.1;
                    draw_pixel(0.0,0.0);
    }*/
    
	    if(rFlag==3)
	    {
		    trX=0.0;trY=0.0;th+=0.2;
		    draw_pixel(0.0,0.0);
		    
	    }
	    if(rFlag==1)
	    {
		    if (isJumping) 
		    {
        		if (verticalPosition <= 100.0f) 
			{
            			verticalPosition += jumpSpeed;
        		} else 
			{
            			isJumping = false;
        		}
    			} else {
        			if (verticalPosition >= -120.0f) {
            					verticalPosition -= jumpSpeed;
        			} else {
            				isJumping = true;
        		}
    		}
		    glTranslatef(0, y, 0.0f);
	    }
	    if(rFlag==2)
	    {
               if (isFlying) {
        	   if (verticalPosition <= flyHeight) {
            			verticalPosition += flySpeed;
        	} else {
           		 isFlying = false;
        		}
    		} else {
        		if (verticalPosition >= -50.0f) {
            		verticalPosition -= flySpeed;
        	} else {
            		isFlying = true;
        		}
    		}
		glTranslatef(verticalPosition,0.0f , 0.0f);
	    }
	  
	    /*glTranslatef(0, y, 0.0f);*/
	    glTranslatef(trX,trY,0.0);
	    glRotatef(th,0.0,0.0,1.0);
	    glTranslatef(-trX,-trY,0.0);
	    
	    doraemon();
	    glutPostRedisplay();
	    glutSwapBuffers();


    glFlush();
}

void update(int value)
{
    if (elapsedTime <= animationDuration) 
    {
        if (position > 80.0f) 
	{
            position -= 1.0f;
        } 
	else if (position <= 80.0f) 
	{
            isStopped = true;
	   
        }
        elapsedTime += 0.03f;
    
        if (elapsedTime > 10.0f) 
	{
        isStopped = false;
        position -= 1.0f;
	}
    }
    else{
	if(position>=-130)
	{
		/*position+=2.0f;*/
	if(elapsedTime>16.0f)
	{
		position+=1.0f;
		position=-100.0f;
	}
    }
	
	
    }
  
    

    glutPostRedisplay();

    if (elapsedTime <= animationDuration + 5.0f)
        glutTimerFunc(30, update, 0);

}

void myInit()
{
        glClearColor(0.0,0.0,0.0,1.0);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        gluOrtho2D(0.0,500.0,0.0,500.0);
        glMatrixMode(GL_MODELVIEW);
}
void rotateMenu(int option)
{
        if(option==1)
                rFlag=1;
        if(option==2)
                rFlag=2;
	if(option==3)
		rFlag=3;
       if(option==5)
	       rFlag=5;
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(500, 500);
    glutCreateWindow("DORAEMON");
    myInit();
        glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
        glutCreateMenu(rotateMenu);
        glutAddMenuEntry("jump",1);
        glutAddMenuEntry("earthquake",2);
        glutAddMenuEntry("Time Travel",3);
	glutAddMenuEntry("stop",5);
        glutAttachMenu(GLUT_RIGHT_BUTTON);
    
    glutTimerFunc(0, update, 0);
    glClearColor(1,1,1,1);
    glutMainLoop();
    return 0;
    }
