// write a program to chech a given array of integers and return true if every 5 appears in the given array is next to another 5
#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,count=0;
	printf("enyter array elements :");
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]==5 && a[i+1]==5)
		{
			count=count+1;
		}
	}
	printf("%d",count);
}
