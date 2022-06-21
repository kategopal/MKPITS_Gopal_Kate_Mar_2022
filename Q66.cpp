//WP TO CHECK ARMSTRONG NUMBER FOR (FOR LOOP)
#include<stdio.h>
#include<conio.h>
main()
{
	int n,r,c,arm=0;
	printf("enter the number");
	scanf("%d",&n);
	c=n;
	do
	{
		r=n%10;
		arm=r*r*r+arm;
		n=n/10;
	}while(n>0);
	if(c==arm)
	{
		printf("armstrong number");
	}
	else
	{
		printf("not armstrong");
	}
}
