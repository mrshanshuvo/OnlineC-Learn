#include<stdio.h>
void main()
{
    int arr[5]={32,45,7656,34,78};
    int *p;
    p = &arr[0];
    printf("First element is : %d\n",*p);
    printf("Address of p : %u\n",p);
    p = p + 1;
    printf("Second Value is : %d\n",*p);
    printf("Address of p : %u\n",p);
}