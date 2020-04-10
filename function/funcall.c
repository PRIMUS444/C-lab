#include<stdio.h>
#include<math.h>
void clrscr()                         //clear screen funtion declaration
{
 system("clear");
}


float formula(float x);
void display(int a, int b);

void main()                           
{
 float n;
 int m,p;                               //variable declaration
 clrscr();                            //clear screen function call
 printf("ENTER A NUMBER (type float) :");
 scanf("%f",&n);
 n=formula(n);
 printf("%f",n);
 printf("\nENTER THO SIDES OF TRIANGLE TO GET THE HYPOTENUSE     :");
 scanf("%d",&m);
 scanf("%d",&p);
 display(m,p);
}
float formula(float x)
 {
 float y;
 y=3*x-1;
 return(y);
}

void display(int a, int b)
{
 int c,z;
 z=(a*a)+(b*b);
 c=sqrt(z);
 printf("\n%d\nc=%i\n",z,c);
}
