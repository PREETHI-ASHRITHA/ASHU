#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],str1[100];
	scanf("%[^\n]s",&str);
	scanf(" %[^\n]s",&str1);
	int res=strcmp(str,str1);
	if(res==0)
	{
		printf("both are same");
	}
	else if(res<0)
	{
		printf("str1 bigger");
	}
	else
	{
		printf("str bigger");
	}
}
