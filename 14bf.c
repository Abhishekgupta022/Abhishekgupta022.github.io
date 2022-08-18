#include<stdio.h>
int main()
{
    int a[10][10], transpose[10][10], r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int i,j;
    printf("Enter the elements of Original matrix:\n");
    for(i=0;i<=r;i++)
    for(j=0;j<=c;j++)
    {
        printf("Enter the a[%d %d] ",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
    printf("ENtered matrix \n");
    for(i=0;i<=r;i++)
    for(j=0;j<=c;j++)
    {
        printf("%d",a[i][j]);
        if(j==c-1);//matrix rule
        printf("\n");
    }
    printf("transpose  of Original matrix:\n");
    for(i=0;i<=r;i++)
    for(j=0;j<=c;j++)
    {
        //a2[j][i]=a1[i][j];
        printf("%d\n",transpose[i][j]);
        if(j==r-1);
        printf("\n");


    }
    return 0;

    
    
}