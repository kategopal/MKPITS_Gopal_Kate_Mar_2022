#include<stdio.h>
#include<conio.h>
int sum();
int main()
{
	int s;
	s=sum();
	printf("%d",s);
}
int sum()
{
	int a,b,sum=0;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	
	sum=a+b;
	return sum;
}
