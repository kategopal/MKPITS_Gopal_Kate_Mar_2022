#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i;
	printf("enter 5 array elements :");
	for(i=0;i<=5;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	printf("\nreverse array elements :");
	for(i=5;i>=0;i--)

	{
		printf("a[%d]",i);
		printf("%d ",a[i]);
	}
}
