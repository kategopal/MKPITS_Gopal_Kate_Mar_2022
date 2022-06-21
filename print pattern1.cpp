#include<stdio.h>
#include<conio.h>
main()
{
	int r,str,sp;
	for(r=1;r<=4;r++)
	{
		for(sp=1;sp<=4-r;sp++)
		{
			printf(" ");
			
		}
		for(str=1;str<=r;str++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
