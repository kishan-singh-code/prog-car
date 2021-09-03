
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
int main()
{int gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver,&gmode,"c:\\tc\\bgi");

initwindow(1365, 700);

setcolor(4);
    setfillstyle(1,4);
    rectangle(500,10,600,60);
      floodfill(501,11,4);

  /* setcolor(14);
   setfillstyle(1,14);

   circle(505,554,28);
   floodfill(505,554,14);
   circle(545,554,28);
   floodfill(545,554,14);
    line(505,525,545,525);
   floodfill(525,526,14);
   ellipse(525,650,234,307,80,44);
   ellipse(522,660,150,206,49,60);
   ellipse(530,660,335,30,49,60);
   line(478,555,478,630);
   line(571,555,571,630);
   floodfill(522,660,14);

   setcolor(0);
   setfillstyle(9,8);
   ellipse(526,620,46,140,52,60);
   ellipse(525,640,68,112,60,50);
   line(486,580,502,595);
   line(561,578,545,594);
   ellipse(548,680,85,128,75,110);
  // outtextxy(520,570,"a");
  floodfill(520,570,0);
  setfillstyle(9,9);
  floodfill(520,580,0);
  setcolor(8);
  setfillstyle(9,8);
   line(484,585,500,599);
   line(563,583,549,597);
   line(484,585,484,630);
   line(500,599,500,650);
   //line(484,630,500,650);


   //outtextxy(486,592,"a");

   //setcolor(8);
   //setfillstyle(1,0);
    line(500,650,492,662);
    line(492,662,484,630);
    floodfill(486,592,8);
    //floodfill(496,650,8);
 //  setfillstyle(1,0);
     setcolor(8);
      setfillstyle(9,9);
   line(549,598,549,650);
   line(564,583,564,630);
//   line(549,650,564,630);
   // floodfill(553,603,8);

    line(549,650,558,661);
    line(558,661,564,630);
    floodfill(553,603,8);



     setfillstyle(9,8);
    ellipse(526,604,242,296,52,60);
   ellipse(525,638,250,293,60,50);
   line(548,656,555,665);
   line(555,665,548,684);

   line(500,655,495,666);
   line(495,666,504,684);
   floodfill(520,667,8);

     setcolor(0);
     setfillstyle(1,15);
    ellipse(495,558,85,180,15,25);
    ellipse(500,564,108,160,16,25);
     circle(495,537,4);
      circle(483,557,3);
       floodfill(495,537,0);
       floodfill(483,557,0);
        setfillstyle(1,15);
        floodfill(483,553,0);

     setfillstyle(1,15);
    ellipse(555,557,8,92,15,25);
    ellipse(550,563,18,70,16,25);
     circle(555,536,4);
      circle(567,555,3);
      floodfill(555,536,0);
      floodfill(567,555,0);
      setfillstyle(1,15);
      floodfill(560,536,0);

      setcolor(4);
      //rectangle(555,670,570,684);
      setfillstyle(1,RED);
      ellipse(524,588,244,257,110,100);
      line(499,684,503,692);
      //floodfill(499,686,4);



       // setfillstyle(1,4);
       ellipse(524,588,285,300,110,100);
       line(552,684,548,692);


      ellipse(522,660,150,206,49,60);
   ellipse(530,660,335,30,49,60);
   ellipse(525,650,234,307,80,44);
       floodfill(552,686,4);
         floodfill(499,686,4);
// shin
   //  setcolor(4);
   // setfillstyle()
    //ellipse(548,680,85,128,75,110);
   // floodfill(493,542,15);
   // fillellipse(560,542,7,7);
  //outtextxy(504,684,"a");
    //floodfill(201,389,4);
   //floodfill(249,389,4);
    //floodfill(226,392,4);
   // ellipse()

 //  floodfill(226,380,4);
 */

 /*   q=q+10; */
 int r=0,q;
  q=25;
     r=r-550;


       setcolor(14);
   setfillstyle(1,14);

   circle(505+q,554+r,28);
   floodfill(505+q,554+r,14);
   circle(545+q,554+r,28);
   floodfill(545+q,554+r,14);
    line(505+q,525+r,545+q,525+r);
   floodfill(525+q,526+r,14);
   ellipse(525+q,650+r,234,307,80,44);
   ellipse(522+q,660+r,150,206,49,60);
   ellipse(530+q,660+r,335,30,49,60);
   line(478+q,555+r,478+q,630+r);
   line(571+q,555+r,571+q,630+r);
   floodfill(522+q,660+r,14);

   setcolor(0);
   setfillstyle(9,8);
   ellipse(526+q,620+r,46,140,52,60);
   ellipse(525+q,640+r,68,112,60,50);
   line(486+q,580+r,502+q,595+r);
   line(561+q,578+r,545+q,594+r);
   ellipse(548+q,680+r,85,128,75,110);


  floodfill(520+q,570+r,0);
  setfillstyle(9,9);
  floodfill(520+q,580+r,0);
  setcolor(8);
  setfillstyle(9,8);
   line(484+q,585+r,500+q,599+r);
   line(563+q,583+r,549+q,597+r);
   line(484+q,585+r,484+q,630+r);
   line(500+q,599+r,500+q,650+r);


    line(500+q,650+r,492+q,662+r);
    line(492+q,662+r,484+q,630+r);
    floodfill(486+q,592+r,8);

     setcolor(8);
      setfillstyle(9,9);
   line(549+q,598+r,549+q,650+r);
   line(564+q,583+r,564+q,630+r);


    line(549+q,650+r,558+q,661+r);
    line(558+q,661+r,564+q,630+r);

    floodfill(553+q,603+r,8);



     setfillstyle(9,8);
    ellipse(526+q,604+r,242,296,52,60);
   ellipse(525+q,638+r,250,293,60,50);
   line(548+q,656+r,555+q,665+r);
   line(555+q,665+r,548+q,684+r);

   line(500+q,655+r,495+q,666+r);
   line(495+q,666+r,504+q,684+r);
   floodfill(520+q,667+r,8);

     setcolor(0);
     setfillstyle(1,15);
    ellipse(495+q,558+r,85,180,15,25);
    ellipse(500+q,564+r,108,160,16,25);
     circle(495+q,537+r,4);
      circle(483+q,557+r,3);
       floodfill(495+q,537+r,0);
       floodfill(483+q,557+r,0);
        setfillstyle(1,15);
        floodfill(483+q,553+r,0);

     setfillstyle(1,15);
    ellipse(555+q,557+r,8,92,15,25);
    ellipse(550+q,563+r,18,70,16,25);
     circle(555+q,536+r,4);
      circle(567+q,555+r,3);
      floodfill(555+q,536+r,0);
      floodfill(567+q,555+r,0);
      setfillstyle(1,15);
      floodfill(560+q,536+r,0);

     setcolor(4);

      setfillstyle(1,RED);
      ellipse(524+q,588+r,244,257,110,100);
      line(499+q,684+r,503+q,692+r);


       ellipse(524+q,588+r,285,300,110,100);
       line(552+q,684+r,548+q,692+r);


      ellipse(522+q,660+r,150,206,49,60);
   ellipse(530+q,660+r,335,30,49,60);
   ellipse(525+q,650+r,234,307,80,44);
       floodfill(552+q,686+r,4);
         floodfill(499+q,686+r,4);
/*
setcolor(4);
    setfillstyle(1,4);
    rectangle(500+q,10+r,600+q,60+r);
      floodfill(501+q,11+r,4);


*/



   getch();
   closegraph();
   return 0;}
