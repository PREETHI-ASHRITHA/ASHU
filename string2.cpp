#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	scanf("%[^\n]s",&str);
	int i,len=0;
	for(i=0;str[i]!='\0';i++)
	{
		len=len+1;
	}
	printf("%d",len);
}
