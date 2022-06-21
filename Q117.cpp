#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,max;
	printf("enter the value of array elements :");
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<5;i++)
	{
		if(a[i/2]>max)
		{
			max=a[i/2];
		}
	
		if(a[i-1]>max)
		{
			max=a[i-1];
		}
		
	}
	printf("%d",max);
}
