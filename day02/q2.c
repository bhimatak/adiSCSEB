#include <stdio.h>

int main()
{
	int num;
	int i,j,k,l;
	int noOfWays=0;

	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
		for(j=i;j<=num;j++)
		{
			for(k=j;k<=num;k++)
			{
				for(l=k;l<=num;l++)
				{
					if((i+j+k+l)==num)
					{
						printf("\n%d+%d+%d+%d=%d",i,j,k,l,num);
						noOfWays++;
					}
				}
			}
		}
	}

	if (noOfWays == 0)
		printf("\n-1");
	else
		printf("\nNo of ways: %d",noOfWays);

	printf("\n\n");
}