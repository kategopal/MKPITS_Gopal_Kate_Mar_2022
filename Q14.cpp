#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	float b;
	printf("enter total distance travelled in km/ltr");
	scanf("%d",&a);
	printf("enter total fuel used in ltr");
	scanf("%f",&b);
	printf("total average in (km/ltr)=%d%f",a/b);
	printf("\n");
}
