#include<stdio.h>
#include<conio.h>
void power(int,int);
int main()
{
	int a,b;
	printf("enter the value of a :");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);
	power(a,b);
}
void power(int x,int y)
{
	int i,power=1;
	for(i=1;i<=y;i++)
	{
		power=power*x;
		
	}
	printf("power=%d",power);
}
