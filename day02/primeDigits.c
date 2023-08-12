#include <stdio.h>

int isPrime(int);
int getDigits(int);
int checkDigit(int);



int main()
{

	int i, n;
	int countN = 0;
	scanf("%d",&n);

	for(i=0;;i++)
	{
		/*if (countN == n)
			break;
			*/

		if (getDigits(i)==1)
		{
			countN++;
			if(countN == n)
				break;
		}
	}

	printf("nth Number: %d",i);

}

int getDigits(int num)
{
	int countDigits = 0;
	int countPFlag = 0;
	int r;
	while(num>0)
	{
		r = num%10;
		countDigits++;
		if(checkDigit(r)==0)
		{
			countPFlag++;
		}
		num /= 10;
	}

	if ((countPFlag == countDigits)&&(countPFlag!=0))
		return 1;
	else
		return 0;
}

int checkDigit(int num)
{
	int i, flag =0;

	if((num == 2)||(num == 3)||(num == 5)||(num ==7))
		flag = 0;
	else
		flag = 1;

	return flag;	
}

int isPrime(int num)
{
	int i, flag =0;

	if(num <=1)
		return 1;
	for(i=2;i<=num/2;i++)
	{
		if(num%i == 0)
		{
			flag = 1;
			break;
		}
	}

	return flag;
}
