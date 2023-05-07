//struct to pointer
#include<stdio.h>
// structure is a user defined data type.
struct student 
{
	char roll[20];
	char name[20];
	int age;
	float cgpa;
};

void read_student(struct *s){
	scanf("%s", s->roll);
	scanf("%s", s->name);
	scanf("%d", &s->age);
	scanf("%f", &s->cgpa);
}
void_print_student(struct student *s)
{
	printf("%s %s %d %.2f\n",s->roll, s->name, s->age, s->cgpa)
}

int main()
{
	//int a=10;
	// int *ptr;
	// ptr = &a;
	struct student s1,s2;// struct variables
	struct student *s1_ptr, *s2_ptr; //struct pointers
	s1_ptr = &s1;
	s2_ptr = &s2;
	read_student(s1_ptr);
	read_student(s2_ptr);
	print_student(s1_ptr);
	print_student(s2_ptr);
}
