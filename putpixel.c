#include <stdio.h> //header file
#include <conio.h> //header file
#include <graphics.h> ///header file for graphics mode
void main()
  { 
  int gd = DETECT,gm;  //detecting the graphics.
  initgraph(&gd,&gm,"C:\\BG\\TEMP"); //initialzing the graphics
  putpixel(100,100,RED);//x-coord.,y-coord,Color
  getch();
  closegraph();
  }
