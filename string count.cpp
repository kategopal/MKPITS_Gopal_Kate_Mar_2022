#include<stdio.h>
#include<conio.h>
main()
{
	int i,count=0;
	char ch[20];
	printf("enter string value");
	scanf("%s",ch);
	for(i=0;ch[i]!='\0';i++)
	{
		count=count+1;
	}
	printf("%d",count);
}
