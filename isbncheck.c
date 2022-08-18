#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char isbn[10];
	int sum=0;
	int i,count;
	printf("\n ENter the 10 digit number:");
	scanf("%s",&isbn);
	if(strlen(isbn)==10)
	{
		for (count = 0; isbn[count] != '\0'; count++)
		{
			for(i=1;i<=10;i--)
			{
				printf("yes u intred the 10 digit number!\n");
				sum=sum+(isbn[count]*i-'0');//this means 10*d1+9*d2......
				if(sum%11==0)
		{
			//sum=sum+isbn[i];
			
			printf("yay!\n");
			printf("it is valid isbn number\n");
			return 1;
			
		}
		else
		{
			printf("not a valid isbn number\n");
		}
		    }
		}
		
	}
	else
	{
		printf("number should be 10 digit number\n");
	}
	return 0;
}