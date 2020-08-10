#include<stdio.h>

void main()
{
 int x[10],a,b;                                 //variable declaration
 clrscr();
 for(int i=0;i<10;i++)
  {
   printf("Enter a number :");
   scanf("%d",&x[i]);
   a=x[i];
   if(a<x[i])
    {
     b=a; 
     a=x[i];
    }
   }
 printf("\nGreatest number entered is   :%d",a);
 printf("\n2nd Greatest number enter is :%d",b);

}

