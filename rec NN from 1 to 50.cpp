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
	if(i==50)
	return ;
	printf("%d ",i);
	i++;
	fun();
}
