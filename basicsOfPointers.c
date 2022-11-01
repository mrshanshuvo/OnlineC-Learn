#include<stdio.h>
void main()
{
    int a=10,c;
    int *p;
    p = &a;
    c = *p;
    printf("Value of A : %d\n",a);
    printf("Value of A : %d\n",*p);
    printf("Address of A : %x\n",&a);
    printf("Address of A : %x\n",p);
    printf("Address of P : %x\n",&p);
    printf("Value of C : %d\n",c);
}