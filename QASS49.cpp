#include<stdio.h>
#include<conio.h>
main()
{
	float p,r,t,si;
	printf("enter principle");
	scanf("%f",&p);
	
	printf("enter rate of intrest");
	scanf("%f",&r);
	
	printf("enter time");
	scanf("%f",&t);
	
	si=(p*r*t)/100;
	printf("simple intrest %f",si);
}
