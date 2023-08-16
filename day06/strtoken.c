#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void revString(char *);

int main()
{	
	char line[1024]="all.the.best.";
	char *token = (char *)malloc(1024);
	// scanf("%[^\n]s",line);
	printf("\nLine: %s",line);
	printf("\n\n");
	token = strtok(line,".");
	
	while(token != NULL)
	{
		revString(token);
		printf("%s.", token);
		token = strtok(NULL,".");
			
	}
	printf("\b ");
	printf("\n\n");
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