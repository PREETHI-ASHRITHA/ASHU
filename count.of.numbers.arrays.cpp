#include<stdio.h>
int main()
{
	int n,i,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==10)
		c1++;
		if(a[i]==2)
		c2++;
		if(a[i]==-1)
		c3++;
		if(a[i]==111)
		c4++;
	    if(a[i]==147)
		c5++;
	}
	printf("10 %d\n",c1);
	printf("2 %d\n",c2);
	printf("-1 %d\n",c3);
	printf("111 %d\n",c4);
	printf("147 %d\n",c5);
	
}
