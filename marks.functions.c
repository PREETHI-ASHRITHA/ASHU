#include<stdio.h>
char grade(int marks)
{
	if(marks>=90)
    return 'A';
	else if(marks>=80 && marks<90) return 'B';
	else if(marks>=70 && marks<80) return 'C';
	else if(marks>=60 && marks<70) return 'D';
	else return 'E';
}
int main()
{
	int marks;
	scanf("%d",&marks);
	char x=grade(marks);
	printf("%c",x);
	return 0;
}

