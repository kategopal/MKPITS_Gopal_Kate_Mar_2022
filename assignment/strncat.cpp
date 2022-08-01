#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char s1[30]="gopal";
	char s2[6]="kate";
	
	strncat(s1,s2,3);
	printf("%s",s1);
}
