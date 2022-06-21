#include<stdio.h>
#include<conio.h>
main()
{
	int x,y;
	printf("neter the value of x :");
	scanf("%d",&x);
	printf("neter the value of y :");
	scanf("%d",&y);
	if(x>40&&x<50||y>40&&y<50)
	{
		printf("present in range 40,50");
	}
	else
	{
		printf("not present in range 40,50");
	}
	
}
