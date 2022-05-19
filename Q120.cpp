#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,add=0;
	printf("enter array elements :");
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]!=5&&a[i]!=6)
		{
			add=add+a[i];
		}
	}
	printf("%d",add);
}
