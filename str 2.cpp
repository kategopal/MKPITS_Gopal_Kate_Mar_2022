#include<stdio.h>
#include<conio.h>
struct stud
{
	int id;
	char name[20];
};
int main()
{
	struct stud s1;
	printf("enter stud id :");
	scanf("%d",&s1.id);
	
	printf("enter stud name :");
	scanf("%s",s1.name);
	
	printf("stud id=%d",s1.id);
	printf("stud name=%s",s1.name);
}
