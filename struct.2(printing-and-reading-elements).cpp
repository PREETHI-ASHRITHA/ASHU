#include<stdio.h>
struct student 
{
	int rollno;
	char name[20];
	float per;
};
int main()
{
	struct student std,std1;
	scanf("%d%s%f",&std.rollno,std.name,&std.per);
	scanf("%d%s%f",&std1.rollno,std1.name,&std1.per);
	printf("%d\n%s\n%f",std.rollno,std.name,std.per);
	printf("%d\n%s\n%f",std1.rollno,std1.name,std1.per);
}
