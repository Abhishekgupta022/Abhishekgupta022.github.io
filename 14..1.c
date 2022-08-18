#include<stdio.h>
int main()
{
	int a[5][5]={{11,5 ,66,8 ,98},
	{55 ,69 ,47 ,89 ,56 },
		{41 ,56,85,74,73 },
			{ 40,39,38,36,34},
				{ 10,12,13,15,19}
		
	
	};
	int i,j,big,small;
	big=a[0][0];
	small=a[0][0];
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			if(a[i][j]>big)
			{
				big=a[i][j];
			}
			else if(a[i][j]<small)
			{
				small=a[i][j];
			}
		}
	}
	printf("max=%d\n",big);
	printf("min=%d",small);
	return 0;
}