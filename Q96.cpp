#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,z;
	printf("enter the value of x :");
	scanf("%d",&x);
	printf("enter the value of y :");
	scanf("%d",&y);
	printf("enter the value of z :");
	scanf("%d",&z);
	
	if(z==x+y || y==x+z || x==y+z)
	{
		printf("it is possible to add");
	}
	else
	{
			printf("it is not possible to add");
	}
}
