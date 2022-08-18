#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fs,*ft;
	char ch;
	fs=fopen("2b.c","r");
	if(fs==NULL)
	{
		puts("cannot open source file ");
		exit(1);
	}
	ft=fopen("18ce.c","w");
	if(ft==NULL)
	{
		puts("Cannot open target file");
		exit(2);
	}
	while(1)
	{
		ch=fgetc(fs);
		if(ch==EOF)
		break;
		else
		fputc(ch,ft);
	}
	fclose(fs);
	fclose(ft);
	return 0;
}