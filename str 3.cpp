#include<stdio.h>
#include<conio.h>
struct stud
{
	int id;
	char name[20];
};
int main()
{
	struct stud s1={45,"raj"};
		
	printf("\nstud id=%d ",s1.id);
	printf("\nstud name=%s ",s1.name);
}
