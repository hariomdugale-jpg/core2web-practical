#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
	
	char name[20];
	int quantity;
	float prize;
	
};
typedef struct Book book;
void main (){
	int n ;
	
	printf("enter no. of books : ");
	scanf("%d",&n);
	
	book *bptr = malloc((sizeof(book))*n); 

	for(int i = 0;i<n;i++){
		getchar();
		printf("enter %d book name : ",i+1);
		fgets((bptr+i)->name,19,stdin);
		
		printf("enter %d book quatity ",i+1);
		scanf("%d",&(bptr+i)->quantity);

		printf("enter %d book prize : ",i+1);
		scanf("%f",&(bptr+i)->prize);


	}
	printf("\nbooks detail \n");
	for(int i = 0;i<n;i++){
		
		printf("%d book name  : %s \n",i+1,(bptr+i)->name);
		
		printf("%d book quatity : %d\n",i+1,(bptr+i)->quantity);
		
		printf("%d book prize : %f\n",i+1,(bptr + i )->prize);
		


	}
	

}
