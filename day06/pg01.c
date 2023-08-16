#include <stdio.h>
#include <string.h>

int main()
{
	char s1[20], s2[20];
	int ret=0,i;
	fgets(s1,19,stdin);
	s1[strlen(s1)-1] = '\0';

	// fgets(s2,19,stdin);

	// ret = strcmp(s1,s2);

	// printf("\nret = %d\n",ret);

	strcpy(s2,s1);
	puts(s2);
	printf("\nLen = %d",strlen(s1));
	printf("\nSize of s2=%d",sizeof(s1));
	for(i=0;i<20;i++)
		printf("\n%c=%d",s1[i],s1[i]);
	printf("\n\n");
	return 0;

}
