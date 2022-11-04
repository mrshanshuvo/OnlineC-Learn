#include<stdio.h>
void main()
{
    int a[]={3,2,67,0,56,7,3,10,45};
    int *p,*q;
    p=a;

    printf("%d\n",*p);
    printf("%d %d %d %d\n",++(*p),(*p)++,*p++,*++p);   //R-L
    printf("%d\n",*p);

    q = p + 3;
    printf("%d\n",*q);
    printf("%d\n",*q-3);
    printf("%d\n",*--q+2);
    printf("%d\n",*p+*q);
    
}