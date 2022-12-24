#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp = NULL;
    char ch;
    fp = fopen("abc.txt","r+");
    if (fp == NULL)
    {
        printf("ERROR");
        exit(1);
    }
    fputs("Who ",fp);
    fputc('h',fp);

    fclose(fp);
}