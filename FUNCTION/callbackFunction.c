#include<stdio.h>

void sum(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);
void display(void (*fptr)(int,int));

void sum(int a,int b)
{
    printf("Summation of %d and %d is : %d\n",a,b,a+b);
}

void sub(int a,int b)
{
    printf("Substraction of %d and %d is : %d\n",a,b,a-b);
}

void mul(int a,int b)
{
    printf("Multiplication of %d and %d is : %d\n",a,b,a*b);
}

void div(int a,int b)
{
    printf("Division of %d and %d is : %d\n",a,b,a/b);
}

void display(void (*fptr)(int,int))
{
    int a,b;
    printf("Enter two integer : ");
    scanf("%d %d",&a,&b);
    fptr(a,b);
}

void main()
{
    char ch;

    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%c",&ch);
    switch(ch)
    {
        case '1': display(sum); break;
        case '2': display(sub); break;
        case '3': display(mul); break;
        case '4': display(div); break;
        case '5': printf("Exited from the Program\n");
        default  : printf("INVALID CHOICE");
    }
}