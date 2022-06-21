//WAP TO PRINT ADD OF EVEN NUMBERS 1 TO 10.
#include<stdio.h>
#include<conio.h>
main()
{
	int i,add=0;
	for(i=1;i<=10;i++)
	{
		if(i%2==0)
		{
			add=add+i;
			printf("add=%d ",add);
		}
	}
}
