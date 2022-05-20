//write a program to check a given array (length will atleast 2) of integers and return true if there are two values 15,15 next to each other
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
		if(a[i]==15&&a[i+1]==15)
		{
			printf("true");
		}
		else
		{
			printf("false");
		}
	}
}
