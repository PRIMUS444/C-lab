#include<stdio.h>


 void reverse(char *b)
 {
   char j[20];
   int i;
   for(i=0;*(b+i)!='\0';i++)
     {
      j[i]=*(b+i);
     }
     i--;
   for(int k=0;k<20,i>=0;k++,i--)
    {
     *(b+k)=j[i];
    } 
 }



void main()
 {
  char *ap,as[20];
  ap=as;
  printf("enter a string  :");
  scanf("\n%s",ap);
  reverse(ap);
  printf("%s\n",ap);
 }
