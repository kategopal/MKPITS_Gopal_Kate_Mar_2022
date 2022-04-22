#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	printf("enter the value of entegers: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("\n%d ",i);
		}
	}
}
