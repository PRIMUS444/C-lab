/*Write an appropriate control structure that will examine the value of a floating-point variable called temp and print one of the following messages, depending on the value assigned to temp.
              (a) ICE, if the value of temp is less than 0.
              (b) WATER, if the value of temp lies between 0and 100.
              (c) STEAM, if the value of temp exceeds 100.
Can a switch statement be used in this instance?*/



#include<stdio.h>
void clrscr()                         //clear screen funtion declaration
 {
  system("clear");
 }

void main()
 {
  float temp; 
  int ch;                              //variable declaration 
  clrscr();
  printf("Enter a temperature  :");
  scanf("%d",&temp);
  if(temp<0)
    ch=1;
  else if(temp>=0 && temp<=100)
    ch=2;
  switch(ch)
   {
    case 1  : printf("ICE");
              break;
    case 2  : printf("WATER");
              break;
    default : printf("STEAM");
   }
 }
