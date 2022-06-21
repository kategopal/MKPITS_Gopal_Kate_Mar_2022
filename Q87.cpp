#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,r1,r2;
	printf("enter the value of x :");
	scanf("%d",&x);
	printf("enter the value of y :");
	scanf("%d",&y);
	r1=x%10;
	r2=y%10;
	if(r1==r2)
	{
		printf("last digit is same");
	}
	else
	{
		printf("last digit is not same");
	}
}
