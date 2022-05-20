//write a program that takes a number as input and print its multiplication table
#include<stdio.h>
#include<conio.h>
main()
{
	int n,i;
	printf("enter the value of number :");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",n,i,n*i);
	}
}
