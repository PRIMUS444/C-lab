////merging two strings.2nd method reducing memory.
#include<stdio.h>
void clrscr()
 {
  system("clear");
 }
void main()
 {
  int i,j,d;
  char a1[20],a2[20];                       //variable declaration 
  clrscr();                                 //clear screen function call
  printf("\nEnter a first string  :");
  scanf("%s",a1);
  printf("\nEnter a second string  :");
  scanf("%s",a2);

  printf("\ngot uu:");
 for(i=0;a1[i]!='\0';i++)
 for(j=0;a2[j]!='\0';j++)
  d=i+j+2;
  char a3[d];
  for(i=0;a1[i]!='\0';i++)
    {
     a3[i]=a1[i];
    }
    a3[i]=' ';
    i++;
  for(j=0;a2[j]!='\0';j++,i++)
    {
     a3[i]=a2[j];
    }
    a3[i]='\0';
  printf("\nfirst string is   :%s",a1);
  printf("\nsecond string is  :%s",a2);
  printf("\nmearged string is :%s",a3);
 }
