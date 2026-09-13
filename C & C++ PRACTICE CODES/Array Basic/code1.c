#include <stdio.h>
void main (){
	int size,a;
	printf("enter size of arrays : ");
	scanf("%d",&size);
	int arr[size];
	for(a=0;a<size;a++){
		printf("enter %d no array : ",a+1);
		scanf("%d",&arr[a]);
	}
	printf("Printing even indexes elements : ");
	for(a=0;a<size;a++){
		if(a%2==0){
			printf("%d\t",arr[a]);
			
		}

	}


}
