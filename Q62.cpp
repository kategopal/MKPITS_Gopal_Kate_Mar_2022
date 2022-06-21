#include<stdio.h>
#include<conio.h>
main()
{
	int i,num,fact=1;
	printf("enter the number");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		{
			fact=fact*i;
			printf("fact=%d",fact);
		}
	}
}
