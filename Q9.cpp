#include<stdio.h>
#include<conio.h>
main()
{
	int nodays,days,weeks,years;
	printf("enter total days");
	scanf("%d,&nodays");
	years=nodays/365;
	weeks=(nodays%365)/7;
	days=(nodays%365)%7;
	printf("%d%d%d",nodays,years,days,weeks);
	
}
