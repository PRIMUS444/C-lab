//calculating the sum of every nth integer, beginning with the value assigned to nstart (i.e., for i= n s t a r t , nstart + n, nstart + 2*n, nstart + 3*n, etc.). Continue the looping process for all values of i that do not exceed nstop.
#include<stdio.h>
void clrscr()
 {
  system("clear");
 }
void main()
 {
  int i,nstart,nstop,gap,sum;                //variable declaration 
  clrscr();                                 //clear screen function call
  printf("\nEnter the starting point  :");
  scanf("%d",&nstart); 
  printf("\nEnter the gap             :");
  scanf("%d",&gap);
  printf("\nEnter the last point      :");
  scanf("%d",&nstop);
  for(i=nstart;i<=nstop;i+=gap)                      //for loop used
   {
    sum+=i;
   }
  printf("\nSum is : %d\n",sum); 
 
 }
