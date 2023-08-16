#include <stdio.h>

int main()
{
	char name[20];
	int i;
	printf("\nName: ");
	for(i=0;;i++){
		name[i]=getc(stdin);
		if(name[i]=='Z')
			break;
	}
	name[++i]='\0';
	// fgets(name,1024,stdin);
	printf("\n%s",name);

	return 0;
}