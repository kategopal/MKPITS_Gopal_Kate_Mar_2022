#include<stdio.h>
#include<conio.h>
main()
{
	int n,c,a=51;
	printf("enter the value");
	scanf("%d",&n);
	
	if(n>a)
	{
		c=(a-n)*3;
	}
	else
	{
		c=a-n;
	}
	printf("%d",c);
}
