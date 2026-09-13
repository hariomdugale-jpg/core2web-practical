#include <stdio.h>
void main (){
	int size,a,pro=1;
	printf("enter size of arrays : ");
	scanf("%d",&size);
	int arr[size];
	for(a=0;a<size;a++){
		printf("enter %d no array : ",a+1);
		scanf("%d",&arr[a]);
	}
	for(a=0;a<size;a++){
		if(a%2!=0){
			pro*=arr[a];
			
		}

	}
	printf("product of odd index elements : %d",pro);


}
