#include<stdio.h>
#include<conio.h>
main()
{
	float radius,res;
	printf("enter the value of radius");
	scanf("%f",&radius);
	
	res=0.67*3.142*radius*radius*radius;
	printf("res=%f",res);
}
