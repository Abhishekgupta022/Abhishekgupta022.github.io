#include<stdio.h>

int main ()
{
    int A[6][6],B[6][6],C[6][6];
    int i,j;
    printf("Enter the 36 numbers of A matrix:\n");
    for(i=0;i<=2;i++)
    
        for(j=0;j<=2;j++)
        scanf("%d",&A[i][j]);
        printf("Enter the 36 numbers of B matrix:\n");
    for(i=0;i<=2;i++)
    
        for(j=0;j<=2;j++)
        scanf("%d",&B[i][j]);
        printf("Sum of matrix A&B is\n");
        for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
                C[i][j]=A[i][j]+B[i][j];
                printf(" %d ",C[i][j]);
            }
            printf(" \n ");
        }
        return 0;
    
    
        

    

    

}