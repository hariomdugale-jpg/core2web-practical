#include <stdio.h>
void main (){
	int size,a,sum=0;
	printf("enter size of arrays : ");
	scanf("%d",&size);
	int arr[size];
	for(a=0;a<size;a++){
		printf("enter %d no array : ",a+1);
		scanf("%d",&arr[a]);
	}
	for(a=0;a<size;a++){
		if(a%2==0){
			sum+=arr[a];
			
		}

	}
	printf("sum of even no indexes elements : %d",sum);


}
