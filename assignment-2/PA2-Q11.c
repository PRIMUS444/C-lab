//check wheather a prime number or a fibonacci number
#include<stdio.h>
void clrscr()                         //clear screen funtion declaration
 {
  system("clear");
 }

void main()
 {
  int n,j,x,m,a,b,c;                           //variable declaration
  clrscr();
  do
  {
   a=0;
   b=1;
   x=0;
   m=0;
   printf("\n\nEnter a number   :");
   scanf("%d",&n);
   for(j=1;j<=n;j++)
    {
    if(n%j==0)
     {
      x++;     
     }
    }
   while(j>0)
    { 
     c=a+b;
     if(n==a)
      {
       ++m;
      }
     a=b;
     b=c;
     
     if(a>n)
      {
       break;
      }
    }  
  
  if(x<=2)
   {
    if(m==1)
     {
      printf("Entered number is PRIME and FIBONACCI number BOTH");
     }
    else
     {
      printf("Entered number is PRIME number but NOT FIBONACCI number");
     }
   }
  else if (m==1)
   {
    printf("Enter number is NOT PRIME but FIBONACCI number");
   }
  else
   {
    printf("\aEntered number is NETHIER PRIME NOR FIBONACCI number");
   }
 }while(n!=0);
}
