#include<stdio.h>
#include<conio.h>
main()
{
	char i,j;
	for(i=68;i>=65;i--)
	{
		for(j=65;j<=i;j++)
		{
			printf("%C",j);
		}
		printf("\n");
		
	}
}
