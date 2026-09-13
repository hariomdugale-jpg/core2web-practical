#include <stdio.h>
void main (){
	int size, a,j=0;
	printf("enter  the size of the array : ");
	scanf("%d",&size);

	int arr[size];
	printf("enter the elements : ");
	for(a=0;a<size;a++){
		scanf("%d",&arr[a]);
	}
	
	printf("Prime numbers present in an array : \n");

	for(a=0;a<size;a++){
		j=0;
		for(int i=2;i<arr[a];i++){
		
			if(arr[a]%i==0){
				j++;
			}
		
		}

		if(j==0){
			printf(" %d | ",arr[a]);
		}
	}



}

