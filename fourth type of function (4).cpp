#include<stdio.h>
#include<conio.h>
int sub();
int main()
{
	int c;
	c=sub();
	printf("%d",c);
}
int sub()
{
	int a,b,sub;
	printf("enter the value of a :");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);
	sub=a-b;
	return sub;
}
