#include<stdio.h>
#include<conio.h>
main()
{
	int i,x,y,power=1;
	
	printf("enter the value of x and y");
	scanf("%d%d",&x,&y);
	
	for(i=1;i<=y;i++)
	{
		{
			power=power*i;
			printf("power=%d",power);
			
		}
	}
}
