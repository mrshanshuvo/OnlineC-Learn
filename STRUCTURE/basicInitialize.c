#include<stdio.h>

struct student
{
    int roll;
    char name[10];
    float marks;
}a={3,"Shahid",23.22};          //initialization

struct student b = {4,"Shan",34.2};         //initialization

void main()
{
    struct student c = {1,"Shuvo",43.34};           //initialization

    struct student d = {2,"Hasan",23.23};           //initialization

    printf("Info of the Students : \n");
    printf("%d %s %f\n",c.roll,c.name,c.marks);
    printf("%d %s %f\n",d.roll,d.name,d.marks);
    printf("%d %s %f\n",a.roll,a.name,a.marks);
    printf("%d %s %f\n",b.roll,b.name,b.marks);
}
