#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CAP 4096

void revString(char *);

int main()
{
	char s[CAP];
	scanf("%s",s);
	revString(s);
	printf("\n%s\n",s);

	return 0;
}

void revString(char *str1)
{
	int i,j,len=strlen(str1);
	char t;

	for(i=0, j=len-1;i<j;i++,--j)
	{
		t = str1[i];
		str1[i]=str1[j];
		str1[j]=t;
	}
}