#include<stdio.h>
#include<conio.h>
main()
{
	int p,r,sp;
	for(r=4;r>=1;r--)
	{
		for(sp=1;sp<=41-r;sp++)
		{
			printf(" ");
			
		}
		for(p=1;p<=r;p++)
		{
			printf("%d ",r);
		}
		printf("\n");
	}
}
