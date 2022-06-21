#include<stdio.h>
#include<conio.h>

void add()
{
	int n1,n2,sum=0;
	printf("enter two numbers :");
	scanf("%d%d",&n1,&n2);
	
	sum=n1+n2;
	printf("sum=%d",sum);
}
int main()
{
	add();
}

