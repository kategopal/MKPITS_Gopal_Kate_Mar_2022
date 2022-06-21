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
		if(a[i]==5)
		{
			break;
		}
		printf("\n%d",a[i]);
	}
}
