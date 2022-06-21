#include<stdio.h>
#include<conio.h>

void fun();
int main()
{
	fun();
}
void fun()
{
static int i=10;
if(i==0)
return;
printf("\n%d",i);
i--;
fun();
}
