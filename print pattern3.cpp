#include<stdio.h>
#include<conio.h>
main()
{
	int r,j,sp;
	for(r=1;r<=7;r++)
	{
		for(sp=1;sp<=41-r;sp++)
		{
			printf(" ");
		}
		for(j=1;j<=r;j++)
		{
			if(r%2!=0)
			{
			printf("%d ",r);
		    }
		}
		printf("\n");
	}
	
}
