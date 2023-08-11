#include <stdio.h>

int isPrime(int);

int main()
{
	int num=0;
	int i,j,noOfWays = 0;
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
		for(j=i;j<=num;j++)
		{
			if((isPrime(i)==0)&&(isPrime(j)==0))
			{
				if ((i+j) == num)
				{
					printf("%d + %d = %d\n",i,j,num);
					noOfWays++;
				}
			}
		}
	}
	if(noOfWays == 0)
		printf("-1");
	else
		printf("No of ways = %d",noOfWays);

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