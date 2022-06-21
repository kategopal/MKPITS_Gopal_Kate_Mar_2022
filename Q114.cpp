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
		if(i==0)
		{
			b[5-1]=a[i];
		}
		else if(i==5-1)
		{
		b[0]=a[5-1];
		}
		else
		{
			b[i]=a[i];
		}
	}
	for(i=0;i<5;i++)
	{
	printf("%d",b[i]);
    }
}
