#include<stdio.h>
#include<conio.h>
main()
{
	int r,c,i,sp;
	for(r=7;r>=1;r-=2)
	{
		for(sp=1;sp<=41-r;sp++)
		{
			printf(" ");
		}
		for(c=1;c<=r;c++)
		{
			if(r%2!=0)
			{
			printf("%d ",r);
		    }
		}
		printf("\n");
	}
}
