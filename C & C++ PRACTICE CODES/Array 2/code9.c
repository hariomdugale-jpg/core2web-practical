#include <stdio.h>
void main (){
	int size,a,ind;
	printf("enter the size of array : ");
	scanf("%d",&size);
	while(size<0){
		printf("invalid size\n ");
		printf("enter the size of array : ");
		scanf("%d",&size);
	}
	int arr[size];
	for(a=0;a<size;a++){
		printf("enter %d no. of array  : ",a+1);
		scanf("%d",&arr[a]);
	}
	printf("enter the index upto which you want to print array  :");
	scanf("%d",&ind);
	if(ind<size || ind>=0){
	for(a=0;a<ind;a++){

			printf("%d\n",arr[a]);
		
	}
	}else{
		printf("invalid index ");

	}

}
