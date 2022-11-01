#include<stdio.h>
void main()
{
    int a=10;
    int *p = &a;
    int **q = &p;
    int ***r = &q;
    printf("A : %d\n",a);
    printf("A : %d\n",*p);
    printf("A : %d\n",**q);
    printf("A : %d\n",***r);
}