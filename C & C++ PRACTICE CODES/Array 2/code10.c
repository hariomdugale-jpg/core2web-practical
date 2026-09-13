#include <stdio.h>
void main (){
	int size,a,age;
	printf("enter the size of array : ");
	scanf("%d",&size);
	while(size<0){
		printf("invalid size\n ");
		printf("enter the size of array  : ");
		scanf("%d",&size);
	}
	int arr[size];
	for(a=0;a<size;a++){
		printf("enter %d no. of array : ",a+1);
		scanf("%d",&arr[a]);
	}
	printf("--------------------------------------- : \n");
	for(a=size-1;a>=0;a--){
			printf("%d\n",arr[a]);
			a--;
		
	}

}
