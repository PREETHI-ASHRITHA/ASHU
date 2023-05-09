#include<stdio.h>
struct DOB
{
	int day;
	int month;
	int year;
};
struct student
{
	int rollno;
	char name[20];
	struct DOB date;
};
int main()
{
	struct student std;
	scanf("%d",&std.rollno);
	scanf("%s",std.name);
	scanf("%d%d%d",&std.date.day,&std.date.month,&std.date.year);
	printf("%d\n%s\n%d-%d-%d",std.rollno,std.name,std.date.day,std.date.month,std.date.year);
}
