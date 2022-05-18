#include<stdio.h>
#include<conio.h>
main()
{
	int r,j,sp,k=1,p=65;
	for(r=7;r>=1;r-=2)
	{
		for(sp=1;sp<=41-r;sp++)
		{
			printf(" ");
		}
		if(r==1||r==3||r==5||r==7)
		{
		for(j=1;j<=r;j++)
		{
			printf("%c ",p);
			p++;
		}
	}
		p=65;
		printf(" \n");
	}
}
