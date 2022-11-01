#include<stdio.h>
#include<string.h>
void main()
{
    char ptr1[20];
    int i;
    printf("Enter any string : ");
    gets(ptr1);
    for(i=0; ptr1[i]!='\0'; i++)
    {
        if(ptr1[i]>='A' && ptr1[i]<='Z')
        {
            ptr1[i] = ptr1[i]+32;
        }
    }
    puts(ptr1);
    for(i=0; ptr1[i]!='\0'; i++)
    {
        if(ptr1[i]>='a' && ptr1[i]<='z')
        {
            ptr1[i] = ptr1[i]-32;
        }
    }
    puts(ptr1);
}