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
	for(a=0;a<size;a++){
		if(arr[a]%5==0){
			printf("first elements divided of 5 index is %d",a);
			break ;
			
		}

	}
}
