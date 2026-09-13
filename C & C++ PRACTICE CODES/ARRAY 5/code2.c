#include <stdio.h>

void main(){

	int size ;
	printf("Enter size of arrays  : ");
	scanf("%d",&size);
	int arr[size];
	
	for(int i = 0 ; i < size ; i++){

		scanf("%d",&arr[i]);
	}

	printf("Enter no : ");
	int index;
	scanf("%d",&index);


	for(int i = 0 ; i < size ; i++){

		if(arr[i] == index){
			printf("the index is %d",i);
			return ;
		}
	
	}

			printf("no. is not found ");
}
