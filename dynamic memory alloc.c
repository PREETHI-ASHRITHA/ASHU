#include<stdio.h>
#include<stdlib.h>//malloc
int main()
{
	int n = 5,i;
	//array of 5 integers
	int *arr = (int *)malloc(n*sizeof(int));
	for (i = 0;i < 5; i++)
	{
		scanf("%d",&arr[i]);
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ",*(arr + i));//1000+4
	}
}
