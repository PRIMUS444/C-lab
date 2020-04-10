//sum of array by function.
#include<stdio.h>
#define max 5
void clrscr()                         //clear screen funtion declaration
{
 system("clear");
}

int sum(int a[max]);

void main()                           
{
 int m[max],p;                               //variable declaration
 clrscr();                            //clear screen function call
 printf("ENTER ARRAY :");
 for(int i=0;i<max;i++)
  {
   scanf("%d",&m[i]); 
  }
  p=sum(m);
  printf("sum is  :%d",p);
}



int sum(int a[max])
{
 int sum=0;
 for(int i=0;i<max;i++)
   {
    sum+=a[i];
   }
 return(sum);
}

