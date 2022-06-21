//write a program to that takes three numbers (x,y,z) as input and print the output of (x+y).z and x.y+y.z 
#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,z,a,b;
	{
		printf("enter the value of x :");
		scanf("%d",&x);
			printf("enter the value of y :");
		scanf("%d",&y);
			printf("enter the value of z :");
		scanf("%d",&z);
		
		a=(x+y)*z;
		b=x*y+y*z;
		
		printf("%d\n",a);
		printf("%d\n",b);
	}
}
