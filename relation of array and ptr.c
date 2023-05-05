//relation between arraya and pointers
//arr name itself acts as a pointer
//it points to first element of the array
#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50};
	printf("%d %d",a,*(&a));
}
