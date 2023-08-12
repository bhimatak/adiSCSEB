#include <stdio.h>
#define CAP 1024
int revNum(int);

int main(int argc, char const *argv[])
{
	/* code */
	int i,flags=0,n;
	int a[CAP];

	scanf("%d",&n);

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for (i = 0; i < n; ++i)
	{
		/* code */
		if(a[i] == revNum(a[i]))
			flags++;
	}

	if(flags == n)
		printf("Palin array\n");
	else
		printf("Not a Palin array\n");

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
