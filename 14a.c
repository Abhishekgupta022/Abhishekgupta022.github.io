#include<stdio.h>
int main()
{
    
    int x[3][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}},*n=&x;
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",*(*(x+2)+1),*(*x+2)+5,*(*(x+1)),*(*(x)+2)+1,*(*(x+1)+3),*n,*(n+2),(*(n+3)+1),*(n+5)+1,++*n);
    return 0;
}