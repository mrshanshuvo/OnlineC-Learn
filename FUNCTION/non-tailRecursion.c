#include<stdio.h>

int prnt(int a);

void main()
{
    int x;
    x = prnt(10);
    printf("Output is : %d",x);
}

int prnt(int a)
{
    if (a<1)
    return a;
    return 2 + prnt(a-1);
}