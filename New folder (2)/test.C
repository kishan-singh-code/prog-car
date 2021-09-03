#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{ initwindow(1365,700,"insert image");
  setcolor(WHITE);
 rectangle(0,0,1364,699);
 setfillstyle(1,8);
   floodfill(583,10,WHITE);
//readimagefile("a.jpg",0,0,800,700);
 //printf("HELLOW\n");
  getch();
 return 0;
}
