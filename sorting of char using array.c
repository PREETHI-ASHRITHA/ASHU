#include<stdio.h>
void bubble_sort(char *arr,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
    	for( j=0;j<n-1;j++)
	    {
	    	if(arr[j]>arr[j+1])
		    {
			   int t=arr[j];
			   arr[j]=arr[j+1];
			   arr[j+1]=t;
		    }
	    }
    }
}
int main()
{
	int n;
	scanf("%d",&n);
	char arr[n];
	scanf("%s",&arr);
	bubble_sort(arr,n);
	{
		printf("%s",arr);
	}
}
