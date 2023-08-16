#include <stdio.h>
#include <string.h>
#define CAP 100
int main()
{
	char str1[CAP], temp;
	int i,j, lenStr=0;
	fgets(str1,CAP,stdin);
	str1[strlen(str1)-1]='\0';
	lenStr = strlen(str1);
	printf("\nBefore Reversing: %s",str1);

	/*
	logic to reverse the given string
	*/
	printf("\n\n");
	for(i=0,j=lenStr-1;i<j;i++,--j)
	{
		temp = str1[i];
		str1[i] = str1[j];
		str1[j] = temp; 
		
	}

	printf("\nAfter Reversing: %s",str1);
}