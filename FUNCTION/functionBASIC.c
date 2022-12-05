#include<stdio.h>
void div()
{
    int a,b,div=1;
    printf("\nEnter two numbers for division: ");
    scanf("%d %d",&a, &b);
    div = a/b;
    printf("\nDivision: %d",div);
}
void mul()
{
    int a,b,mul=1;
    printf("\nEnter two numbers for multiplication: ");
    scanf("%d %d",&a, &b);
    mul = a*b;
    printf("\nMultiplication: %d",mul);
}
void sub()
{
    int a,b,sub=0;
    printf("\nEnter two number for substraction: ");
    scanf("%d %d",&a,&b);
    sub = a-b;
    printf("\nSub: %d", sub);
}
void sum()
{
    int a,b,sum=0;
    printf("\nEnter two integer for summation: ");
    scanf("%d %d", &a, &b);
    sum = a+b;
    printf("\nSum: %d", sum);
}
void main()
{
    sum();
    sub();
    mul();
    div();
    printf("\nAGAIN DO THIS CALCULATION: ");
    sum();
    sub();
    mul();
    div();
}