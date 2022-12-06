#include<stdio.h>

// function declaration
void sum(int a, int b);
void sub(int a, int b);
void mul(int a, int b);
void div(int a, int b);

// main function
int main()
{
    
    sum(2,4);
    sub(2,3);
    mul(1,1);
    div(2,4);
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