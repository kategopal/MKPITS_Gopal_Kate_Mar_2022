// write a progranm to check a given array of integers and return true if the specified number of same elements appears a start and end of the given array
#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i;
	printf("enter array elements :");
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[0]==a[4])
		{
			printf("true");
		}
	}
}
