#include <stdio.h>
#include <stdlib.h>

struct Student {

	char name[20];
	int roll_number;
	int mark;

};

struct Student *sptr;

void main (){
	
	sptr = malloc(sizeof(struct Student));
	puts("enter student name : ");
	fgets(sptr->name,19,stdin);

	printf("enter student roll number : ");
	scanf("%d",&sptr->roll_number);
	
	printf("enter student mark : ");
	scanf("%d",&sptr->mark);

	printf("name of student is :%s\n",sptr->name);
	printf("roll_number  of student is :%d\n",sptr->roll_number);
	printf("mark of student is :%d\n",sptr->mark);




}
