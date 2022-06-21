#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],i,pos,num;
	printf("enter 5 array elements :");
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
    printf("enter value you want to enter :");
    scanf("%d",&num);
    for(i=5;i>=0;i--)
    {
    a[i+1]=a[i];
	}
	pos=0;
	a[pos]=num;
	for(i=0;i<6;i++)
	{
		printf("%d\n",a[i]);
    }
	
}
