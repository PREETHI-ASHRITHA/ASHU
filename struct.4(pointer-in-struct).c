#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
	float per;
};
int main()
{
	struct student std, *ptr;
	ptr=&std;
	scanf("%d %s %f",&ptr->rollno,&ptr->name,&ptr->per);
	printf("%d %s %f",ptr->rollno,ptr->name,ptr->per);
}
