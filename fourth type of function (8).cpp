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
	int l,b,a;
	printf("enter the value of l :");
	scanf("%d",&l);
	printf("enter the value of b :");
	scanf("%d",&b);
	
	a=l*b;
	return a;
}
