#include<stdio.h>
struct student
	{
		int rollno;
		char name[20];
		float per;
	};
int main()
	{
		
	struct student std={1,"aditya",98};
	printf("%d\n%s\n%f",std.rollno,std.name,std.per);
    }

