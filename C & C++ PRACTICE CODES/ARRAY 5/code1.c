#include <stdio.h>

void main(){

	int size ;
	printf("Enter size of arrays  : ");
	scanf("%d",&size);
	int arr[size];
	
	for(int i = 0 ; i < size ; i++){

		scanf("%d",&arr[i]);
	}

	printf("Enter index : ");
	int index;
	scanf("%d",&index);
	if(index < size ){
		printf("The Element at he index is %d", arr[index]);
	}else{

		printf("index is greater than the size");
	}

}
