#include <stdio.h>
#define MAXSIZE 3    
char stack[MAXSIZE];     
int top = -1;            
void Pop();
void Push();
void DisplayStack();


void Pop() {
   char item;
	
   if(top == -1) 
   {
   		printf("==========================\n");
      	printf("Stack is underflow\n");
      	printf("==========================\n");
   } 
   else 
   {
   		printf("Element Pop from stack is : %c\n", stack[top]);
	 	stack[top] = '\0';
      	top = top - 1;   
   }
   DisplayStack();
}

void Push() {
	
   if(top == MAXSIZE-1) 
   {
   		printf("==========================\n");
   		printf("Stack is overflow\n");
   		printf("==========================\n");
   } 
   else 
   {
      	char item;
		printf("Inset the element in stack : ");
		scanf(" %c", &item);
      	top = top + 1;   
      	stack[top] = item;
   }
   DisplayStack();
}

void DisplayStack()
{
	int i;
	if(top == - 1)
	{
		printf("==========================\n");
		printf("Stack is empty \n");
		printf("==========================\n");
	}
	else
	{
		printf("==========================\n");
		printf("Stack is : ");
		for(i = 0; i <= top; i++)
		{
			if(top != MAXSIZE)
			{
				printf("%c ", stack[i]);
			}
		}
		printf("\n==========================\n");
		printf("\n");
	}
}

int main() {
	int choice = 0;
	while (1)
	{
		printf("1.Push element to stack \n");
		printf("2.Pop element from stack \n");
		printf("3.Display all elements of stack \n");
		printf("4.Quit \n");
		printf("Enter your choice : ");
		scanf(" %d", &choice);
		switch(choice)
		{
			case 1:
			Push();
			break;
			case 2:
			Pop();
			break;
			case 3:
			DisplayStack();
			break;
			case 4:
			exit(1);
			default:
		printf("Wrong choice \n");
		}
	}
   	return 0;
}
