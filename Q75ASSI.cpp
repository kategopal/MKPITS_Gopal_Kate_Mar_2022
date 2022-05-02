#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("enter two entegers");
	scanf("%d%d",&a,&b);
	
	if(a==b)
	{
		c=(a+b)*3;
	}
	else
	{
		c=a+b;
	}
	printf("%d",c);
}
