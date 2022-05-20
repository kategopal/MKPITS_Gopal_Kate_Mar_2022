//write a program that takes four number as input to calculate and print the average
#include<stdio.h>
#include<conio.h>
main()
{
	float n1,n2,n3,n4,sum=0,avg;
	printf("enter first number :");
	scanf("%f",&n1);
	printf("enter sceond number :");
	scanf("%f",&n2);
	printf("enter third number :");
	scanf("%f",&n3);
	printf("enter fourth number :");
	scanf("%f",&n4);
	
	sum=n1+n2+n3+n4;
	avg=sum/4;
	
	printf("\n%f",sum);
	printf("\n%f",avg);
}
