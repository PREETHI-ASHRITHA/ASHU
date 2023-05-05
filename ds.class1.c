#include<stdio.h>
char diff(int a,int b,int c,int d)
{
	int diff;
	diff=(a+b)-(c*d);
	return diff; 
}
int main()
{
	int a,b,c,d,x;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	x=diff(a,b,c,d);
	printf("%d",x);
}
