#include<stdio.h>
#include<conio.h>
int main()
{
	int marks;
	printf("Enter your marks:");
	scanf("%d", & marks);
	switch(marks)
	{
		case 95 ... 100:
		printf("Grade is A++");
		break;
		case 75 ... 94:
		printf("Grade is A");
		break;
		case 55 ... 74:
		printf("Grade is B");
		break;
		case 35 ... 54:
		printf("Grade is C");
		break;
		case 00 ... 34:
		printf("Grade is D");
		break;
		default:
		printf("INvalid input");
	}
	return 0;
}