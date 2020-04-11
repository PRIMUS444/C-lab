//C program to find factorial using functions
#include<stdio.h>
#include<math.h>


void clrscr()                         //clear screen funtion declaration
{
 system("clear");
}

int fact(int num);

void main()
 {
  clrscr();                      //clear screen funtion call
  int a,res;
  printf("ENTER A NUMBER WHOSE factorial is to be found");
  scanf("%d",&a);
  res=fact(a);
  printf("FACTORIAL OF %d! IS   :%d",a,res);
  
 }
 
  
int fact(int num)
 {
  int a=1;
  for(int i=num;i!=0;i--)
   {
     a*=i;
   } 
   return(a);
 }
