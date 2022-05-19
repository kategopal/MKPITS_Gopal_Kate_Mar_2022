#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,add1=0,add2=0;
	printf("enter array elements :");
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]==3)
		{
			add1=add1+1;
		}
		if(a[i]==5)
		{
			add2=add2+1;
		}
	}
	if(add1>add2)
	{
		printf("no of 3 is greater than the no of 5");
	}
	else
	{
		printf("no of 3 is not greater than the no of 5");
	}
}
