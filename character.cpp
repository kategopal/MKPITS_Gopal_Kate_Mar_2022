#include<stdio.h>
#include<conio.h>
main()
{
	char c;
	printf("enter the character");
	scanf("%c",&c);
	if( c>='A' && c<='Z')
	{
		printf("character is capital");
	}
	else if(c>='a' && c<='z')
	{
		printf("character is small");
	}
	else if(c>='0' && c<='9')
	{
		printf("character is digit");
	}
	else
	{
		printf("character is special symbol");
	}
}
