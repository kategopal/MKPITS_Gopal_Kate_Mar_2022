#include<stdio.h>
#include<conio.h>
main()
{
	int ndays,year,month,day;
	printf("enter total number of days");
	scanf("%d",&ndays);
	year=ndays/365;
	month=(ndays-year*365)/30;
	days=ndays-(year*365)-(month*30);
	printf("year,month,days,=%d%d%d",month,year,days);
	
	
}
