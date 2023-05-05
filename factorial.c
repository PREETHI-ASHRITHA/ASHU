#include<stdio.h>
int main()
{
	int n,res;
	printf("Enter a number to find the factorial\n");
	scanf("%d",&n);
	res=fact(n);
	printf("Factorial is%d\n",res);
}
int fact(int n)
{
if(n==0)
{
	return 1;
}
else
{
	return n*fact(n-1);
}
}
