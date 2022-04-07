#include<stdio.h>
#include<conio.h>
main()
{
	int p,q,r,s,res;
	printf("enter p value");
	scanf("%d",&p);
	printf("enter q value");
	scanf("%d",&q);
	printf("enter r value");
	scanf("%d",&r);
	printf("enter s value");
	scanf("%d",&s);
	if((q>r)&&(s>p)&&((r+s)>(p+q)))
	{
		printf("correct value");
		
	}
	else
	{
		printf("wrong value");
	}
}
