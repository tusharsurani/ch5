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
   answer=(x*x)-(2*x*y)+(y*y);
   printf("(x-y)^2=%d",answer);
   getch();

}