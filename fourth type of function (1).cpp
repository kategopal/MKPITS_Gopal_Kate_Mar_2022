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
	int radius,pi=3.142,p;
	printf("enter the radius :");
	scanf("%d",&radius);
	p=2*pi*radius;
	return p;
}
