#include<stdio.h>
#include<conio.h>
main()
{
	int a[2],i;
	printf("enter 2 elements of array");
	for(i=0;i<=1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=1;i++)
	{
		printf("\ndisplay array elements %d=%d",i,a[i]);
	}
}
