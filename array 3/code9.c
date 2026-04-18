#include <stdio.h>
void main (){


	int size,a;
	printf("enter size of array : ");
	scanf("%d",&size);
	
	int arr1[size],arr3[size];
	printf("enter elements of arr1 : \n");
	for(a=0;a<size;a++){
		scanf("%d",&arr1[a]);
	}

	for(a=0;a<size;a++){
		arr3[a]=arr1[a];
	}


	int size1;
	printf("enter size of array 2: ");
	scanf("%d",&size1);
	int arr2[size1];
	

	printf("enter elements of arr2 : \n");
	for(a=0;a<size1;a++){
		scanf("%d",&arr2[a]);
	}
	
	for(a=0;a<size;a++){
		arr1[a]=arr2[a];
	}

	for(a=0;a<size;a++){
		arr2[a]=arr3[a];
	}

	printf("printing arr1 elements  :  ");
	for(a=0;a<size;a++){
		printf(" % d ",arr1[a]);
	}

	printf("\nprinting arr2 elements :  ");
	for(a=0;a<size;a++){
		printf("%d ",arr2[a]);
	}






}
