#include<stdio.h>
#include<string.h>
int main()
{
    char ptr1[20],ptr2[20];
    int i,flag = 0;
    printf("Enter a string : ");
    gets(ptr1);
    printf("Enter another string : ");
    gets(ptr2);
    for(i=0; ptr1[i]!='\0' || ptr2[i]!='\0'; i++)
    {
        if(ptr1[i] != ptr2[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    printf("Same");
    else
    printf("Not same");

    return 0;
}