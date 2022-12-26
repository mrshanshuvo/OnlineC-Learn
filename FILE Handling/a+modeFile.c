#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp = NULL;
    char ch;
    fp = fopen("abc.txt","a+");
    if(fp == NULL)
    {
        printf("ERROR");
        exit(1);
    }
    fputs("What the hell happend:",fp);
    rewind(fp);
    while(!feof(fp))
    {
        ch = fgetc(fp);
        printf("%c",ch);
    }
    
    fclose(fp);
}