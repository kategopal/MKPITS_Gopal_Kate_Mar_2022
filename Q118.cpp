#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i;
	printf("enter the value :");
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	int count=0;
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
			count=count+1;
		}	
	}
	printf("%d",count);
}
