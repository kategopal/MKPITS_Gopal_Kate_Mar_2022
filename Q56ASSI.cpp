#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,max,min;
	printf("enter 5 array element");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<=4;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	{
		printf("max=%d",max);
	}
	a[0]=min;
	for(i=0;i<=4;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	{
		printf("min=%d",min);
	}
}
