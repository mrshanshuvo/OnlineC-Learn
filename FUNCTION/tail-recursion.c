#include<stdio.h>

void tail(int s);

void main()
{
    tail(10);
}

void tail(int s)
{
    if(s<1)
    return;
    else
    printf("%d ",s);
    tail(s/2);
}