#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,n,count=0;
	printf("enter array elements :");
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i+1]>=a[i])
		{
			count=count+1;
		}
		
	}
	{
		printf("\n%d",count);
	}
}
