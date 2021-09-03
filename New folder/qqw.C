#include<string>
#include<math.h>
#include<ctype.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
int car1(int r,int track,int speed1,int g);
int car2(int r,int track,int speed2,int g);
int main()
{
initwindow(1365, 700);

int x=0,page=0,y=0,q,i,Speedo=30,w,e=0,r=0,t=0,u=0,s,speed1,speed,speed2,track,pair,numofcar,p,o,g=0,v,b;

 s=time(NULL);
  for(q=700;q<6000;q++)
{
     setactivepage(page);
   setvisualpage(1-page);

    cleardevice();
//for background
    setcolor(CYAN);
 rectangle(0,0,1365,700);
  setfillstyle(1,CYAN);
 floodfill(1,1,CYAN);

//for road
 setcolor(WHITE);
 rectangle(470,-1,899,700);
 setfillstyle(1,8);
   floodfill(583,0,WHITE);
 //for white strip
   for(i=-700;i<700;i=i+100)

   { rectangle(674,10+i+y,694,60+i+y);
      setfillstyle(1,WHITE);
      floodfill(675,30+i+y,15);
   }
    if(y<700)
    {
      y=y+15;
    }
    if(y>=700)
    {
     y=0;
    }

//for life and point
  settextstyle(10,0,2);
  outtextxy(10,10,"LIFE:");
   outtextxy(10,40,"POINTS:");

   setfillstyle(1,WHITE);
   circle(90,20,6);
   floodfill(91,21,WHITE);

   circle(110,20,6);
   floodfill(110,21,WHITE);

   circle(130,20,6);
   floodfill(131,21,WHITE);

   settextstyle(1,0,2);
   char arr[10];
   sprintf(arr,"%d",q-700 );
   outtextxy(100,40, arr);

 //for car
      if(x<323)
     { readimagefile("car9.jpg",471+x,500,595+x,700);

      }


       if(GetAsyncKeyState(VK_RIGHT))
      {
       x+=Speedo;
      }
     else if(GetAsyncKeyState(VK_LEFT))
     {
       x-=Speedo;
     }

     if(x>=323)
      {
        x=x-Speedo;
       }
      if(x<=-1)
      {
          x=x+Speedo;
      }


// enemy car

        if(u==0)
      { srand(s);
        s=s+5;
        numofcar=(rand()%2)+1;
        if(numofcar==1)
        {
           srand(s);
           s=s+5;
         track=(rand()%3)+1;
          srand(s);
          s=s+5;
          speed1=(rand()%3)+1;
        }
        if(numofcar==2)
        {
           srand(s);
           s=s+5;
         pair=(rand()%4)+1;

          srand(s);
          s=s+5;
         speed1=(rand()%3)+1;
         srand(s);
          s=s+5;
         speed2=(rand()%3)+1;
        }
      }
      if(numofcar==1)
   {
       e=car1(e,track,speed1,g);
     speed=speed1;
//  u=e;

        if(u<700)
    {
      u=e+9+g;
    }
    if(u>=700)
    { g=g+2;
     u=0;
    }
   }
    if(numofcar==2)


   {if(pair==1)
    {
      p=1;
      o=2;
    }
    if(pair==2)
    {
      p=1;
      o=3;
    }
    if(pair==3)
    {
      p=2;
      o=3;
    }
    if(pair==4)
    {
      p=3;
      o=1;
    }
    e=car1(e,p,speed1,g);
    r=car2(r,o,speed2,g);
   // u=r<=e?r:e;


   if(u<700)
    {
      u=r+9+g;
    }
    if(u>=700)
    { g=g+2;
     u=0;
    }
    }
   b=650-g;
  //ellipse(1200,600,,360,80,70);
//  v=pow((2-b*b),1/2);
 // line(1200,600,v,b);







    //stop


           w=4;
          if(w==getpixel(515+x,528)||w==getpixel(480+x,528)||w==getpixel(566+x,528))
            {printf("%d",q-700);
            getch();
            closegraph();
             return 0;
            }
   /*outtextxy(480,528,".");
    outtextxy(515,528,".");
    outtextxy(555,528,".");*/


   page=1-page;
   delay(10);
   }
   getch();
   closegraph();
   return 0;}

//function
  int car1(int r,int track,int speed1,int g)
   {
     int q,w;

     if(track==1)
     {
         q=0;
     }
     if(track==2)
     {
         q=130;
     }
     if(track==3)
     {
         q=260;
     }
     if(speed1==1)
     {
         w=4;
     }
     if(speed1==2)
     {
         w=5;
     }
     if(speed1==3)
     {
         w=6;
     }
    /*  setcolor(4);
    setfillstyle(1,4);
    rectangle(500+q,10+r,600+q,170+r);
      floodfill(501+q,11+r,4);
*/

   int k;
     q=22+q;

     k=-550;

    readimagefile("enm1.jpg",475+q,520+r+k,585+q,300+r+k);
     if(r<700)
    {
        r=r+9+g;
    }
    if(r>=700)
    {
     r=0;
    }
   return r;}



     int car2(int r,int track,int speed2,int g)
   {
     int q,w;

     if(track==1)
     { //kishan singh is a brillent student when he was in the 12th class but now condition change now he became brillent and tallented student and he
         q=0;
     }
     if(track==2)
     {
         q=130;
     }
     if(track==3)
     {
         q=260;
     }
     if(speed2==1)
     {
         w=4;
     }
     if(speed2==2)
     {
         w=5;
     }
     if(speed2==3)
     {
         w=6;
     }

    int k;
     q=22+q;

     k=-550;

  readimagefile("enm2.jpg",475+q,520+r+k,585+q,300+r+k);

       if(r<700)
    {
      r=r+9+g;
    }
    if(r>=700)
    {
     r=0;
    }
   return r;}

