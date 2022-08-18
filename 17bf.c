#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct library
{
	int acn;//accession number
	char title[100];//title of book
	char author[50];//author name
	float price;//prince of book
	char flag;//book is issue or not   issue=1   not issue  0
	
}
geclib[500]={1, "Let Us C", "Yashavant Kanethkar", 258, 1,
	2, "Data Structure Through C", "Yashavant Kanethkar", 300, 1,
	3, "Let Us C++", "Yashavant Kanethkar", 220, 1,
	4, "Harry Potter : The Philosopher's Stone", "J. K. Rowling", 550, 0,
	5, "The Two Towers", "J. R. R. Tolkien", 560, 0,
	6, "The Hobbit", "J. R. R. Tolkien", 550, 1,
	7, "The Fellowship of the Ring", "J. R. R. Tolkien", 550, 0,
	8,"theory of Every thing","stefen hawking",1150,1};
	int count()
{
	int i = 0;
	while (geclib[i].acn)
		i++;
	return i;
}

void display(int i)
{
	i--;/*To use i as index*/
	printf("\n\n\n");
	printf("\nAccession Number : %d", geclib[i].acn);
	printf("\nTitle : %s", geclib[i].title);
	printf("\nAuthor : %s", geclib[i].author);
	printf("\nPrice : %d", geclib[i].price);
	if (geclib[i].flag)/*Flag : 0*/
		printf("\nStatus : Issued");
	else
		printf("\nStatus : Available");/*Flag : 1*/
}

void giv_author(char *author)
{
	int i = 0;
	printf("\nBooks of \"%s\" are following : \n\n", author);
	while (geclib[i].acn)
	{
		if (!(strcmp(author, geclib[i].author)))
			display(geclib[i].acn);
		i++;
	}
}

void adbuk()
{
	int next = count();
	geclib[next].acn = next + 1;

	/*fflush(stdin) or while(getch() != '\n'); to clear the buffer*/
	while (getchar() != '\n');
	printf("\nEnter the title of the book : ");
	gets_s(geclib[next].title);
	printf("\nEnter the author name of the book : ");
	gets_s(geclib[next].author);
	printf("\nEnter the price of the book : ");
	scanf("%d", &geclib[next].price);
	geclib[next].flag = 1;
	system("cls");
}

void which1(int an)
{
	int i = 0;
	while (geclib[i].acn)
	{
		if (geclib[i].acn == an)
		{
			printf("\n\nTitle of the book : %s\n", geclib[i].title);
			return;
		}
	}
	printf("No any book found found\n");
}

void albuk()
{
	int i = 0;
	while (geclib[i].acn)
	{
		display(i + 1);
		i++;
	}
}
int main()
{
	int ans = 1, an;
	char auth[30];
	while (ans != 7)
	{
		system("cls");
		printf("\nYou are in menu section\n");
		printf("\n1. Add Book Information");
		printf("\n2. Display Book Information");
		printf("\n3. List all books of given author");
		printf("\n4. List the title of specified book");
		printf("\n5. List the counts of the books in library");
		printf("\n6. List the books in order of accession number");
		printf("\n7. Exit");
		printf("\n\n\t\tEnter you choice : ");
		scanf("%d", &ans);
		switch (ans)
		{
		case 1:
			adbuk();
			_getch();
			break;
		case 2:
			printf("\nEnter the accession number of the book : ");
			scanf("%d", &an);
			display(an);
			_getch();
			break;
		case 3:
			while (getchar() != '\n');
			printf("Enter the name of the author (case sensitive) : ");
			gets_s(auth);
			giv_author(auth);
			_getch();
			break;
		case 4:
			printf("\nEnter the accession number of book : ");
			scanf("%d", &an);
			which1(an);
			_getch();
			break;
		case 5:
			printf("\nTotal Number of books : %d", count());
			_getch();
			break;
		case 6:
			albuk();
			_getch();
			break;
		case 7:
			return 0;
		default:
			printf("\nWrong choice, Try Again!!");
			_getch();

		}
	}
	_getch();
	return 0;
}
	
	