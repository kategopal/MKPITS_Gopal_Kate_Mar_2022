#include<stdio.h>
#include<conio.h>
main()
{
	int a[6],i;
	printf("enter the value of array elements :");
	for(i=0;i<6;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++)
	{
		if(a[i]==a[i+1] || a[i]==a[i+2])
		{
			printf("triple is present\n");
		}
		else
		{
			printf("triple is not present\n");
		}
	}
}
