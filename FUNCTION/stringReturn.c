#include<stdio.h>
char* string();
void main()
{
    char* str;
    str = string();
    printf("String is : %s\n",str);
    str[0]='A';
    printf("After changing : %s\n",str);
}
char* string()
{
    char* str;
    printf("\nEnter any string : ");
    gets(str);
    return str;
}