/*
Program to demo on stack

*/

#include <stdio.h>

#define MAX 5

int top = -1;
int bottom = -1;
int stack[MAX];
void push(int);
void pop();
void display();

int main()
{
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	display();
	push(60);
	display();
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	display();

	return 0;
}


void display()

{
	int i;
	if (top == bottom)
	{
		printf("\nStack is empty\n");
		return ;	
	}
	printf("\nElements of the stack are\n");

	for(i=top;i>=0;i--)
		printf("%d\n",stack[i]);

	printf("\n\n");

}

void push(int e)
{
	if(top == MAX-1)
	{
		printf("\nStack is FUll");
		return ;
	}

	else
	{
		++top;
		stack[top] = e;
	}
}

void pop()
{
	int e;
	if(top == bottom)
	{
		printf("\nStack is empty\n");
		return ;
	}

	else
	{
		e = stack[top];
		top--;
		printf("\n%d element has been popped out",e);
	}
}