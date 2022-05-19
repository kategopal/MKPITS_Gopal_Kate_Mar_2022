#include<stdio.h>
#include<conio.h>
main()
{
	int num;
	printf("enter the number :");
	scanf("%d",&num);
	if(num%10<=2)
	{
		printf("it is within 2 of a multiple of 10");
	}
	else
	{
		printf("it is not within 2 of a multiple of 10");
	}
}

