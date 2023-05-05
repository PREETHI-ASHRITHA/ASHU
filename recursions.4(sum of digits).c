#include<stdio.h>
int func(int n)
{
   if(n==0) return 0;
   return n%10+func(n/10);	
}
int main()
{
	int n;
	scanf("%d",&n);
	int res=func(n);
	printf("%d",res);
}
