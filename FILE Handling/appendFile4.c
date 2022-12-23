#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp = NULL;
    char str[100];

    fp = fopen("abc.txt","a");
    if (fp == NULL)
    {
        printf("ERROR");
        exit(1);
    }

    printf("Enter any sentence you wish to append : ");
    gets(str);
    fprintf(fp,"\n%s",str);  //fputs(str,fp);
    /*while(!feof(fp))
    {
        
    }*/
    fclose(fp);
}