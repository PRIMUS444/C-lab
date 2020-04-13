//program to find root of a equation
#include<stdio.h>
#include<math.h>
void clrscr()                         //clear screen funtion declaration
{
 system("clear");
}


void root(float x,float y,float z,float *e1,float *e2);
 
 
void main()
 {
  float a,b,c,r1,r2;
  clrscr();                      //clear screen funtion call
  printf("ENTER THE COEFFICENT OF X^2  :");
  scanf("%f",&a);
  printf("ENTER THE COEFFICENT OF X    :");
  scanf("%f",&b);
  printf("ENTER A CONSANT              :");
  scanf("%f",&c);
  root(a,b,c,&r1,&r2);
  printf("\n\tEQUATION IS   \n\t%f X^2 + %f X + %f\n",a,b,c);
  printf("\n\tONE OF THE ROOT IS   :%f",r1);
  printf("\n\tANOTHER ROOT IS      :%f\n",r2);
 }  
 
 
 void root(float x,float y,float z,float *e1,float *e2)
  {
   float a;
   a=sqrt((y*y)-(4*x*z));
   *e1=(-y+a)/(2*x);
   *e2=(-y-a)/(2*x);
  }
