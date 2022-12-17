#include<stdio.h>

struct student
{
    int roll;
    char name[10];
    float marks;
};

void main()
{
    int i;
    struct student s[3];

    printf("**STUDENTS' DATA Info **\n\n");
    for(i=0; i<3; i++)
    {
        printf("Enter the Info of %dth STUDENT :\n\n",i+1);
        printf("Roll    Name    Marks\n");
        scanf("%d %s %f", &s[i].roll,s[i].name,&s[i].marks);
        printf("\n");
    }

    printf("The new added info : \n\n");
    printf("Roll    Name    Marks\n");
    for(i=0; i<3; i++)
    {
        printf("%d.    %s      %f\n",s[i].roll,s[i].name,s[i].marks);
    }
}