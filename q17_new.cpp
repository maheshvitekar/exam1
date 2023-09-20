// Write a program to find the sum of two matrices of order 2*2 using
//multidimensional arrays.


#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],c[2][2],i,j;
    printf("Enter the elements of matrix A: ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }

        printf("\n");
    }
    printf("Enter the elements of matrix B: ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }

        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("The sum of two matrices is: ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\t %d",c[i][j],i,j);
        }
        printf("\n");
        }

}