//program to calculate the value of X^n where X is float type and n is integer type.
#include<stdio.h>
void clrscr()                         //clear screen funtion declaration
{
 system("clear");
}


float power(float x,int y);
 
 
void main()
 {
  float a,y;
  int b;
  clrscr();                      //clear screen funtion call
  printf("\t\tFORM X^n  ");
  printf("\nENTER THE VALUE OF X    :");
  scanf("%f",&a);
  printf("ENTER THE VALUE OF n    :");
  scanf("%d",&b);
  y=power(a,b);
  printf("\nTHE VALUE OF (%f)^%d is:%f\n",a,b,y);
 }
  
  
float power(float x,int y)
 {
  float z=1;
  for(int i=0;i<y;i++)
  {
   z*=x;
  }
  return(z);
 }
 
