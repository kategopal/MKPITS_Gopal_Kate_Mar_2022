#include<stdio.h>
#include<conio.h>
main()
{
	int a[6],i,min;
	printf("enter 6 elements of array :");
	for(i=0;i<=5;i++)
	{
	scanf("%d",&a[i]);	
	}
	a[0]=min;
	for(i=0;i<=5;i++)
	{
	if(a[i]<min)
	{
		min=a[i];
	}
    }
		printf("\nmin array element=%d",min);
}
