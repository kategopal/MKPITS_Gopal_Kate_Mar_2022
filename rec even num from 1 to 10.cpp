#include<stdio.h>
#include<conio.h>
void fun();
int main()
{
	fun();
}
void fun()
{
	static int i=1;
	if(i==11)
	return;
	if(i%2==0)
	{
		printf("\n%d",i);
	}
	i++;
	fun();
}
