#include<stdio.h>
#include<conio.h>
main()
{
	int a[4],i,b[4];
	printf("ente 4 array elements :");
	for(i=0;i<4;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
	{ 
	if(i==3)
	{
		b[0]=a[i];
	}
	else
	{
		b[i+1]=a[i];
	}
	
	}
	for(i=0;i<4;i++)
	{
		printf("%d",b[i]);
	}
}
