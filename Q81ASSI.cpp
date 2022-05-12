#include<stdio.h>
#include<conio.h>
main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	
	if(num<=100)
	{
		printf("num present in 1 to 100 range");
	}
	if(num>100 && num<=200)
	{
		printf("num present in 101 to 200");
	}
}
