/*
Program to demo on queue

*/

#include <stdio.h>

#define MAX 5

int rear = 0;
int front = 0;
int queue[MAX];
void enqueue(int);
void dequeue();
void display();

int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	enqueue(60);
	
	display();
	dequeue();
	display();
	
	dequeue();
	display();
	
	dequeue();
	display();
	
	dequeue();
	display();
	
	dequeue();
	display();
	
	dequeue();
	display();
	printf("\nTest\n");
	enqueue(60);
	display();

	return 0;
}


void display()

{
	int i;
	if (front == rear)
	{
		printf("\nQueue is empty\n");
		return ;	
	}
	printf("\nElements of the Queue are\n");

	for(i=front;i<rear;i++)
		printf("%d ",queue[i]);

	printf("\n\n");

}

void enqueue(int e)
{
	if(rear == MAX)
	{
		printf("\nqueue is FUll");
		return ;
	}

	else
	{
		queue[rear] = e;
		rear++;
	}
}


void dequeue()
{
	int e;
	if((front == MAX)||(front==rear))
	{
		printf("\nQueue is empty\n");
		return ;
	}

	else
	{
		e = queue[front];
		front++;
		printf("\n%d element has been dequeued out",e);
	
	}

	if(front == MAX)
	{
		front =0;
		rear = 0;
	}
}
