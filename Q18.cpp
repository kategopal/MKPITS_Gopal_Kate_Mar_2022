//WAP TO CONVERT GIVEN INTEGERS TO A GIVEN INTEGERS (IN SEC)TO HRS, MIN ,SEC .
#include<stdio.h>
#include<conio.h>
main()
{
	int sec,m,h,s;
	printf("enter the value of sec");
	scanf("%d",&sec);
	h=(sec/3600);
	m=(sec-(3600*h))/60;
	s=(sec-(3600*h)-(m*60));
	printf("h,m,s=%d%d%d",h,m,s);
}
