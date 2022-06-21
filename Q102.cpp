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
		if(a[0]==a[4])
		{
			printf("true");
		}
		else
		{
			printf("false");
		}
	}
}
