#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,power=1,i;
	printf("enter the value of x and y");
	scanf("%d%d",&x,&y);
	i=1;
	while(i<=y)
	{
		power=power*i;
		i++;
	}
	printf("power=%d",power);
	
}
