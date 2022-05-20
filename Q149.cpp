// write a program to read the age of a candidate and determine whether it is eligible for casting his/her own vote
#include<stdio.h>
#include<conio.h>
main()
{
	int age;
	printf("enter your age :");
	scanf("%d",&age);
	
	if(age>18)
	{
		printf("your are eligible casting vote");
	}
	else
	{
	printf("your are not eligible casting vote");	
	}
}
