#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,swap=0;
	printf("enter two numbers :");
    scanf("%d%d",&a,&b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("\na=%d",a);
    printf("\nb=%d",b);
}
