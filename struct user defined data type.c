#include<stdio.h>
struct student {
	int id;
	char name[20];
};
int main()
{
	struct student s;
	scanf("%s",s.name);
	scanf("%d",&s.id);
	printf("Name:%s\n",s.name);
	printf("ID:%d",s.id);
}
