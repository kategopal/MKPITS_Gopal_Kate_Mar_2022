#include<stdio.h>
#include<conio.h>
main()
{
	int num1,num2,div;
	printf("enter two numbers");
	scanf("%d%d",&num1,&num2);
	if(num2!=0)
	{
	div=num1/num2;
	printf("%d",div);
    }
    else
    {
    	printf("division NOT possible");
	}

}
