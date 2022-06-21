#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	printf("enter number from key board");
	scanf("%d",&a);
	
	printf("\ninteger value=%d",a);
	a<<=2;
	b=a;
	printf("\nthe left shifted data is=%d",b);
}
