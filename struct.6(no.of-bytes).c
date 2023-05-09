#include<stdio.h>
union student
{
	int rollno;
	char name[20];
};
int main()
{
	union student std;
	scanf("%d%s",&std.rollno,std.name);
	printf("%s",std.name);
}
