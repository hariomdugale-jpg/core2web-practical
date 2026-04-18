#include <stdio.h>
void main (){
	int size,size1,even=0,odd=0,a;
	printf("enter size of arr1 : ");
	scanf("%d",&size);
	
	printf("enter arr1 elements : \n");
	int arr1[size];
	for(a=0;a<size;a++){
		scanf("%d",&arr1[a]);
		if(a%2==0){
			even+=arr1[a];
		}
	}

	printf("enter size of arr2 : ");
	scanf("%d",& size1);
	
	printf("enter arr2 elements : \n");
	int arr2[size1];
	for(a=0;a<size1;a++){
		scanf("%d",&arr2[a]);
		if(a%2==1){
			odd+=arr2[a];
		}
	}
	
	printf("sum of even index elements of first array = %d \n ",even);

	printf("sum of odd index elements of second array = %d ",odd);


}
