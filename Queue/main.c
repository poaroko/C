#include <stdio.h>
#include <stdlib.h>
#define MAX 3

void Enqueue();
void Dequeue();
void DisplayQueue();
void EnqueueCircular();
void DequeueCircular();
void DisplayCircular();
void Queue();
void Circular();
char queue_array[MAX];
int rear = - 1;
int front = - 1;

int main()
{
	//Queue();
	Circular();
}

void Queue()
{
	int choice;
	while (1)
	{
		printf("1.Insert element to queue \n");
		printf("2.Delete element from queue \n");
		printf("3.Display all elements of queue \n");
		printf("4.Quit \n");
		printf("Enter your choice : ");
		scanf(" %d", &choice);
		switch(choice)
		{
			case 1:
			Enqueue();
			break;
			case 2:
			Dequeue();
			break;
			case 3:
			DisplayQueue();
			break;
			case 4:
			exit(1);
			default:
		printf("Wrong choice \n");
		}
	}
}
void Circular()
{
	int choice;
	while (1)
	{
		printf("1.Insert element to queue \n");
		printf("2.Delete element from queue \n");
		printf("3.Display all elements of queue \n");
		printf("4.Quit \n");
		printf("Enter your choice : ");
		scanf(" %d", &choice);
		switch(choice)
		{
			case 1:
			EnqueueCircular();
			break;
			case 2:
			DequeueCircular();
			break;
			case 3:
			DisplayCircular();
			break;
			case 4:
			exit(1);
			default:
		printf("Wrong choice \n");
		}
	}
}

void Enqueue()
{
	char item;
	if(rear == MAX - 1)
	{
		printf("==========================\n");
		printf("Queue Overflow \n");
		printf("==========================\n");
	}
	else
	{
		if(front== - 1)
		{
			front = 0;
		}
		printf("Inset the element in queue : ");
		scanf(" %c", &item);
		rear = rear + 1;
		queue_array[rear] = item;
		DisplayQueue();
	}
}
void Dequeue()
{
	if(front == - 1)
	{
		printf("==========================\n");
		printf("Queue Underflow \n");
		printf("==========================\n");
		return;
	}
	else
	{
		printf("Element deleted from queue is : %c\n", queue_array[front]);
		queue_array[front] = '\0';
		if(front == rear)
		{
			front = rear = -1;
		}
		else
		{
			front = front + 1;	
		}
		
	}
	DisplayQueue();
}
void DisplayQueue()
{
	int i;
	if(front == - 1)
	{
		printf("==========================\n");
		printf("Queue is empty \n");
		printf("==========================\n");
	}
	else
	{
		printf("==========================\n");
		printf("Queue is : ");
		for(i = front; i <= rear; i++)
		{
			printf("%c ", queue_array[i]);
		}
		printf("\n==========================\n");
		printf("\n");
	}
}

void EnqueueCircular()
{
	char item;
	if(rear == MAX - 1 && front == 0)
	{
		printf("==========================\n");
		printf("Queue Overflow \n");	
		printf("==========================\n");	
	}
	else if(rear == MAX - 1 && front != 0)
	{
		printf("Inset the element in queue : ");
		scanf(" %c", &item);
		rear = 0;
		queue_array[rear] = item;
		DisplayCircular();
	}
	else
	{
		printf("Inset the element in queue : ");
		scanf(" %c", &item);
		if(front == -1 && rear == -1)
		{
			front = rear = 0;
		}
		else
		{
			rear = rear + 1;
		}
		queue_array[rear] = item;
		DisplayCircular();
	}
}
void DequeueCircular()
{
	if(front == -1 && rear == -1)
	{
		printf("==========================\n");
		printf("Queue Underflow \n");
		printf("==========================\n");
		return;
	}
	else
	{
		printf("Element deleted from queue is : %c\n", queue_array[front]);
		queue_array[front] = '\0';
		if(front != rear)
		{
			if(front == MAX-1)
			{
				front = 0;
			}
			else
			{
				front = front + 1;
			}
			
		}	
		else
		{
			front = rear = -1;
		}
		DisplayCircular();
	}
}
void DisplayCircular()
{
	int i;
	if(front == - 1)
	{
		printf("==========================\n");
		printf("Queue is empty \n");
		printf("==========================\n");
	}
	else
	{
		printf("==========================\n");
		printf("Queue is : ");
		if(front <= rear)
		{
			for(i = front; i <= rear; i++)
			{
				printf("%c ", queue_array[i]);
			}
		}
		else
		{
			for(i = front; i < MAX; i++)
			{
				printf("%c ", queue_array[i]);
			}
			for(i = 0; i < front; i++)
			{
				if(queue_array[i] != '\0')
				{
					printf("%c ", queue_array[i]);
				}
			}
		}
		
		printf("\n==========================\n");
		printf("\n");
	}
}
