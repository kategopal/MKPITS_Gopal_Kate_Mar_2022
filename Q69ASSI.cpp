#include<stdio.h>
#include<conio.h>
main()
{
	float p,r,d,si;
	printf("enter principle");
	scanf("%f",&p);
	
	printf("enter rate of intrest");
	scanf("%f",&r);
	
	printf("enter days");
	scanf("%f",&d);
	
	si=(p*r*d)/100;
	printf("simple intrest %f",si);
}
