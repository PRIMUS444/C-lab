//C program to find 
#include<stdio.h>
void clrscr()                         //clear screen funtion declaration
{
 system("clear");
}

void mswap(int *a,int *b);

void main()
 {
  clrscr();                      //clear screen funtion call
  int c1,c2;
  printf("ENTER 1st NUMBER  :");
  scanf("%d",&c1);
  printf("ENTER 2nd NUMBER  :");
  scanf("%d",&c2);
  mswap(&c1,&c2);
  printf("\nAFTER SWAPING");
  printf("\n 1st NUMBER is :%d",c1);
  printf("\n 2nd NUMBER is :%d",c2); 
 }
  
  
  void mswap(int *a,int *b)
   {
    int j;
    j=*a;
    *a=*b;
    *b=j;
   }
