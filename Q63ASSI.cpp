#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	char str1[12],str2[12];
	printf("enter string");
	scanf("%s",str1);
	for(i=0;str1!='\0';i++)
	{
		str1[i]=str2[i];
	}
	str2[i]='\0';
	{
		printf("str1 are copied successfully in str2 %s",str2);
	}
}
