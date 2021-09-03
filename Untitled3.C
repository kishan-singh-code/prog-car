#include<string.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{int n,m,u=10,s,numofcar,track,speed,l;
s=time(NULL);
for(m=0;m<3;m++)
 {
 n=(rand()%2)+1;
 printf("%d\n",n);}

  for(l=0;l<10;l++)
    {if(u==10)
      { srand(s);
        s=s+5;
        numofcar=(rand()%2)+1;

           srand(s);
           s=s+5;
         track=(rand()%3)+1;
            srand(s);
            s=s+5;
          speed=(rand()%3)+1;
        }
        printf("%d %d %d\n",numofcar,track,speed);}
      /*  if(numofcar==2)
        {
            srand(s);
            s=s+5;
         pair=(rand()%4)+1;

           srand(s);
           s=s+5;
         speed1=(rand()%3)+1;
         speed2=(rand()%3)+1;
        }
      }
      if(track==1)
   {
       e=car1(e,track,speed1);
       speed=speed1;
        if(u<700)
    {
      u=u+speed+3;
    }
    if(u>=700)
    {
     u=10;
    }
   }
    if(track==2)
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
    e=car1(e,p,speed1);
    r=car2(r,o,speed2);
  speed=speed1>=speed2?speed1:speed2;
   if(u<700)
    {
      u=u+speed+3;
    }
    if(u>=700)
    {
     u=10;
    }
    }

*/

return 0;}
