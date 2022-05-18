#include<stdio.h>
#include<conio.h>
main()
{
	int r,p,sp,n;
	for(r='D';r>='A';r--)
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
