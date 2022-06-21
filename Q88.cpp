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
		if(a[i]==1 && a[i+1]==2 && a[i+2]==3)
		{
			printf("sequence is present\n");
		}
		else
		{
			printf("sequence is not present\n");
		}
	}
}
