/*

Structure: 

struct tagName{
	members of structure are dec. here.

};

struct rectShape{
	int width;
	int height;	
};

struct rectShape r;

dot operator (normal variable)
or arrow op(if dec like pointer)


r.width = 10;
r.height = 20;

scanf("%d%d",&r.width,&r.height);
printf("%d %d",r.width, r.height);
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct  empDetails
{
	int id;
	int phone;
	float sal;
	char name[1024];
	char gender;
};

typedef struct empDetails EMP;

void disEmpDetails(EMP);
void getEmpDetails(EMP *);

int main()
{
	EMP e;

	printf("\nSize of the empDetails: %d",sizeof(e));
	getEmpDetails(&e);
	disEmpDetails(e);
	printf("\n\n");

	return 0;



}


void disEmpDetails(EMP e1)
{
	printf("\nEmployee Details are\n");
	printf("\n%d",e1.id);
	printf("\n%s",e1.name);
	printf("\n%c",e1.gender);

	printf("\n%f",e1.sal);
	printf("\n%d",e1.phone);

}

void getEmpDetails(EMP *e1)
{
	scanf("%d",&e1->id);
	scanf("%s",e1->name);
	scanf(" ");
	scanf("%c",&e1->gender);

	scanf("%f",&e1->sal);
	scanf("%d",&e1->phone);
	// disEmpDetails(e1);
}