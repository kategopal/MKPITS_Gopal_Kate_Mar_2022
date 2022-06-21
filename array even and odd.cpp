#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],i,even=0,odd=0;
	printf("enter 10 array elements");
	for(i=0;i<=10;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("even number");
	for(i=0;i<=10;i++)
	{
		if(a[i]%2==0)
		{
		printf("%d",a[i]);
		even++;
	    }
	}
	printf("odd num");
	for(i=0;i<=10;i++)
	{
		if(a[i]%2!=0)
		{
		printf("%d",a[i]);
		odd++;
	    }
	}
	printf("total even number :\n",even);
	printf("total odd number :\n",odd);
}
