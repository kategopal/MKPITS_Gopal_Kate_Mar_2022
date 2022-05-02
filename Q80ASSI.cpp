#include<stdio.h>
#include<conio.h>
main()
{
	int n,a=100,b=200;
	printf("enter the value");
	scanf("%d",&n);
	
	if(n<=a)
	{
		printf("range between 1 to 100");
	}
	if(n>a && n<=b)
	{
		printf("range between 100 to 200");
	}
}
