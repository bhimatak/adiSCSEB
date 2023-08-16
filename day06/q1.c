#include <stdio.h>
int getDigits(int);

int main()
{
	int num=0;
	scanf("%d",&num);
	if(num == getDigits(num))
		printf("Armstrong");
	else
		printf("Not an Armstrong");
	return 0;
}

int getDigits(int num)
{
	int r, sum=0;
	while(num>0)
	{
		r = num%10;
		sum+=r*r*r;
		num /= 10;
	}

	return sum;
}
