#include<stdio.h>
#define max 20


 void contc(char *a,char *b,char *c)
 {
   int i;
   for(i=0;*(a+i)!='\0';i++)
     {
      *(c+i)=*(a+i);
     }
     i--;
   for(int k=0;*(b+k)!='\0';k++,i++)
    {
     *(c+i)=*(b+k);
    } 
 }



void main()
 {
  char *ap,as[max],*bp,bs[max],*cp,cs[2*max];
  ap=as;
  cp=cs;
  bp=bs;
  printf("Enter 1st string  :");
  scanf("\n%s",ap);
  printf("Enter 2nd string  :");
  scanf("\n%s",bp);
  contc(ap,bp,cp);
  printf("%s\n",cp);
 }
