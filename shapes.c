#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BG");
	line(10,20,600,400);	//draw a line.
	arc(200,250,0,150,600);	//draw a arc.
	circle(150,100,100);	//draw a circle.
	bar(100,150,200,250);	//draw a bar
	getch();
	closegraph();
	return 0;
	
}