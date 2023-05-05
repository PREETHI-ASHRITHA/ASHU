#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50};
	int *ptr = a+4;
	for(;ptr>=a;ptr--)
	{
		printf("%d ",*ptr);
	}
}
