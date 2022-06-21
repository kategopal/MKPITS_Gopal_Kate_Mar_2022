#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,i,power=1;
	
	printf("enter x & y value");
	scanf("%d%d",&x,&y);
	
	i=1;
	do
	{
		{
		power=power*i;
		printf("power%d",power);
		i++;
	    }
	}while(i<=y);
}
