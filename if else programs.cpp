#include<stdio.h>
#include<conio.h>
main()
{
	int p1,p2,p3;
	printf("enter 3 numbers");
	scanf("%d%d%d",&p1,&p2,&p3);
	if(p1>p2&&p1>p3)
	{
		printf("p1 is greater");
	}
	else
	if(p2>p1&&p2>p3)
	{
		printf("p2 is greater");
	}
	else
	{
		printf("p3 is greater");
	}
}
