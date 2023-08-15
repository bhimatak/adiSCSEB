#include <stdio.h>

int main()
{
	char name[20] = "Bhima";
	char name1[20] = {'B','h','i','m','a','s','h'};
	int i;
	printf("%s\n",name);
	printf("%s\n",name1);
	printf("\nName\n");
	for(i=0;i<20;i++)
		printf("\n%c = %d",name[i],name[i]);
	
	printf("\nName1\n");
	for(i=0;i<20;i++)
		printf("\n%c = %d",name1[i],name1[i]);
	printf("\nEnter your name: ");
	for(i=0;i<5;i++){
		scanf("%c",&name1[i]);
		// scanf(" ");
	}
	/*name1[0]='S';
	name1[1]='R';
	name1[2]='T';
	*/
	// scanf("%s",name1);
	printf("\nName1\n");
	for(i=0;i<20;i++)
		printf("\n%c = %d",name1[i],name1[i]);

	return 0;
}