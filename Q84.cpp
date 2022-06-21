#include<stdio.h>
#include<conio.h>
main()
{
	int num1,num2;
	printf("enter the value of n1 :");
	scanf("%d",&num1);
	printf("enter the value of n2 :");
	scanf("%d",&num2);
	
	if(num1<100&&num1>91&&num2<100&&num2>91)
	{
		printf("nearest to 100");
	}
	if(num1==num2)
	{
		printf("0");
	}
}
