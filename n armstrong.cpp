#include<stdio.h>
#include<conio.h>
main()
{
	int n,sum=0,r;
	printf("enter any number:");
	scanf("%d",&n);
	int t=n;
	while(n>0);
	{
	r=n%10;
	sum=sum+(r*r*r);
	n=n/10;
    }
    if(t==sum)
    {
    	printf("armstrong number:");
	}
	else
	{
		printf("num is not armstrong");
	}
    

}
