#include<stdio.h>
#include<conio.h>
main()
{
	int n,c,r,arm=0;
	printf("enter he number");
	scanf("%d",&n);
	n=c;
	for(n>0)
	{
		r=n%10;
		arm=r*r*r+arm;
		n=n/10;
	}
	if(c==arm)
	{
		printf("armstrong");
		
	}
	else
	{
		printf("not armstrong");
	}
	
}
