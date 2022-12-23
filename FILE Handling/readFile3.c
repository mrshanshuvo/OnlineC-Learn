#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp=NULL;
    char ch;
    char str[100];

    fp = fopen("abc.txt","r");
    
    if(fp==NULL)
    {
        printf("ERROR\n");
        exit(1);
    }
    /*
    while(!feof(fp))
    {
    ch = fgetc(fp);
    printf("%c",ch);
    }
    */
    while(!feof(fp))
    {
        fgets(str,5,fp);
        printf("%s",str);
    }
    fclose(fp);
   
}