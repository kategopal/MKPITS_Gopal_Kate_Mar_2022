#include<stdio.h>
#include<conio.h>
main()

{
	int num1,num2,sw;
	printf("enter two numbers");
	scanf("%d%d",&num1,&num2);
	sw=num1;
	num1=num2;
	num2=sw;
	printf("after swaping");
	printf("num1,num2=%d%d",sw);
}
