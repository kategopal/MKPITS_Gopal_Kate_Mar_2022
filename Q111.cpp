#include<stdio.h>
#include<conio.h>
main()
{
	int a1[3],a2[3],i,add1=0,add2=0;
	printf("enter 1st arrary elements :");
	for(i=0;i<3;i++)
	{
		printf("a1[%d]=",i);
		scanf("%d",&a1[i]);
		
	}
	printf("add of 1st array elements :");
	for(i=0;i<3;i++)
	{
		add1=add1+a1[i];
	}
	{
	printf("%d\n",add1);
    }
    printf("enter 2nd array elements :");
    for(i=0;i<3;i++)
    {
    	printf("a2[%d]=",i);
    	scanf("%d",&a2[i]);
	}
	printf("add of 2nd array elements :");
	for(i=0;i<3;i++)
	{
		add2=add2+a2[i];
	}
	{
	printf("%d\n",add2);
    }
    if(add1>add2)
    {
    	printf("sum of first array is greater :");
	}
	else
	{
		printf("sum of second array is greater :");
	}
}
