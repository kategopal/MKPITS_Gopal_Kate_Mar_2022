#include<stdio.h>
#include<conio.h>
main()
{
  	float wt1,wt2,np1,np2,avg;
  	printf("enter the value of wt1");
  	scanf("%f",&wt1);
  	printf("enter the value of wt2");
  	scanf("%f",&wt2);
  	printf("enter the value of np1");
  	scanf("%f",&np1);
  	printf("enter the value of np2");
  	scanf("%f",&np2);
  	
  	avg=((wt1*np1)+(wt2*np2))/(np1*np2);
  	printf("avg=%f",avg);
  	
} 
