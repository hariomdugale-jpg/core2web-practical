#include <stdio.h>
void main (){
	int size,a;sum1=0,sum2=0;
	
	printf("enter size of array : ");
	scanf("%d",&size);
	
	int arr1[size];
	printf("enter elements of arr1 : \n");
	for(a=0;a<size;a++){
		scanf("%d",&arr1[a]);
		sum1+=arr1[a];
	}

	int size1;
	printf("enter size of array 2: ");
	scanf("%d",&size1);
	printf("enter elements of arr2 : \n");
	int arr2[size1];
	for(a=0;a<size1;a++){
		scanf("%d",&arr2[a]);
		sum2+=arr2[a];
	

	}
	printf("sum of arr1 is %d\n",sum1);
	printf("sum of arr2 is %d\n",sum2);
	

	if(sum1==sum2){

		printf("sum of array is same ");

	}else{
		printf("sum of array is not same ");
	}








}
