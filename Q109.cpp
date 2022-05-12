#include<stdio.h>
#include<conio.h>
main()
{
	int a[3],i;
	printf("enter array elements :");
	for(i=0;i<=2;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<=2;i++)
	{
		if(a[i]>=10&&a[i]<=20)
		{
			printf("\ntrue");
		}
		else
		{
			printf("\nfalse");
		}
	}
}
