#include<stdio.h>
#include<conio.h>
main()
{
	int num=001;
	int a,b,c,a1,res;
	while(num<=1000);
	{
		a1=num;
		a=a1%10;
		a1=a1/10;
		b=a1%10;
		a1=a1%10;
		c=a1%10;
		
		res=(a*a*a)+(b*b*b)+(c*c*c);
		if(num=res)
		{
			printf("%d",res);
		}
		
	}
}
