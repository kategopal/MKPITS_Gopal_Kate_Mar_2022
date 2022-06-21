#include<stdio.h>
#include<conio.h>
main()
{
	int n,r,add=0;
	printf("enter n digit ");
	scanf("%d",&n);
	while(n>0);
	{
	r=n%10;
	add=add+r;
	n=n/10;
	}
	printf("add=%d",add);
}
