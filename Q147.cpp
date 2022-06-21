// write a program to convert from celsius degree to kevin and farhenheit
#include<stdio.h>
#include<conio.h>
main()
{
	float c,k,fa;
	
	printf("enter the value :");
	scanf("%f",&c);
	
	k=c+273;
	fa=9/5*c+32;
	
	printf("celsius to kelvin =%f\n",k);
	printf("celsius to fahrenheit =%f",fa);
}
