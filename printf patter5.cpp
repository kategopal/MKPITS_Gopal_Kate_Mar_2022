#include<stdio.h>
#include<conio.h>
main()
{
	int r,c,sp,k=1;
	for(r=1;r<=7;r++)
	{
		for(sp=1;sp<=41-r;sp++)
		{
			printf(" ");
		}
		for(c=1;c<=r;c++)
		{
			printf("%d ",c);
		}
		printf("\n");
	}
}
