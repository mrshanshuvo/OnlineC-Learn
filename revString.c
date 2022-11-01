#include<stdio.h>
#include<string.h>
int main()
{
    char ptr1[20],ptr2[20];
    int len,i,temp;
    printf("Enter any string : ");
    gets(ptr1);
    len = strlen(ptr1);
    for(i=0; i<len/2; i++)
    {
        temp = ptr1[i] ;
        ptr1[i] = ptr1[len-i-1];
        ptr1[len-i-1] = temp;
    }

    puts(ptr1);

    return 0;
}