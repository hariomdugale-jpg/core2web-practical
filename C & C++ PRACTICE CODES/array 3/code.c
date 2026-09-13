#include <stdio.h>
void main (){
	int size,a,i=0;
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
	int arr3[size+size1];

	for(a=0;a<size + size1-1;a++){
		if(a<size){
			arr3[a]=arr1[a];
			
		}else{
			arr3[a]=arr1

		}
	}







}
