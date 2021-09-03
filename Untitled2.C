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
    label:
initwindow(1365, 700);

int x=0,page=0,y=0,q,i,Speedo=20,w,e=0,r=0,t=0,u=0,s,speed1,speed,speed2,track,pair,numofcar,p,o,g=0,v,b,pagee=0;

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



   settextstyle(1,0,2);
   char arr[10];
   sprintf(arr,"%d",q-700 );
   outtextxy(100,40, arr);

 //for car
      if(x<323)
     {
    setcolor(14);
   setfillstyle(1,14);

   circle(505+x,554,28);
   floodfill(505+x,554,14);
   circle(545+x,554,28);
   floodfill(545+x,554,14);
    line(505+x,525,545+x,525);
   floodfill(525+x,526,14);
   ellipse(525+x,650,234,307,80,44);
   ellipse(522+x,660,150,206,49,60);
   ellipse(530+x,660,335,30,49,60);
   line(478+x,555,478+x,630);
   line(571+x,555,571+x,630);
   floodfill(522+x,660,14);

   setcolor(0);
   setfillstyle(9,8);
   ellipse(526+x,620,46,140,52,60);
   ellipse(525+x,640,68,112,60,50);
   line(486+x,580,502+x,595);
   line(561+x,578,545+x,594);
   ellipse(548+x,680,85,128,75,110);


  floodfill(520+x,570,0);
  setfillstyle(9,9);
  floodfill(520+x,580,0);
  setcolor(8);
  setfillstyle(9,8);
   line(484+x,585,500+x,599);
   line(563+x,583,549+x,597);
   line(484+x,585,484+x,630);
   line(500+x,599,500+x,650);


    line(500+x,650,492+x,662);
    line(492+x,662,484+x,630);
    floodfill(486+x,592,8);

     setcolor(8);
      setfillstyle(9,9);
   line(549+x,598,549+x,650);
   line(564+x,583,564+x,630);


    line(549+x,650,558+x,661);
    line(558+x,661,564+x,630);
    floodfill(553+x,603,8);



     setfillstyle(9,8);
    ellipse(526+x,604,242,296,52,60);
   ellipse(525+x,638,250,293,60,50);
   line(548+x,656,555+x,665);
   line(555+x,665,548+x,684);

   line(500+x,655,495+x,666);
   line(495+x,666,504+x,684);
   floodfill(520+x,667,8);

     setcolor(0);
     setfillstyle(1,15);
    ellipse(495+x,558,85,180,15,25);
    ellipse(500+x,564,108,160,16,25);
     circle(495+x,537,4);
      circle(483+x,557,3);
       floodfill(495+x,537,0);
       floodfill(483+x,557,0);
        setfillstyle(1,15);
        floodfill(483+x,553,0);

     setfillstyle(1,15);
    ellipse(555+x,557,8,92,15,25);
    ellipse(550+x,563,18,70,16,25);
     circle(555+x,536,4);
      circle(567+x,555,3);
      floodfill(555+x,536,0);
      floodfill(567+x,555,0);
      setfillstyle(1,15);
      floodfill(560+x,536,0);

     setcolor(4);

      setfillstyle(1,RED);
      ellipse(524+x,588,244,257,110,100);
      line(499+x,684,503+x,692);


       ellipse(524+x,588,285,300,110,100);
       line(552+x,684,548+x,692);


      ellipse(522+x,660,150,206,49,60);
   ellipse(530+x,660,335,30,49,60);
   ellipse(525+x,650,234,307,80,44);
       floodfill(552+x,686,4);
         floodfill(499+x,686,4);
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
            {

              while(1)
{
     setactivepage(pagee);
   setvisualpage(1-pagee);

    cleardevice();

                setcolor(LIGHTGREEN);
             rectangle(0,0,1365,700);
              setfillstyle(1,LIGHTGREEN);
             floodfill(1,1,LIGHTGREEN);

              settextstyle(10,0,6);
              outtextxy(450,200,"RETRY: PRESS ENTER");
              outtextxy(450,300,"EXIT: PRESS ESC");
               outtextxy(450,400,"POINTS:");
               settextstyle(1,0,6);
               char arr[10];
               sprintf(arr,"%d",q-700 );
               outtextxy(700,400, arr);

                      if(GetAsyncKeyState(VK_RETURN))
                      {
                          //printf("ggggggg\n");
                                      goto label;
                                      //closegraph();
                                      //return 0;

                      }
                     else if(GetAsyncKeyState(VK_ESCAPE))
                     {
                       break;
                     }
                     else
                     {

                     }




   pagee=1-pagee;
   delay(10);
   }


             //delay(5000);

            printf("%d",q-700);
            //printf("Enter a string\n");
            //getch();
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


       setcolor(4);
   setfillstyle(1,4);

   circle(505+q,554+r+k,28);
   floodfill(505+q,554+r+k,4);
   circle(545+q,554+r+k,28);
   floodfill(545+q,554+r+k,4);

    setcolor(4);
   setfillstyle(1,4);

    line(505+q,525+r+k,545+q,525+r+k);
   floodfill(525+q,526+r+k,4);
   ellipse(525+q,650+r+k,234,307,80,44);
   ellipse(522+q,660+r+k,150,206,49,60);
   ellipse(530+q,660+r+k,335,30,49,60);
   line(478+q,555+r+k,478+q,630+r+k);
   line(571+q,555+r+k,571+q,630+r+k);
   floodfill(522+q,660+r+k,4);

   setcolor(0);
   setfillstyle(9,8);
   ellipse(526+q,620+r+k,46,140,52,60);
   ellipse(525+q,640+r+k,68,112,60,50);
   line(486+q,580+r+k,502+q,595+r+k);
   line(561+q,578+r+k,545+q,594+r+k);
   ellipse(548+q,680+r+k,85,128,75,110);


  floodfill(520+q,570+r+k,0);
  setfillstyle(9,9);
  floodfill(520+q,580+r+k,0);
  setcolor(8);
  setfillstyle(9,8);
   line(484+q,585+r+k,500+q,599+r+k);
   line(563+q,583+r+k,549+q,597+r+k);
   line(484+q,585+r+k,484+q,630+r+k);
   line(500+q,599+r+k,500+q,650+r+k);


    line(500+q,650+r+k,492+q,662+r+k);
    line(492+q,662+r+k,484+q,630+r+k);
    floodfill(486+q,592+r+k,8);

     setcolor(8);
      setfillstyle(9,9);
   line(549+q,598+r+k,549+q,650+r+k);
   line(564+q,583+r+k,564+q,630+r+k);


    line(549+q,650+r+k,558+q,661+r+k);
    line(558+q,661+r+k,564+q,630+r+k);

    floodfill(553+q,603+r+k,8);



     setfillstyle(9,8);
    ellipse(526+q,604+r+k,242,296,52,60);
   ellipse(525+q,638+r+k,250,293,60,50);
   line(548+q,656+r+k,555+q,665+r+k);
   line(555+q,665+r+k,548+q,684+r+k);

   line(500+q,655+r+k,495+q,666+r+k);
   line(495+q,666+r+k,504+q,684+r+k);
   floodfill(520+q,667+r+k,8);

     setcolor(0);
     setfillstyle(1,15);
    ellipse(495+q,558+r+k,85,180,15,25);
    ellipse(500+q,564+r+k,108,160,16,25);
     circle(495+q,537+r+k,4);
      circle(483+q,557+r+k,3);
       floodfill(495+q,537+r+k,0);
       floodfill(483+q,557+r+k,0);
        setfillstyle(1,15);
        floodfill(483+q,553+r+k,0);

     setfillstyle(1,15);
    ellipse(555+q,557+r+k,8,92,15,25);
    ellipse(550+q,563+r+k,18,70,16,25);
     circle(555+q,536+r+k,4);
      circle(567+q,555+r+k,3);
      floodfill(555+q,536+r+k,0);
      floodfill(567+q,555+r+k,0);
      setfillstyle(1,15);
      floodfill(560+q,536+r+k,0);

     setcolor(4);

      setfillstyle(1,RED);
      ellipse(524+q,588+r+k,244,257,110,100);
      line(499+q,684+r+k,503+q,692+r+k);


       ellipse(524+q,588+r+k,285,300,110,100);
       line(552+q,684+r+k,548+q,692+r+k);


      ellipse(522+q,660+r+k,150,206,49,60);
   ellipse(530+q,660+r+k,335,30,49,60);
    ellipse(525+q,650+r+k,234,307,80,44);
    floodfill(552+q,686+r+k,4);
    floodfill(499+q,686+r+k,4);

    //circle(100,100,100);



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

  /*   q=q+10; */

    int k;
     q=22+q;

     k=-550;


       setcolor(4);
   setfillstyle(1,4);

   circle(505+q,554+r+k,28);
   floodfill(505+q,554+r+k,4);
   circle(545+q,554+r+k,28);
   floodfill(545+q,554+r+k,4);

    setcolor(4);
   setfillstyle(1,4);

    line(505+q,525+r+k,545+q,525+r+k);
   floodfill(525+q,526+r+k,4);
   ellipse(525+q,650+r+k,234,307,80,44);
   ellipse(522+q,660+r+k,150,206,49,60);
   ellipse(530+q,660+r+k,335,30,49,60);
   line(478+q,555+r+k,478+q,630+r+k);
   line(571+q,555+r+k,571+q,630+r+k);
   floodfill(522+q,660+r+k,4);

   setcolor(0);
   setfillstyle(9,8);
   ellipse(526+q,620+r+k,46,140,52,60);
   ellipse(525+q,640+r+k,68,112,60,50);
   line(486+q,580+r+k,502+q,595+r+k);
   line(561+q,578+r+k,545+q,594+r+k);
   ellipse(548+q,680+r+k,85,128,75,110);


  floodfill(520+q,570+r+k,0);
  setfillstyle(9,9);
  floodfill(520+q,580+r+k,0);
  setcolor(8);
  setfillstyle(9,8);
   line(484+q,585+r+k,500+q,599+r+k);
   line(563+q,583+r+k,549+q,597+r+k);
   line(484+q,585+r+k,484+q,630+r+k);
   line(500+q,599+r+k,500+q,650+r+k);


    line(500+q,650+r+k,492+q,662+r+k);
    line(492+q,662+r+k,484+q,630+r+k);
    floodfill(486+q,592+r+k,8);

     setcolor(8);
      setfillstyle(9,9);
   line(549+q,598+r+k,549+q,650+r+k);
   line(564+q,583+r+k,564+q,630+r+k);


    line(549+q,650+r+k,558+q,661+r+k);
    line(558+q,661+r+k,564+q,630+r+k);

    floodfill(553+q,603+r+k,8);



     setfillstyle(9,8);
    ellipse(526+q,604+r+k,242,296,52,60);
   ellipse(525+q,638+r+k,250,293,60,50);
   line(548+q,656+r+k,555+q,665+r+k);
   line(555+q,665+r+k,548+q,684+r+k);

   line(500+q,655+r+k,495+q,666+r+k);
   line(495+q,666+r+k,504+q,684+r+k);
   floodfill(520+q,667+r+k,8);

     setcolor(0);
     setfillstyle(1,15);
    ellipse(495+q,558+r+k,85,180,15,25);
    ellipse(500+q,564+r+k,108,160,16,25);
     circle(495+q,537+r+k,4);
      circle(483+q,557+r+k,3);
       floodfill(495+q,537+r+k,0);
       floodfill(483+q,557+r+k,0);
        setfillstyle(1,15);
        floodfill(483+q,553+r+k,0);

     setfillstyle(1,15);
    ellipse(555+q,557+r+k,8,92,15,25);
    ellipse(550+q,563+r+k,18,70,16,25);
     circle(555+q,536+r+k,4);
      circle(567+q,555+r+k,3);
      floodfill(555+q,536+r+k,0);
      floodfill(567+q,555+r+k,0);
      setfillstyle(1,15);
      floodfill(560+q,536+r+k,0);

     setcolor(4);

      setfillstyle(1,RED);
      ellipse(524+q,588+r+k,244,257,110,100);
      line(499+q,684+r+k,503+q,692+r+k);


       ellipse(524+q,588+r+k,285,300,110,100);
       line(552+q,684+r+k,548+q,692+r+k);


      ellipse(522+q,660+r+k,150,206,49,60);
   ellipse(530+q,660+r+k,335,30,49,60);
   ellipse(525+q,650+r+k,234,307,80,44);
       floodfill(552+q,686+r+k,4);
         floodfill(499+q,686+r+k,4);


/*
setcolor(4);
    setfillstyle(1,4);
    rectangle(500+q,10+r,600+q,170+r);
      floodfill(501+q,11+r,4);


  */





       if(r<700)
    {
      r=r+9+g;
    }
    if(r>=700)
    {
     r=0;
    }
   return r;}
  //enemy car 2
