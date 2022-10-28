#include<stdio.h>
int main()
{
    int arr1[10][10],arr2[10][10],arr3[10][10],i,j,n;
    printf("How many rows and cols would you like to add : ");
    scanf("%d", &n);
    //taking matrix elements for A
    printf("Enter the elements of Matrix A : \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");
    }
    //taking elements for matrix B
    printf("Enter the elements of Matrix B : \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&arr2[i][j]);
        }
        printf("\n");
    }
    //showing elements of A
    printf("Matrix A is : \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    //showing elements of B
    printf("Matrix B is : \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
    //adding two matrices
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
        printf("\n");
    }

    //showing the summation of two matrics
    printf("Summation of two matrices is : \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}