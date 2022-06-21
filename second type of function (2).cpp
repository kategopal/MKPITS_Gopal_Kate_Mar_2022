#include<stdio.h>
#include<conio.h>
void sub(int,int);
int main()
{
	int a,b;
	printf("enter the value of a :");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);
	sub(a,b);
}
void sub(int x,int y)
{
	int sub;
	sub=x-y;
	printf("sub=%d",sub);
}
