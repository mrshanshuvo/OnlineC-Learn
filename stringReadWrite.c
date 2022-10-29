#include<stdio.h>
int main()
{
    char str1[50],str2[50],str3[50];

    printf("Enter any sentence : ");
    gets(str1);
    scanf("%5s",str2);

    printf("%s\n",str1);
    printf("%10.5s\n",str2);

    puts(str1);
    puts(str2);

    return 0;
}