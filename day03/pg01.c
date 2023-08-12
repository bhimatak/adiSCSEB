#include <stdio.h>
#define CAP 10

int main()
{
	int arr[CAP];
	int iv,i,j,temp;

	printf("\nEnter the elements of Array\n");
	for(iv=0;iv<CAP;iv++)
		scanf("%d",&arr[iv]);

	printf("\nArray elements are\n");
	for(iv=0;iv<CAP;iv++)
		printf("%d ",arr[iv]);

	for(i=0;i<CAP;i++)
	{
		for(j=0;j<CAP;j++)
		{
			if(arr[i]<arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	printf("\nSorted Array elements are\n");
	for(iv=0;iv<CAP;iv++)
		printf(" %d",arr[iv]);


}