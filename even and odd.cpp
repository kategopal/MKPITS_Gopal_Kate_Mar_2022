#include<stdio.h>
#include<conio.h>
main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("even number");
	}
	if(num%2!=0)
	{
		printf("odd num");
	}
}
