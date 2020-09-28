#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main()
{
int gd,gm,x,y,end,p,x1,x2,y1,y2,dx,dy;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\TC\\BGI");
printf("Enter the value of x1 ");
scanf("%d",&x1);
printf("Enter the value of y1 ");
scanf("%d",&y1);
printf("Enter the value of x2 ");
scanf("%d",&x2);
printf("Enter the value of y2 ");
scanf("%d",&y2);
dx=abs(x1-x2);
dy=abs(y1-y2);
p=2*dy-dx;
if(x1>x2)
{
 x=x2;
 y=y2;
 end=x1;
}
else
{
 x=x1;
 y=y1;
 end=x2;
}
putpixel(x,y,YELLOW);
if(y2>=y1)
{while(x<=end)
{
 if(p<0)
 {x++;
 p=p+2*dy;
 }
 else
 {x++;
 y++;
 p=p+2*(dy-dx);
 }
 putpixel(x,y,BLUE);
 delay(20);
}}
if(y1>y2)
{while(x<=end)
{
 if(p<0)
 {x++;
 p=p+2*dy;
 }
 else
 {x++;
 y--;
 p=p+2*(dy-dx);
 }
 putpixel(x,y,RED);
 delay(20);
}}
getch();
closegraph();
}