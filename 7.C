#include<stdio.h>
#include<conio.h>
void main()
{
   int x,y,z,answer;
   clrscr();
   printf("enter the value of X=");
   scanf("%d",&x);
   printf("enter the value of Y=");
   scanf("%d",&y);
   printf("enter the value of Z=");
   scanf("%d",&z);
   answer=(x*x)+(y*y)+(z*z)+(2*x*y)+(2*y*z)+(2*z*x);
   printf("(x+y+z)^2=%d",answer);
   getch();

}