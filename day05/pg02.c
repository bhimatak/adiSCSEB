#include <stdio.h>
#include <stdlib.h>

int main()
{

	int *ptr=NULL;
	int *head=NULL;
	int i;

	ptr = (int *)malloc(sizeof(int)*5);
	head = ptr;

	for(i=0;i<5;i++){
		scanf("%d",ptr);
		printf("\nAddress of %d element = %u",i,ptr);
		ptr++;
	}

	ptr = head;

	for(i=0;i<5;i++,ptr++){
		printf("\nAddress of ptr=%u and its value=%d\n",ptr,*ptr);
	}
	// ptr = head;

	free(head);

	return 0;
}