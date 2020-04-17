#include<stdio.h>
void clrscr()
 {
  system("clear");         //clear screen function
 }
void main()
 {
  char a;                //variable declaration
  clrscr();               //clear screen function call
  printf("Enter a character : ");
  scanf("%c",&a);
  printf("%d",a);
 }
