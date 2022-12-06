#include<stdio.h>

// function declaration
void div(void);
void mul(void);
void sub(void);
void sum(void);

// function defination
void div()
{
    int a,b,div=1;
    printf("\nEnter two numbers for division: ");
    scanf("%d %d",&a, &b);
    div = a/b;
    printf("\nDivision: %d",div);
}

// function defination
void mul()
{
    int a,b,mul=1;
    printf("\nEnter two numbers for multiplication: ");
    scanf("%d %d",&a, &b);
    mul = a*b;
    printf("\nMultiplication: %d",mul);
}

// function defination
void sub()
{
    int a,b,sub=0;
    printf("\nEnter two number for substraction: ");
    scanf("%d %d",&a,&b);
    sub = a-b;
    printf("\nSub: %d", sub);
}

// function defination
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

    // function calling
    sum();
    sub();
    mul();
    div();

    printf("\nAGAIN DO THIS CALCULATION: ");

    // function calling
    sum();
    sub();
    mul();
    div();
}