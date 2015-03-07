/*
 Text based Maze generation using Binary Tree algorithm

 Written by Yonathan Ferry Hendrawan March 2015

 This program creates text Maze using Binary Tree algorithm.

 CodeBlocks was used as the IDE.

 The project type is GLUT. Thus, this application can be
 extended to create OpenGL based Maze.

 Codes to create a GLUT Triangle are included in the begining
 of this main.cpp file.

 This code is created and published with the purpose of
 being used as template code for Computer Graphics course
 at Universitas Trunojoyo Madura - Indonesia.
 */

#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <iostream>
#include "Grid.h"

using namespace std;
/*
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_POLYGON);
	glVertex2f(-2.0,-2.0);
	glVertex2f(0.0,1.0);
	glVertex2f(2.0,-2.0);
	glEnd();

	glFlush();
}

void myinit()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-2.0,2.0,-2.0,2.0);
	glMatrixMode(GL_MODELVIEW);
	glClearColor(1.0,1.0,1.0,1.0);
	glColor3f(0.0,0.0,1.0);
}

int main(int argc, char* argv[])
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500,500);
	//glutInitWindowPosition(100,100);
	glutCreateWindow("Segitiga Warna");
	glutDisplayFunc(display);
	myinit();
	glutMainLoop();

	return 0;
}
*/

int main(int argc, char* argv[])
{
    cout << "Aplikasi maze binary tree" << endl;
    Grid a;
	a.setSize(10);
	a.init();
	a.generateMaze();
	a.printGrid();

	return 0;
}
