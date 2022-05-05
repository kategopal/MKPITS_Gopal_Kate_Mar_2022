#include<stdio.h>
#include<conio.h>
int mul();
int main()
{
	int c;
	c=mul();
	printf("%d",c);
}
int mul()
{
	int a,b,mul;
	printf("enter the value of a :");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);
	mul=a*b;
	return mul;
}
