#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="abhishek",str2[]="abhishej";
	int i,j,k;
	i=strcmp(str1,"abhishek");
	j=strcmp(str1,str2);
	k=strcmp(str2,"avishek");
	printf("%d %d %d\n",i,j,k);
    
	return 0;
}