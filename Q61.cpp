//WAP TO FIND FACTORIAL OF NUMBER 
#include<stdio.h>
#include<conio.h>
main()
{
	int num,i,fact=1;
	printf("enter the number");
	scanf("%d",&num);
	
	i=1;
	do
	{
		{
			fact=fact*i;
			printf("fact=%d",fact);
			i++;
		}
	}while(i<=num);
}
