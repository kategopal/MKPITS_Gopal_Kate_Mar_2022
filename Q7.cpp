#include<stdio.h>
#include<conio.h>
main()
{
	int length,breadth,area,perimeter;
	printf("enter the length,breadth of an rectangle\n");
	scanf("%d%d",&length,&breadth);
	area =length*breadth;
	printf("area of rectangle=%d\n",area);
	perimeter=2*(length+breadth);
	printf("perimeter of a rectangle=%d\n",perimeter);
}
