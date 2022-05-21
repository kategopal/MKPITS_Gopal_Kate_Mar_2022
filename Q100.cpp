#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,r1,r2;
		printf("enter the value x :");
		scanf("%d",&x);
		printf("enter the value of y :");
		scanf("%d",&y);
		
		r1=x%5;
		r2=y%5;
		
		if(x==y)
		{
			printf("0");
		}
		else if(r1==r2)
		{
			if(x>y)
			{
				printf("%dreturn smaller integers",y);
			}
			else
			{
				printf("%d return smaller integrs",x);
			}
		}
		else
		{
			if(x>y)
			{
				printf("retuen greater integer %d",x);
			}
			else
			{
				printf(" return greater integer %d",y);
			}
		}
}
