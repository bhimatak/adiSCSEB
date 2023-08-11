int isPrime(int);
int getDigits(int);


int getDigits(int num)
{
	int countDigits = 0;
	int countPFlag = 0;
	while(num>0)
	{
		r = num%10;
		countDigits++;
		if(isPrime(r)==0)
		{
			countPFlag++;
		}
		num /= 10;
	}

	if (countPFlag == countDigits)
		return 1;
	else
		return 0;
}

int isPrime(int num)
{
	int i, flag =0;

	if(num <=0)
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
