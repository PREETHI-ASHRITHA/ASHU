#include<stdio.h>
int main()
{
	int n,sum=0,max=0,i;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    scanf("%d",&b[i]);	
	}
	for(i=0;i<n;i++)
	{
		sum=a[i]+b[i];
		if(sum>max) max=sum;
		printf("%d ",sum);
	}
	printf("\n%d",max);
}
