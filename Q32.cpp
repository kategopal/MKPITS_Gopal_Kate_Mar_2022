#include<stdio.h>
#include<conio.h>
main()
{
	int password;
	printf("enter the password/n");
	scanf("%d",&password);
	if(password==1234)
	{
		printf("correct password/n");
	}
	else
	{
		printf("incorrect password");
	}
}
