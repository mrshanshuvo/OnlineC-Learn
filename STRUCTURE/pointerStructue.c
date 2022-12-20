#include<stdio.h>
#define N 50

struct shop
{
    int no;
    char product_name[N];
    float price;
};

void main()
{
    struct shop a[5];
    struct shop *ptr;
    int n;
    ptr = a;

    printf("NO.  Product Name   Price\n\n");
    scanf("%d %s %f",&ptr->no,ptr->product_name,&ptr->price);

    printf("NO.  Product Name   Price\n\n");
    printf("%d    %s           %f\n\n",ptr->no,ptr->product_name,ptr->price);
    printf("\n");
    

}