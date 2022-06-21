#include<stdio.h>
#include<conio.h>
int fun();
int main()
{
	int c;
	c=fun();
	printf("%d",c);
}
int fun()
{
	int radius,a,pi=3.142;
	printf("enter the radius :");
	scanf("%d",&radius);
	a=pi*(radius*radius);
	return a;
}
