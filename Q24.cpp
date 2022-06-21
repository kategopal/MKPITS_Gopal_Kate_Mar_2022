#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	printf("enter the first num");
	scanf("%d",&a);
	printf("enter the second num");
	scanf("%d",&b);
	
	if((b%a)==0)
	{
		printf("multiplied");
	}
	else
	{
		printf("not multiplied");
	}
}
