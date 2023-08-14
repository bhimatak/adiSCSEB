#include <stdio.h>
#define CAP 5
int getElem(int [], int);
int dispArr(int [], int);
int revArr(int [],int);

int main()
{
	int a[CAP];
	
	getElem(a,CAP);

	dispArr(a,CAP);

	revArr(a,CAP);

	printf("\nAfter Reversing\n");
	dispArr(a,CAP);

	return 0;
}


int getElem(int arr[], int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

}


int dispArr(int arr[], int n)
{
	int i;
	printf("\nELements of array are\n");
	for(i=0;i<n;i++)
		printf(" %d",arr[i]);

	printf("\n\n");

}

int revArr(int arr[], int n)
{
	int i, temp, mid=n/2;

	for(i=0;i<mid;i++)
	{
		temp = arr[(n-1)-i];
		arr[(n-1) -i] = arr[i];
		arr[i] = temp;
		
	}
}