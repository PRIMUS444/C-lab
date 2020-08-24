#include <stdio.h>
#include<stdlib.h>

struct date
{
    int day,mon,year;
};

struct date read()
{
    struct date b;
    printf("Enter year   :");
    scanf("%d",&b.year);
    printf("Enter Month  :");
    scanf("%d",&b.mon);
    printf("Enter day    :");
    scanf("%d",&b.day);
    return(b);
}


struct date valid(struct date a)
{
    if(a.mon<=0 || a.mon>12)
     {
      printf("\nInvalid month!!!!!!!!\nChanged default as 1\n");
      a.mon=1;
     } 
     if(a.mon==1 || a.mon==3 || a.mon==5 || a.mon==7|| a.mon==8 || a.mon==10|| a.mon==12)
       {
        if(a.day<=0 || a.day>31)
         {
          printf("Entered day is invalid changed to default as 1\n"); 
          a.day=1;      
         }
       }
     else if(a.mon==4 ||a.mon==6|| a.mon==9|| a.mon==11)
       {
        if(a.day<=0 || a.day>30)
         {
           printf("!!!Entered day is invalid changed to default as 1\n"); 
           a.day=1;
         }  
       }
     else if(a.mon==2)
       {
        if(a.year%4==0 || (a.day<=0 && a.day>29) )
           {
            printf("!!!Entered feb day is invalid changed to default as 1\n"); 
            a.day=1;
           
           }
       else if(a.day<=0 || a.day>28)
           {
            printf("!!!Entered day is invalid changed to default as 1\n"); 
            a.day=1;
           }
       } 
 
 return (a);
}


void display(struct date c)
{
    
   switch(c.mon)
   {
       case 1 : printf("\nJanuary %d  %d",c.day,c.year);
                break;
       case 2 : printf("\nFebruary %d  %d",c.day,c.year);
                break;       
       case 3 : printf("\nMarch %d  %d",c.day,c.year);
                break;      
       case 4 : printf("\nApril %d  %d",c.day,c.year);
                break;      
       case 5 : printf("\nMay %d  %d",c.day,c.year);
                break;      
       case 6 : printf("\nJune %d  %d",c.day,c.year);
                break;      
       case 7 : printf("\nJuly %d  %d",c.day,c.year);
                break;      
       case 8 : printf("\nAugust %d  %d",c.day,c.year);
                break;      
       case 9 : printf("\nSeptember %d  %d",c.day,c.year);
                break;      
       case 10 : printf("\nOctober %d  %d",c.day,c.year);
                break;      
       case 11 : printf("\nNovember %d  %d",c.day,c.year);
                break;      
       case 12 : printf("\nDecember %d  %d",c.day,c.year);
                break;      
       default: printf("$$");           
   }

}


int main()
{
   struct date x;
   
   x=read();
   x=valid(x);
   display(x);
   return(0);
   
}




