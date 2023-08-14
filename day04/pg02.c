#include <stdio.h>
#define CAP 100

void PrintLeader(int [], int);


int main()
{
	int n,i;
	int arr[CAP];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	PrintLeader(arr,n);
	return 0;
}

void PrintLeader(int arr[], int n)
{
	int max, i;

	max = arr[n-1];
	printf("%d ",max);

	for(i=n-2;i>=0;i--)
	{
		if(max <arr[i])
		{
			printf("%d ", arr[i]);
			max = arr[i];
		}
	}
}