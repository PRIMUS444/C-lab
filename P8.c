//C program to check whether a year is leap year or not.
#include<stdio.h>
#include<ctype.h>
void clrscr()                         //clear screen funtion declaration
{
 system("clear");
}

void main()
{
 char a;                             //variable declaration
 clrscr();                           //clear screen function call
 printf("\nEnter an character :");
 scanf("%c",&a);
 if(isalpha(a)!=0)                   //conditions
  {
   printf("\nEntered character is an alphabet ");
  }
 else
  {
    printf("\nEntered character is not an alphabet");
  }

}
