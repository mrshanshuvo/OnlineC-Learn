#include<stdio.h>

// function declaration
int sum(void);
int sub(void);
int mul(void);
int div(void);

// main function
void main()
{
    int add,min,pro,di;

    // function calling
    add = sum();
    min = sub();
    pro = mul();
    di = div();
    printf("\nThe summation : %d",add);
    printf("\nThe substraction : %d",min);
    printf("\nThe Multiplication : %d",pro);
    printf("\nThe Division : %d",di);
}

// function defination
int sum()
{
    int a,b,sum=0;
    printf("\nEnter two interger for addition : ");
    scanf("%d %d",&a,&b);
    sum = a+b;
    return sum;
}

// function defination
int sub()
{
    int a,b,sub=0;
    printf("\nEnter two interger for substraction : ");
    scanf("%d %d",&a,&b);
    sub = a-b;
    return sub;
}

// function defination
int mul()
{
    int a,b,mul=1;
    printf("\nEnter two interger for product : ");
    scanf("%d %d",&a,&b);
    mul = a*b;
    return mul;
}
// function defination
int div()
{
    int a,b,div=1;
    printf("\nEnter two interger for division : ");
    scanf("%d %d",&a,&b);
    div = a/b;
    return div;
}