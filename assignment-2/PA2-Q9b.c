//program to find fibonacci numbers
#include<stdio.h>
void clrscr()                         //clear screen funtion declaration
{
 system("clear");
}

void main()
 {
  int a,b,c=0,n;                           //variable declaration
  clrscr();
  a=0;
  b=1;
  printf("Enter the number of Fibonacci number needed :");
  scanf("%d",&n);
  n-=2;
  printf("%d,%d,",a,b);
  for(int i=0;i<n;i++)
   {
    c=b+a;
    printf("%d,",c);
    a=b;
    b=c;
    
  
   }
 }
