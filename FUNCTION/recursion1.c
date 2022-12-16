#include<stdio.h>

int sum(int a);
int fact(int a);

int main()
{
    int a,s=0,m=1;
    printf("Enter any positive integer number : ");
    scanf("%d",&a);
    s = sum(a);
    m = fact(a);
    printf("Sum of %d th numbers is :: %d\n",a,s);
    printf("Factorial of %d is :: %d\n",a,m);
}

int sum(int a)
{
    int x=0;
    if(a==1)
    return a;
    x = a + sum(a-1);
}

int fact(int a)
{
    int x=1;
    if (a==1)
    return a;
    x = a * fact(a-1);
}