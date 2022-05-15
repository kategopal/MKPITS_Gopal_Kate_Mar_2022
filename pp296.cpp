#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	for(i='A';i<='E';i++)
	{
		for(j='E';j>=i;j--)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}
