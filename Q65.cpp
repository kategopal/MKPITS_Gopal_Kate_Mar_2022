//WAP TO CHECK ARMSTRONG NUMBER FOR (WHILE LOOP)
#include<stdio.h>
#include<conio.h>
main()
{
	int n,c,arm=0,r;
	printf("enter the number :");
	scanf("%d",&n);
	c=n;
    while(n>0)
	{
		r=n%10;
		arm=(r*r*r)+arm;
		n=n/10;
	}
	if(c==arm)
	printf("armstrong number");
	else
	printf("not armstrong");
}
