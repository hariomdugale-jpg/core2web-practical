#include <stdio.h>

void* cube(int*);

void main (){
	
	int size;
	printf("enter size of array : ");
	scanf("%d",&size);
	
	int arr[size];
	printf("enter your array : \n");
	
	for(int a =0;a<size;a++){
		scanf("%d",arr  + a);
	}

	for(int a =0;a<size;a++){
		cube(arr+a);
	//	printf("%d\n",*(arr + a));
	}



}

void* cube( int *ptr){

	*ptr = (*ptr) * (*ptr) * (*ptr);
	
	printf("%d\n",*ptr);
	
}
