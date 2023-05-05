#include<stdio.h>
void insertion_sort(char *arr,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		int key=arr[i];
    	for(j=i-1;j<n;j--)
	    {
	    	if(arr[j]<key || j==-1)
            {
                arr[j+1]=key;
                break;
            }
			else
			{
				arr[j+1]=arr[j];
			}
	    }
    }
}
int main()
{
	int n,i,j,key;
	scanf("%d",&n);
	char arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%s",&arr);
	}
	insertion_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%s ",arr[i]);
	}
}
