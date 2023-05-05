#include<stdio.h>
int main()
{
	int perimeter,area,height,width;
	printf("Enter Height :");
	scanf("%d",&height);
	printf("Enter Width :");
	scanf("%d",&width);
	perimeter=2*(height+width);
	area=height*width;
	printf("Perimeter :%d\n",perimeter);
	printf("Area :%d",area);
	return 0;
}
