#include<stdio.h>
void n(int a,int b)
{
	int i;
	for(i=a;i<=b;i++)
	{
		printf("%d ",i);
	}
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	n(a,b);
}
