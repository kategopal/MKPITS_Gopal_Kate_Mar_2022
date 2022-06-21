#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("enter small value :");
	scanf("%d",&a);
	printf("enter medium value :");
	scanf("%d",&b);
	printf("enter the larger value :");
	scanf("%d",&c);
	
	if(a-b==b-c)
	{
		printf("true");
	}
}
