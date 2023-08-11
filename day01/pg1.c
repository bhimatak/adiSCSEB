#include <stdio.h>

int main()
{
	int big=0;
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	big = (a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("big = %d",big);

	return 0;
}