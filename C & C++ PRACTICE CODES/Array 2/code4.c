#include <stdio.h>
void main (){
	int size,a,id;
	printf("enter no of students : ");
	scanf("%d",&size);
	while(size<0){
		printf("invalid size\n ");
		printf("enter no of students  : ");
		scanf("%d",&size);
	}
	int arr[size];
	for(a=0;a<size;a++){
		printf("enter %d student id  : ",a+1);
		scanf("%d",&arr[a]);
	}
	printf("student id list : \n");
	for(a=0;a<size;a++){

			printf("%d | ",arr[a]);
		
	}
	printf("\nenter id to search : ");
	scanf("%d",&id);
	for(a=0;a<size;a++){

			if(id==arr[a]){
				printf("id %d found ia index %d",id,a);
			}
		
	}


}
