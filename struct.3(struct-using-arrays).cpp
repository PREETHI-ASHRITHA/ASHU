#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
	float per;
};
int main()
{
	struct student std[10];
	int n,i;
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		scanf("%d%s%f",&std[i].rollno,std[i].name,&std[i].per);
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d %s %f\n",std[i].rollno,std[i].name,std[i].per);
	}
}
