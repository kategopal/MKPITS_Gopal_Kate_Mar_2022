#include<stdio.h>
#include<conio.h>
main()
{
	int r,c,n=4,k=1;
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%d",k++);
		}
		printf("\n");
	}
}
