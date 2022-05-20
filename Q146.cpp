//write a program that takes a number as input and then display a rectangle of 3 column  wide and 5 rows atll using that digit 
#include<stdio.h>
#include<conio.h>
main()
{
	int r,c,n;
	printf("enter the value :");
	scanf("%d",&n);
	
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=3;c++)
		{
			if(r==1||r==5||c==1||c==3)
			{
			printf("%d",n);
		    }
		    else
		    {
		    	printf(" ");
			}
		}
		printf("\n");
	}
	
}
