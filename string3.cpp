#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],str1[100];
	scanf("%[^\n]s",&str);
	scanf(" %[^\n]s",str1);
	int i,len=0;
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	
	for(i=0;str1[i]!='\0';i++)
	{
		str[len]=str1[i];
		len++;
	}
	str[len]='\0';
	printf("%s",str);
}
