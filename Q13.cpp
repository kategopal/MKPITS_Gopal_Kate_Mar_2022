#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("enter three numbers :");
	scanf("%%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		printf("%d is a greater",a);
		else
		printf("%d is a greater",c);
		
	}
	else
	{
		if(b>c)
		printf("%d is agreater",b);
		else
		printf("%d is a greater",c);
	}
}
