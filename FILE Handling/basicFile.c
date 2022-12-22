#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp = NULL;
    char ch[100];

    printf("Enter any string : ");
    gets(ch);

    fp=fopen("abc.txt","w");  //'w' is used for overwrite the previous written sentences in the file

    if(fp==NULL)
    {
        printf("File is ERROR\n");
        exit(1);
    }

    fputs(ch,fp);

    fclose(fp);

}