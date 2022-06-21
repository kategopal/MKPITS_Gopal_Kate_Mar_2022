#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,c,r,s=0;
	printf("enter value of number");
	scanf("%d",&n);
	c=n;
	do
	{
	r=n%10;
	s=r+(s*10);
	n=n/10;	
	}while(n>0);
	if(c==s)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
	
	
}
