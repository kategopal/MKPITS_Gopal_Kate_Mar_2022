#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	char ch1[78];
	printf("enter any name in inupper case :");
	scanf("%s",ch1);
	for(i=0;ch1[i]!='\0';i++)
	{
		printf("%c",ch1[i]-32);
	}
}
