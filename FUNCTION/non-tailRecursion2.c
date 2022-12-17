#include<stdio.h>

void ok(int a);

void main()
{
    ok(10);
}

void ok(int a)
{
    if (a<1)
    return;
    else
    printf("%d\t",a);
    ok(a/2);
    printf("%d\t",a);
}