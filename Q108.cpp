#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i;
	printf("enter array element :");
	for(i=0;i<=4;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		if(a[i]>=15&&a[i]<=20)
		{
			printf("\n1");
		}
		else
		printf("\n0");
	}
}
