#include<stdio.h>

int fun(int a);
int fun2(int a);

void main()
{
    int x,y;
    printf("Enter any integer to find its factorial : ");
    scanf("%d",&y);
    x = fun(y);
    printf("\nOutput is : %d\n",x);
}

int fun(int a)
{
    if (a==1)
    return a;
    return a * fun2(a-1);
}

int fun2(int a)
{
    if (a==1)
    return a;
    return a * fun(a-1);
}