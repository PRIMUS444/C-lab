/*Make a structure Author with name and email-id as its data variables.
Write appropriate read function for this structure. 
Make another structure Book with name, price, quantity and author (variable of structure Author) as data members. 
Design appropriate read function for this structure variable.
Make two variables of the book with values provided by the user and display the email-id of the author of book with higher price.*/
#include<stdio.h>

struct author                                                       //created structure author
{
    char name[25],email[25];
};

struct book
{
    int price,qty;
    char bname;
    struct author a;
};

struct book read()
{
    struct book x;                                              //structure variable declared
    printf("Enter Authors name  :");
    scanf("%s",x.a.name);
    printf("Enter Authors email :");
    scanf("%s",x.a.email);
    printf("Enter book name     :");
    scanf("%s",&x.bname);
    printf("Enter price         :");
    scanf("%d",&x.price);
    printf("Enter quantity      :");
    scanf("%d",&x.qty);
    return(x);
}
int main()                                               //main 
{
    struct book z1,z2;
    z1=read();
    z2=read();
    if (z1.price>z2.price)                              //conditions applied
    {
        printf("\n%s",z1.a.name);
        printf("\n%s",z1.a.email);
    }
    else
      {
        printf("\n%s",z2.a.name);
        printf("\n%s",z2.a.email);
    }
    return(0);
}
