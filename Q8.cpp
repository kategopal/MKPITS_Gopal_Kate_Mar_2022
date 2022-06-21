#include<stdio.h>
#include<conio.h>
main()
{
	int pi=3.14,radius,perimeter,area;
	printf("enter the radius\n");
	scanf("%d",&radius);
	area=pi*radius*radius;
	printf("area of circlr=%d",area);
	perimeter=2*pi*radius;
	printf("perimeter of circle=%d",perimeter);
}
