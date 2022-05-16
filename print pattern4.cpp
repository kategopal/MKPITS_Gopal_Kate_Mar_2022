#include<stdio.h>
#include<conio.h>
main()
{
	int r,p,sp,n;
	for(r='A';r<='D';r++)
	{
	for(sp=1;sp<='D'-r;sp++)
	{
	printf(" ");
		n--;
	}
	for(p='A';p<=r;p++)
	{
	printf("%c ",r);
	}
	printf("\n");
    }
	
}
