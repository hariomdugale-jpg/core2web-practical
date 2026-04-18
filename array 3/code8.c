#include <stdio.h>
void main (){
	int size,a,size1;
	printf("enter size of array : ");
	scanf("%d",&size);
	int arr1[size],arr2[size];
	printf("enter elements of arr1 : \n");
	for(a=0;a<size;a++){
		scanf("%d",&arr1[a]);
	}

	printf("enter size of array 2: ");
	scanf("%d",&size1);
	printf("enter elements of arr2 : \n");
	for(a=0;a<size1;a++){
		scanf("%d",&arr2[a]);
	}


	for(a=0;a<size1;a++){
		printf(" %d | ",arr1[a]);
		printf(" %d | ",arr2[a]);
	}








}
