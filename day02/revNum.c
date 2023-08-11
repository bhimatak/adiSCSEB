#include <stdio.h>

int revNum(int);

int main()
{
	printf("%d", revNum(-123));
	printf("\n\n");
	return 0;
}

int revNum(int num)
{
	int flagN = 0;
	int res=0, r=0;

	if(num<0){
		num *= -1;
		flagN = 1;
	}

	while(num > 0)
	{
		r = num%10;
		res = (res*10)+r;
		num /= 10;
	}

	if(flagN == 1)
		res *= -1;

	return res;

}