#include<stdio.h>
#include<string.h>
int main()
{
    char name1[30],name2[30];
    int len1,len2,i;

    //using library function
    printf("Enter any String : ");
    gets(name1);
    printf("Enter any String : ");
    gets(name2);
    strcat(name1,name2);
    printf("\nAfter 1st : %s",name1);

    //using loop
    len1 = strlen(name1);
    len2 = strlen(name2);
    for(i=0; i<=len2; i++)
    {
        name1[len1+i] = name2[i];
    }
    printf("\nAfter 2nd : %s",name1);


    return 0;

}