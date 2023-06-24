#include<stdio.h>
#include<conio.h>
void main()
{
   int x,y,answer;
   clrscr();
   printf("enter the value of x=");
   scanf("%d",&x);
   printf("enter the value of y=");
   scanf("%d",&y);
   answer=(x*x*x)-(y*y*y)-(3*x*x*y)+(3*x*y*y);
   printf("(x-y)^3=%d",answer);
   getch();

}