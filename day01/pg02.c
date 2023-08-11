#include <stdio.h>

int main()
{
	int a=11;
	/*
	do
	{
		printf("%d ",a);
		a++;
	}while(a<=10);
	
	*/

	for (;;)
	{
		printf("%d",a);
		if(a>=11)
			break;
	}

	return 0;
}