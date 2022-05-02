#include<stdio.h>
#include<conio.h>
main()
{
	int a[4],i,max,min,sub;
	printf("enter4  array element");
	for(i=0;i<=3;i++)
	{
	scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<=3;i++)
    {
    	if(a[i]>max)
    	{
    		max=a[i];
	    }
	    
	}
	{
	printf("max=%d",max);
    }
    
    min=a[0];
    for(i=0;i<=3;i++)
    {
    	if(a[i]<min)
    	{
    		min=a[i];
		}
	}
	{
		printf("min=%d",min);
	}
	for(i=0;i<=3;i++)
	{
		sub=max-min;
    }
    printf("sub=%d",sub);
	
}
