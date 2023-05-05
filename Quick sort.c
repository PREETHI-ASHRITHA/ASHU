#include<stdio.h>
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
int lomuto_partition(int *arr,int l,int r)
{
	int pivot,i,j;
	pivot=arr[r];
	i=l-1;
	j=l;
	for(;j<r;j++)
	{
		if(arr[j]<pivot)
		{
			i+=1;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[r]);
	return i+1;
}
void quick_sort(int *arr,int l,int r)
{
	if(l<r)
	{
		int p=lomuto_partition(arr,l,r);
		quick_sort(arr,l,p-1);
		quick_sort(arr,p+1,r);
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for( i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	quick_sort`(arr,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
