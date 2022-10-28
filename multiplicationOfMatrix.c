#include<stdio.h>
#define N 10
int main()
{
    int a[N][N],b[N][N],mul[N][N];
    int i,j,k,r1,r2,c1,c2,sum=0;

    printf("\n            Alert !!!!        \n");
    printf("COL 1 needs to be equal to ROW 2\n");
    printf("Enter the number of rows and cols for Matrix A : ");
    scanf("%d %d",&r1,&c1);
    printf("Enter the number of rows and cols for Matrix B : ");
    scanf("%d %d",&r2,&c2);
    while(c1!=r2)
    {
        printf("INVALID input !!!!\n");
        printf("Please enter VALID input for rows and cols\n");
        printf("Enter the number of rows and cols for Matrix A : \n");
        scanf("%d %d",&r1,&c1);
        printf("Enter the number of rows and cols for Matrix B : \n");
        scanf("%d %d",&r2,&c2);
    }
    //taking elements for matrix a
    printf("Enter the elements for matrix A : \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    
    //taking elements for matrix b
    printf("Enter the elements for matrix B : \n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    //showing the matrices
    printf("MATRIX A : \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
    printf("MATRIX B : \n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    //multiplication of the matrices
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            sum = 0;
            for(k=0; k<r1; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            mul[i][j] = sum;
        }
    }
    //showing the multiplication
    printf("The multiplication of the two matrices is : \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}