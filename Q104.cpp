#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i;
	printf("enter array elements :");
	for(i=0;i<=4;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		
	}
	printf("rev of array elements :");
	for(i=4;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}
