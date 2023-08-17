#include <stdio.h>
#include <stdlib.h>

struct node
{
	int value;
	struct node *ptr;
};

typedef struct node Node;

int main()
{
	Node n1,n2,n3;
	Node *head = NULL;
	printf("\nAddress of n1=%u",&n1);
	printf("\nAddress of n2=%u",&n2);
	printf("\nAddress of n3=%u",&n3);

	// creating a node
	n1.value = 10;
	n1.ptr = NULL;

	n2.value = 20;
	n2.ptr = NULL;

	n3.value = 30;
	n3.ptr = NULL;

	//make a relationship
	n1.ptr = &n2;
	n2.ptr = &n3;
	head = &n1;

	printf("\n%d\n",n1.value);
	printf("\nhead = %d",head->value);

	head = head->ptr;

	printf("\n%d\n",n2.value);
	printf("\nhead = %d",head->value);

	head = head->ptr;

	printf("\n%d\n",n3.value);
	printf("\nhead = %d",head->value);

	head = &n1;
	printf("\nIn a while loop\n");
	while(head)
	{
		printf("\nhead = %d",head->value);
		head = head->ptr;

	}

	printf("\n\n");
	return 0;
}