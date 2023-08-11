/*
recurssion


*/

#include <stdio.h>

int factN(int);


int main()
{
	int num=0;
	scanf("%d",&num);
	printf("Factorial of %d = %d",num,factN(num));

	printf("\n\n");
	return 0;
}

int factN(int num)
{
	int ret = 0;

	if(num == 0)
		return 1;

	ret = num*factN(num-1);

	return ret;

}