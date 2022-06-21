#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,ser;
	printf("enter 5 array ");
	for(i=0;i<=4;i++)
	{
	    printf("a[%d]",i);
        scanf("%d",&a[i]);
	}
	printf("enter search");
	for(i=0;i<=5;i++)
	{
		if(a[i]==ser)
		{
			printf("present");
		}
	}
}
