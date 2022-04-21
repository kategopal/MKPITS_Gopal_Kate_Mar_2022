#include<stdio.h>
#include<conio.h>
main()
{
	int r,c,n;
	printf("enter n");
	scanf("%d",&n);
	
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=r;c++)
		{ 
	 // for every odd column print 1
		if(c%2==1)
		{
			printf("1");
		}
		else
		{
			printf("0");
	    }
		}
		printf("\n");
		
	}
}
