#include<stdio.h>
int fact(int n)
{
	if (n==1) return 1;
	return n*fact(n-1);
}
int main()
{
	int n;
	scanf("%d",&n);
	int res=fact(n);
	printf("%d",res);
}