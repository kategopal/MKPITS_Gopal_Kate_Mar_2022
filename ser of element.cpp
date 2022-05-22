#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,ser;
	printf("enter array elements :");
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
    }  
	printf("enter num you want to search :");
	scanf("%d",&ser);
	for(i=0;i<5;i++)
	{
		if(a[i]==ser)
		{
			printf("present\n");
		}
		else
		{
			printf("not present\n");
		}
	}
}
