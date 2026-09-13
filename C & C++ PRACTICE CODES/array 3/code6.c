#include <stdio.h>
void main (){
	int size,a,equal=0;
	printf("enter size of array : ");
	scanf("%d",&size);
	int arr1[size];
	printf("enter elements of arr1 : \n");
	for(a=0;a<size;a++){
		scanf("%d",&arr1[a]);
	}

	int size1;
	printf("enter size of array 2: ");
	scanf("%d",&size1);
	int arr2[size1];
	printf("enter elements of arr2 : \n");
	for(a=0;a<size1;a++){
		scanf("%d",&arr2[a]);
	}
	for(a=0;a<size1;a++){
		if(arr1[a]==arr2[a]){
			equal++;
		}
	}
	
	if(equal==size){

		printf("all elements in the array is equal ");

	}else{
		printf("all elememts in the array is not equal ");
	}








}
