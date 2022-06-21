#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,add=0;
	printf("enter 5 array elements");
	for(i=0;i<=5;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("add of array element");
	for(i=0;i<=5;i++)
	{
		{
		add=add+a[i];
		}
	}
		printf("%d",add);
}
