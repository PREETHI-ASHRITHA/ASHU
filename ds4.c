#include<stdio.h>
int prime(int n)
{
	int c=0,i;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		c++;
	}
	if(c==2)
	return 1;
	else
	return 0;
}
int main()
{
	int i,a;
	scanf("%d",&i);
	a=prime(i);
	printf("%d",a);
}
