#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	printf("enter the integers");
	scanf("%d",&a);
	
	if(a>=0 && a<=20)
	{
		printf("range1[0,20]");
	}
	else if(a>=21 && a<=40)
	{
		printf("range2[25,50]");
	}
	else if(a>=41 && a<=60)
	{
		printf("range3[50,75]");
	}
	else if (a>61 &&a<=80)
	{
		printf("range4 (61,80)");
	}
	
}
