// write a program to check a given array of integers and return true if the array contained three increasing adjacent numbers

#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i;
	printf("neter array elements :");
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]==a[i+1]-1 || a[i]==a[i+2]-2)
		{
			printf("true");
		}
		else
		{
			printf("false");
		}
	}
}
