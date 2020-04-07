/*Write a loop that will generate every third integer, beginning with i= 2 and continuing for all integers that are less than 100. Calculate the sum of those integers that are evenly divisible by 5. Use two different methods to carry out the test.
(a) Use the conditional operator (? :).
(b) Use an if - else statement*/

#include<stdio.h>
void clrscr()            //clear screen function
 {
  system("clear");
 }

void main()
 {
  clrscr();              //clear screen function call
  int i,sumi=0,sumc=0;
  for(i=2;i<100;i+=2)
   {
    i%5==0?(sumc+=i):(sumc=sumc);
   }

  printf("\nSum by conditional operator   :%d",sumc);
  for(i=2;i<100;i+=2)
   {
    if(i%5==0)
     {
      sumi+=i;
     }
   }
  printf("\nSum by if else                :%d\n",sumi);
}

