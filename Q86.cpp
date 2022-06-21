#include<stdio.h>
#include<conio.h>
main()
{
	int n1,n2;
	printf("enter the value of n1 :");
	scanf("%d",&n1);
	printf("enter the value of n2 :");
	scanf("%d",&n2);
	
	if(n1<30&&n2<30)
	{
		printf("0");
	}
	if(n1>n2)
	{
		printf("/nn1 is greater");
	}
	if(n1<n2)
	{
		printf("n2 is greater");
	}
}
