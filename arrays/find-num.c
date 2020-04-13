//searching an element in an array.
#include<stdio.h>
void clrscr()
{
 system("clear");
}

void main()
{
 int x[10],a,b=0;                            //variable declaration
 clrscr();
 for(int i=0;i<10;i++)
  {
   printf("Enter a number :");
   scanf("%d",&x[i]);
  }
 printf("Enter a number to be found : ");
 scanf("%d",&a);
 for(int i=0;i<10;i++)
  {
   if(a==x[i])
     {
      b++;
     }
  }
 if(b>0)
  {
   printf("\n%d\n",a);
   printf("number found !!!! \n Number occurs :'%d times",b);
  }
 else
  {
   printf("\n%d\n",a);
   printf("Number not found\n");
  }
}
