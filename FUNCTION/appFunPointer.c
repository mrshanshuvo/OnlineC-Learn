#include<stdio.h>

void sum(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);

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

void main()
{
    int ch,a,b;
    void (*fptr[4])(int,int)={sum,sub,mul,div};
    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    if (ch<=4)
    {
        printf("Enter two numbers : ");
        scanf("%d %d",&a,&b);
    }
    else if(ch==5)
    {
    printf("Your SEASON ENDED\n");
    }
    else
    {
    printf("INVALID CHOICE\n");
    }
    /*switch(ch)
    {
        case 1: display(sum); break;
        case 2: display(sub); break;
        case 3: display(mul); break;
        case 4: display(div); break;
        case 5: printf("Exited from the Program\n");
        default  : printf("INVALID CHOICE");
    }*/
    (*fptr[ch-1])(a,b);
}