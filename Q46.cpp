//WAP TO PRINT ODD NUMBER FROM 1 TO 10.
#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	i=1;
	do
	{
		if(i%2!=0)
		{
		printf("%d ",i);
	    }
	    i++;
	}while(i<=10);
}
