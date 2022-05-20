// write a program to find whether a given year is a leap year or not
#include<stdio.h>
#include<conio.h>
main()
{
	int yr;
	printf("enter the year :");
	scanf("%d",&yr);
	
	if(yr%4==0)
	{
		printf("leap year");
	}
	else
	{
		printf("not leap year");
	}
}
