#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(j>=6-i)
			{
				printf("1");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
