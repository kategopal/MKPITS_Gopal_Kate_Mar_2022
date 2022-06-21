#include<stdio.h>
#include<conio.h>
int fact();
int main()
{
	int c;
	c=fact();
	printf("%d",c);
}
int fact()
{
	int num,i,fact=1;
	printf("enter the value :");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	return fact;
}
