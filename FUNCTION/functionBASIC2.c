#include<stdio.h>

// function declaration
void sum(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);

// main function
int main()
{
    int x,y;
    printf("Enter two integer : ");
    scanf("%d %d",&x, &y);
    sum(x,y);
    sub(x,y);
    mul(x,y);
    div(x,y);
}

// function defination
void sum(int a, int b)
{
    printf("Summation is : %d\n",a+b);
}

// function defination
void sub(int a, int b)
{
    printf("Substraction is : %d\n",a-b);
}

// function defination
void mul(int a, int b)
{
    printf("Multiplication is : %d\n",a*b);
}

// function defination
void div(int a, int b)
{
    printf("Division is : %d\n",a/b);
}