#include<stdio.h>
int stack[100], top = -1, size;

int main()
{
	printf("Enter size of the stack: ");
	scanf("%d", &size);
	// menu driven programs
	int choice;
	while (1)
	{
		printf("Enter 1. Push 2. Pop 3. Peek 4. Display any other to exit:");
	    scanf("%d", &choice);
		if (choice == 1)
		{
			//push() operation
		}
		else if (choice == 2)
		{
			//pop() operation
		}
		else if (choice == 3)
		{
			//peek() operation
		}
		else if (choice == 4)
		{
			//display()
		}
		else
		{
			printf("Thank you");
			break;
		}
    }
}
