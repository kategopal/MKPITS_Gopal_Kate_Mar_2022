// write a program to shift an elements in left direction and return a new array

#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,b[5];
	printf("enter array elements :");
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(i==4)
		{
			b[0]=a[i];
		}
		else
		{
			b[i+1]=a[i];
		}
	}
	for(i=0;i<5;i++)
	{
	printf("%d",b[i]);
}
}
