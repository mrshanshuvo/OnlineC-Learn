#include<stdio.h>
int avg(int[],int);
void main()
{
    int marks[10],i,n,average;
    printf("\nHow many elements do you wish to enter : ");
    scanf("%d",&n);
    printf("\nEnter the Numbers in the Array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&marks[i]);
    }
    average = avg(marks,n);
    printf("Average is : %d",average);
}
int avg(int marks[],int total)
{
    int j,sum = 0,avg;
    for(j=0; j<total; j++)
    {
        sum = sum + marks[j];
    }
    avg = sum/total;
    return avg;
}