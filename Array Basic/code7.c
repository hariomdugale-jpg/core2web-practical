#include <stdio.h>
void main (){
	int size,a,odd_sum=0,even_sum=0;
	printf("enter size of arrays : ");
	scanf("%d",&size);
	int arr[size];
	for(a=0;a<size;a++){
		printf("enter %d no array : ",a+1);
		scanf("%d",&arr[a]);
	}
	for(a=0;a<size;a++){
		if(arr[a]%2==0){
			even_sum+=arr[a];
		}else{
			odd_sum+=arr[a];

		}

	}
	printf("difference between the sum of even and the sum of odd  : %d",-even_sum+odd_sum);


}
