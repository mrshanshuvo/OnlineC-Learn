#include<stdio.h>
#include<string.h>
int main()
{
    int value;
    char str1[20],str2[20];
    printf("Enter string 1 : ");
    gets(str1);
    printf("Enter string 2 : ");
    gets(str2);
    value = strcmp(str1,str2);
    if(value == 0)
    printf("Same");
    else
    printf("Not Same");

    return 0;
}