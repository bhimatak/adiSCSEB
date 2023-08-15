#include <stdio.h>

int main()
{
	char name[20];
	int i;
	printf("\nName: ");
	for(i=0;i<10;i++)
		name[i]=getchar();
	// fgets(name,1024,stdin);
	printf("\n%s",name);

	return 0;
}