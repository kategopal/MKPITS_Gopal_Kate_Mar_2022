#include<stdio.h>
#include<conio.h>
main()
{
	int num;
	printf("enter the value :");
	scanf("%d",&num);
	
	if(num%3==0)
	{
		printf("multiple of 3");
	}
	if(num%7==0)
	{
		printf("multiple of 7");
	}
	else
	{
		printf("not both");
	}
}
