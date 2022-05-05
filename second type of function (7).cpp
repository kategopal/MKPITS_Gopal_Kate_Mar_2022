#include<stdio.h>
#include<conio.h>
void fact(int);
int main()
{
	int num;
	printf("enter the value :");
	scanf("%d",&num);
	fact(num);
}
void fact(int num)
{
	int i,fact=1;
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("fact=%d",fact);
}
