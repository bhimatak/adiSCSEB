#include <stdio.h>

void swapNos(int *,int *);

int main()
{
	int a=10, b=20;
	printf("\na=%d\tb=%d\n",a,b);
	swapNos(&a,&b);
	printf("\na=%d\tb=%d\n",a,b);
	return 0;
}

void swapNos(int *x, int *y)
{
	/*int temp;

	temp = *x;
	*x = *y;
	*y = temp;
	*/
	*x = *x+*y;
	*y = *x - *y;
	*x = *x - *y;
}