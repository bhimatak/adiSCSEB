#include <stdio.h>
#define CAP 1024

int main()
{
	int n,sum=0,res=0,i,j, flag=0;
	int a[CAP];

	scanf("%d",&n);

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&res);


	for(i=0,j=0;i<n;i++)
	{
		for(j=i, sum=0;j<n;j++)
		{
			sum += a[j];
			if (sum == res)
			{
				flag = 1;
				break;

			}
		}
		if(flag == 1)
			break;
	}

	if(flag == 1)
		printf("Sum found between %d and %d",i,j);
	else
	printf("No subarray found");
}
