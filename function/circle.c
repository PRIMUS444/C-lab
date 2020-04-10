//C program to find diameter,circumference & area of circle using functions
#include<stdio.h>
#include<math.h>
void clrscr()                         //clear screen funtion declaration
{
 system("clear");
}

float caldiameter(float a);          //caldiameter funtion declaration
float calcircumference(float b);      //calcircumference funtion declaration
float calarea(float c);              //calarea funtion declaration
  


void main()
 {
  clrscr();
  float r,d,c,a;
  printf("ENTER RADIUS OF CIRCLE    :");
  scanf("%f",&r);
  d=caldiameter(r);
  c=calcircumference(r);
  a=calarea(r);
  printf("\nGIVIN RADIUS IS            :%f",r);
  printf("\nREQUIRED DIAMETER IS       :%f",d);
  printf("\nREQUIRED CIRCUMFERENCE IS  :%f",c);
  printf("\nREQUIRED AREA IS           :%f",a);
 }
 
 
float caldiameter(float a)
 {
  return(2*a);
 }

float calcircumference(float b)
 {
  return(2*3.14*b);
 }

float calarea(float c)
 {
  return(3.14*c*c);
 }
 
