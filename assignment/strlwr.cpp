#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char g[20];
	printf("enter the name :");
	scanf("%s",g);
	
	strlwr(g);
	printf("in lower case=%s",g);
	
}
