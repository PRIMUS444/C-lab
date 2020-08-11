#include<stdio.h>

struct author
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
    struct book x;
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
int main()
{
    struct book z1,z2;
    z1=read();
    z2=read();
    if (z1.price>z2.price)
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
