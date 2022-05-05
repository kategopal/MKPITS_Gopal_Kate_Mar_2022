#include<stdio.h>
#include<conio.h>
int power();
int main()
{
	int c;
	c=power();
	printf("%d",c);
}
int power()
{
	int a,b,power=1,i;
	printf("enter the value of a :");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{
		power=power*a;
	}
	return power;
}
