#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,ser;
	printf("enter array element");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter number you wnt to sarch");
	scanf("%d",&ser);
	for(i=0;i<=4;i++)
	{
		if(a[i]==ser)
		{
			printf("present");
		}
		
	}
}
