//program to find prime numbers
#include<stdio.h>
void clrscr()                         //clear screen funtion declaration
{
 system("clear");
}

void main()
 {
  int n,x=0,m=0,i=1;                           //variable declaration
  clrscr();
  printf("Enter the number of prime number needed :");
  scanf("%d",&n);
  while(i>0)
   {
    if(m!=n)
     {
      x=0;
      for(int j=1;j<=i;j++)
       {
        if(i%j==0) 
         {
          x++;
         }
       }
      if(x<=2)
       {
        m++;
        printf("%d,",i);
       } 
      }
      else
       {
        break;
       }
    i++;
   }
 }       
