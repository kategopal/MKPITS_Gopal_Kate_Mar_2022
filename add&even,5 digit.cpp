#include<stdio.h>
#include<conio.h>
main()
{
	int num,n1,n2,n3,n4,n5,ev;
	printf("enter 5 digit num");
	scanf("%d",&num);
	
	n1=num%10;
	num=num/10;
	
	n2=num%10;
	num=num/10;
	
	n3=num%10;
	num=num/10;
	
	n4=num%10;
	num=num/10;
	
	n5=num%10;
	
	if(n1%2==0)
	{
		ev=ev+n1;
	}
	if(n2%2==0)
	{
		ev=ev+n2;
	}
	if(n3%2==0)
	{
		ev=ev+n3;
	}
	if(n4%2==0);
	{
		ev=ev+n4;
	}
	if(n5%2==0)
	{
		ev=ev+n5;
	}
	printf("ev=%d",ev);
}
