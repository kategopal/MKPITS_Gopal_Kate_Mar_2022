#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char g[30]="my name is gopal";
	char *p;
//	printf("enter the sentence :");
//	scanf("%s",g);
	p=strchr(g,'i');
	printf("%s",p);
}
