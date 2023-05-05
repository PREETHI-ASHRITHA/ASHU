#include<stdio.h>
char div(int a,int b)
{
	if(a%b==0) 
	return 1;
	else
	return 0;
}
int main()
{
	int a,b,n;
	scanf("%d%d",&a,&b);
	n=div(a,b);
	printf("%d",n);
}
