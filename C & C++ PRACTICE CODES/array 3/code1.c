#include <stdio.h>
void main (){
	int size,a;
	printf("enter size of array : ");
	scanf("%d",&size);
	int arr1[size],arr2[size];
	printf("enter elements of arr1 : \n");
	for(a=0;a<size;a++){
		scanf("%d",&arr1[a]);

	}

	for(a=0;a<size;a++){
		arr2[a]=arr1[a];

	}
	printf("here is your second array :\n ");
	for(a=0;a<size;a++){
		printf("%d\n",arr2[a]);

	}





}
