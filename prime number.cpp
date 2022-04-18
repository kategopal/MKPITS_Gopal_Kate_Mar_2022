#include<stdio.h>
#include<conio.h>
main()
{
	int i,a=0,num;
	printf("enter any number\n");
	scanf("%d",&num);
	
	i=1;
	while(i<=num)
	{
		if(num%i==0)
		{
			a=a+1;
		}
		i++;
	}
	if(a==2)
	{
		printf("%d is prime number",num);
	}
	else
	{
		printf("%d is not prime number",num);
	}
}
