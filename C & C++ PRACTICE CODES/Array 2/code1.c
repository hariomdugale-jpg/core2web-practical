#include <stdio.h>
void main (){
	int size,a;
	printf("enter the size of array : ");
	scanf("%d",&size);
	while(size<0){
		printf("invalid size\n ");
		printf("enter the size of array : ");
		scanf("%d",&size);
	}
	int arr[size];
	for(a=0;a<size;a++){
		printf("enter %d element in array : ",a+1);
		scanf("%d",&arr[a]);
	}
	printf("elements of the arrays is : \n");
	for(a=0;a<size;a++){
			printf("%d\n",arr[a]);
		
	}

}
