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
   answer=(x*x*x)+(y*y*y)+(z*z*z)+(3*(x+y)*(y+z)*(z+x));
   printf("(x+y+z)^3=%d",answer);
   getch();

}