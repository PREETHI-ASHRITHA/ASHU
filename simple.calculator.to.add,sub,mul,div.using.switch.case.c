#include<stdio.h>
int main()
{
	char operator;
	printf("Enter the OPERATOR\n");
	scanf("%c",&operator);
	int a,b,c;
	switch(operator)
	{
		case '+': printf("Enter the values of and b");
		scanf("%d%d",&a,&b);
		c=a+b;
		printf("%d + %d = %d",a,b,c);
		break;
		case '-': printf("Enter the values of and b");
		scanf("%d%d",&a,&b);
		c=a-b;
		printf("%d - %d = %d",a,b,c);
		break;
		case '*': printf("Enter the values of and b");
		scanf("%d%d",&a,&b);
		c=a*b;
		printf("%d * %d = %d",a,b,c);
		break;
		case '/': printf("Enter the values of and b");
		scanf("%d%d",&a,&b);
		c=a/b;
		printf("%d / %d = %d",a,b,c);
		break;
		default : printf(" you didnt choose anything");
	}
}
