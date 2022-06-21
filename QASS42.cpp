#include<stdio.h>
#include<conio.h>
main()
{
	double i,d,j=1,add=0;
	for(i=1;i<=7;i+=2)
	{
		{
		d=i/j;
		j=2*j;
		add+=d;
	    }
	    printf("value of s :%f\n",add);
	}
}
