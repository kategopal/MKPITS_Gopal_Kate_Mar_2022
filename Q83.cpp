#include<stdio.h>
#include<conio.h>
main()
{
	int n1,n2,n3;
	printf("enter value of n1 :");
	scanf("%d",&n1);
	printf("enter the value of n2 :");
	scanf("%d",&n2);
	printf("enter the value of n3 :");
	scanf("%d",&n3);
	
	if(n1<50&&n2<50&&n3<50&&n1>1&&n2>1&&n3>1)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}
