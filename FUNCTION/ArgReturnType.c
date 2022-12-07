#include<stdio.h>
int sum(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
void main()
{
    int a,b,s,m,p,d;
    printf("\nEnter two integer number: ");
    scanf("%d %d",&a,&b);
    s = sum(a,b);
    m = sub(a,b);
    p = mul(a,b);
    d = div(a,b);
    printf("\nSummation : %d",s);
    printf("\nSubstraction : %d",m);
    printf("\nMultiplication : %d",p);
    printf("\nDivision : %d",d);
}

int sum(int x, int y)
{
    return x+y;
}

int sub(int x, int y)
{
    return x-y;
}

int mul(int x, int y)
{
    return x*y;
}

int div(int x, int y)
{
    return x/y;
}