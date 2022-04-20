//WAP TO PRINT ADD OF ODD NUMBER FROM 1 TO 10.
#include<stdio.h>
#include<conio.h>
main()
{
	int i,add=0;
	i=1;
	do
	{
		if(i%2!=0);
		{
			add=add+i;
			printf("add=%d ",add);
		}
		i++;
	}while(i<=10);
}
