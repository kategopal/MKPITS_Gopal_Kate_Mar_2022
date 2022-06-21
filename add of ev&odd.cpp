#include<stdio.h>
#include<conio.h>
main()
{
	int num,n1,n2,n3,n4,n5,eres,ores;
	printf("enter five digit number");
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
		eres=eres+n1;
	}
	if(n1%2!=0);
	{
		ores=ores+n1;
	}
	if(n2%2==0)
	{
		eres=eres+n2;
	}
	if(n2%2!=0);
	{
		ores=ores+n2;
	}
	if(n3%2==0)
	{
		eres=eres+n3;
	}
	if(n3%2!=0);
	{
		ores=ores+n3;
	}
	if(n4%2==0)
	{
		eres=eres+n4;
	}
	if(n4%2!=0);
	{
		ores=ores+n4;
	}
	if(n5%2==0)
	{
		eres=eres+n5;
	}
	if(n5%2!=0);
	{
		ores=ores+n5;
	}
	
	printf("\neres=%d",eres);
	printf("\nores=%d",ores);
}
