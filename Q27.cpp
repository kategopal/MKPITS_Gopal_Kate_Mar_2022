#include<stdio.h>
#include<conio.h>
main()
{
	int num,d1,d2,d3,d4,d5,sum;
	printf("enter 5 digit number");
	scanf("%d",num);
	
	d1=num%10;
	num=num/10;
	
	d2=num%10;
	num=num/10;
	
	d3=num%10;
	num=num/10;
	
	d4=num%10;
	num=num%10;
	
	d5=num%10;
	 
	 if("num%2==0")
	 {
	 	printf("num is even");
	 	sum=d1+d2+d3+d4+d5;
	 }
	 else
	 {
	 	printf("num is odd");
	 	sum=d1+d2+d3+d4+d5;
	 }
	 printf("sum of even=%d",sum);
	 
	 printf("sum of odd=%d",sum);
	 
	
	
}
