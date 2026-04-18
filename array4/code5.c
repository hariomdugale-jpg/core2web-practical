#include <stdio.h>
void main (){
	int size, a,j=0,k=0;
	printf("enter  the size of the array : ");
	scanf("%d",&size);

	int arr[size];
	printf("enter the elements : ");
	for(a=0;a<size;a++){
		scanf("%d",&arr[a]);
	}
	
	printf("size of elements are : \n");
	for(a=0;a<size;a++){
		j=0;
		k=arr[a];
		while(k!=0){
			k=k/10;
			j++;
		}

		printf("% d |  ",j);
	}


}

