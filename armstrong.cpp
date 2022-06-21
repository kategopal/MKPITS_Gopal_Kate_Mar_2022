#include<stdio.h>
#include<conio.h>
main()
{
	int num a,b,c,rev,res;
	int res2,res3,resf;
	printf("enter any 3digit num:");
	scanf("%d",&num);
	a=num%10;
	num=num/10;
	b=num%10;
	num=num/10;
	c=num%10;
	num=num/10;
	res=a*a*a*;
	res2=b*b*b;
	res3=c*c*c;
	resf=res+res2+res3;
	printf("%d",);
	if(resf==num)
	{
	printf("num is amstrong"); 
	}
	else
	{
		printf("num is not armstrong");
	}
	
}
