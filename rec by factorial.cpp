#include<stdio.h>
#include<conio.h>
int fun(int);
int main()
{
	int n,f;
	printf("enter the value :");
	scanf("%d",&n);
	f=fun(n);
	printf("%d",f);
}
int fun(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return (n*fun(n-1));
	}
}
