#include<stdio.h>
#include<conio.h>
main()
{
	int m,n;
	printf("enter the value m :");
	scanf("%d",&m);
	
	if(m>0)
	{
		n=1;
		printf("the value of n=%d",n);
	}
	else if(m<0)
	{
		n=-1;
	}
	else if(m==0)
	{
		n=0;
	}
	else
	{
		n=1;
    }
	printf("the value of m=%d\n",m);
	printf("the value of n=%d",n);
}
