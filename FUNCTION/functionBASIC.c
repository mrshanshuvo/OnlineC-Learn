#include<stdio.h>
void sum()
{
    int a,b,sum=0;
    printf("\nEnter two integer: ");
    scanf("%d %d", &a, &b);
    sum = a+b;
    printf("\nSum: %d", sum);
}
void main()
{
    sum();
    printf("\n2nd Time");
    sum();
    printf("\n3rd Time");
    sum();
}