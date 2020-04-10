//checking weather a function is even or odd

#include<stdio.h>


void clrscr()                         //clear screen funtion declaration
{
 system("clear");
}


void evod(int num);


void main()
 {
  int a;
  printf("Enter a number   :");
  scanf("%d",&a);
  evod(a);
 }
 
 
 void evod(int num)
  {
   if(num%2==0)
    {
     printf("\n%d is an even number",num);
    }
   else
    {
     printf("\n%d is a odd number",num);
    }
  }
 
