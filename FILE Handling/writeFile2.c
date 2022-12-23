#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp=NULL;
    char ch[100];
    int a;
    char s='M';

    fp = fopen("abc2.txt","w");

    if (fp==NULL)
    {
        printf("ERROR FILE\n");
        exit(1);
    }

    printf("Enter a string: ");
    gets(ch);
    printf("Enter any integer: ");
    scanf("%d",&a);

    fprintf(fp,"%d %s %c",a,ch,s);
    fclose(fp);

}