/*
	Program to store and sort the elements
	of dynamic array
*/
#include <stdio.h>
#include <stdlib.h>

void StoreElems(int *, int);
void dispElems(int *, int);
void sortElems(int *, int);


int main()
{
	int *ptr=NULL;
	int n;
	printf("\nHow many Elements you want to have: ");
	scanf("%d",&n);
	ptr = (int *)malloc(sizeof(int)*n);
	
	StoreElems(ptr,n);
	dispElems(ptr,n);
	printf("\nAfter Sorting\n");
	sortElems(ptr,n);
	dispElems(ptr,n);
	printf("\n\n");
	free(ptr);
	return 0;	
}


void dispElems(int *ptr, int n)
{
	int i;
	printf("\nElements are\n");
	for(i=0;i<n;i++)
		printf("%d ",*ptr++);
}

void StoreElems(int *ptr, int n)
{
	int i;
	printf("\nEnter the %d elements",n);
	for (int i = 0; i < n; ++i,ptr++)
	{
		/* code */
		scanf("%d",ptr);
	}
}

void sortElems(int *ptr, int n)
{
	int temp, i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(ptr[i]<ptr[j])
			{
				temp = *(ptr+i);
				//temp = ptr[i];
				*(ptr+i) = *(ptr+j);
				// ptr[i] = ptr[j];
				*(ptr+j) = temp;
				// ptr[j] = temp;
			}
		}

	}

}