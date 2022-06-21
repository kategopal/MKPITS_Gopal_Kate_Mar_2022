#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i;
	printf("enter 5 array element :");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		printf("\ndisplay array element%d=%d",i,a[i]);
	}
	for(i=4;i>=0;i--)
	{
		printf("\ndisplay rev array element %d=%d",i,a[i]);
	}
}
