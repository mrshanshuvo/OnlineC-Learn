#include<stdio.h>
#include<string.h>
int main()
{
    char name[30],str[30];
    int count=0,i=0,c=0;
    printf("Enter any string : ");
    gets(name);
    printf("\nEnter another string : ");
    gets(str);
    while(str[i]!='\0')
    {
        c++;
        i++;
    }
    count = strlen(name);
    puts(name);
    printf("\nThe Length of the string is : %d\n",count);
    puts(str);
    printf("\nThe length of the 2nd string is : %d\n",c);

    return 0;
}