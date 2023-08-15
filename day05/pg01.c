#include <stdio.h>

int main()
{
	int arr[]={11,21,31,41,51};

	int sizeArr = sizeof(arr)/sizeof(arr[0]);

	int *ptr = NULL;
	int i;
	ptr = arr;
	for(i=0;i<sizeArr;i++)
	{
		printf("%d ",*++ptr);

	}


	


	return 0;
}