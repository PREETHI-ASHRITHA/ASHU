#include<stdio.h>
void_Quick_sort(int *arr,int lb,int ub)
{
	int pivot,start,end;
	pivot=arr[lb];
	start=lb;
	end=ub;
	while(start<end)
	{
		while(arr[start]<=pivot)
		{
			start++;
		}
		while(arr[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			swap(arr[start],arr[end]);
		}
	}
	swap(arr[lb],arr[end]);
	return end;
}
Quick_sort(arr,lb,ub)
{
	if(lb<ub)
	{
		
	}
}

