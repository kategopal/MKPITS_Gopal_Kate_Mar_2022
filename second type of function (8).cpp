#include<stdio.h>
#include<conio.h>
void fun(int);
int main()
{
	int num;
	printf("enter the value of number :");
	scanf("%d",&num);
	fun(num);
}
void fun(int num)
{
	int r;
	r=num%4;
	if(r==0)
	{
		printf("div");
	}
	if(r!=0)
	{
		printf("not div");
	}
}
