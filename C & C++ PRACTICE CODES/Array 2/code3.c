#include <stdio.h>
void main (){
	int size,a,sum=0;
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
	for(a=0;a<size;a++){
			sum+=arr[a]*arr[a];
		
	}
	printf("sum of square of elements of array : %d",sum);

}
