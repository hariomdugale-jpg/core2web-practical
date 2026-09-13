#include <stdio.h>
#include <stdlib.h>
struct Student {
	char name[20];
	int marks;
	int roll_no;
	
};
struct Student *sptr= NULL;
void main (){
	
	sptr = malloc(sizeof(struct Student)*5);
	for(int i =0;i<5;i++){
		printf("enter i student name %d : ",i);
		fgets((sptr + i)->name,19,stdin);

		printf("enter marks of %d student :",i);
		scanf("%d",&(sptr+i)->marks);

		printf("enter roll_no %d student : ",i);
		scanf("%d",&(sptr+i)->roll_no);
		getchar();
		

	}

	for(int i =0;i<5;i++){
		printf("detail of %d students\n : ",i);
		printf("name of student %s \n",(sptr+i)->name);

		printf(" marks of %d student %d :\n",i,(sptr+i)->marks);

		printf("roll_no %d student : %d\n\n",i,(sptr+i)->roll_no);
		
	}
}
