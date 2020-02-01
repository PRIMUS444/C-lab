//DIsplay the greater number from two entred numbers
#include<stdio.h>
void clrscr()
{
 system("clear");
}

void main()
{
 int a,b,c;                                          //variable declaration
 clrscr();
 printf("\nEnter 3 different number  :");
 scanf("%d %d %d",&a,&b,&c);                            //input values
(a<b)?((b>c)?printf("\nGreatest number is :%d",b):printf("\nGreatest number is :%d",c)):((a>c)?printf("\nGreatest number is :%d",a):printf("\ngreatest number is :%d",c));
}
