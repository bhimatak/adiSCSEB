#include <stdio.h>
#include <string.h>

typedef struct empDetails
{
	int id;
	int sal;
	char name[20];
}EMP;

void printDetails(EMP);
void setDetails(EMP *);
void setDetails1(EMP *, int);
void updateDetails(EMP *,char *);

int main()
{
	EMP e1[3];
	int i;
	// char nName[20];
	// for(i=0;i<3;i++)
	// 	setDetails(&e1[i]);
	setDetails1(e1,3);
	for(i=0;i<3;i++)
		printDetails(e1[i]);
	// printf("\nEnter New Name: ");
	// scanf("%s",nName);
	// updateDetails(&e1,nName);
	// printf("\nAfter Update new details are\n");
	// printDetails(e1);
	printf("\n\n");
	return 0;
}




void printDetails(EMP e)
{
	printf("\n=====Employee Details are====\n");
	printf("\nName: %s",e.name);
	printf("\nID: %d",e.id);
	printf("\nSalary: %d",e.sal);

}

void setDetails(EMP *e)
{
	scanf("%d%d%s",&e->id,&e->sal,e->name);
}

void setDetails1(EMP *e, int n)
{
	int i;
	for(i=0;i<n;i++,e++){
		printf("\nDetails of %d Employee",(i+1));
		scanf("%d%d%s",&e->id,&e->sal,e->name);
	}
}

void updateDetails(EMP *e, char *nName)
{
	strcpy(e->name,nName);
	printf("\nUpdated the record\n");
}