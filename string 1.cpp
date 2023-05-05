#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],str1[100];
	scanf("%[^\n]s",&str);
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		str1[i]=str[i];
	}
	printf("%s",str1);
}
