#include <stdio.h>
void main (){
	int size, a,j=0,k=0,s=0,o;
	printf("enter  the size of the array : ");
	scanf("%d",&size);

	int arr[size];
	printf("enter the elements : ");
	for(a=0;a<size;a++){
		scanf("%d",&arr[a]);
	}
	

	for(a=0;a<size-1;a++){
		if(arr[a]<arr[a+1]){

		}else{

			k=1;
			break;
		}
	}
	if(k==1){
		printf("this the not an increasing array");
	}else{
		printf("this is an increasing array  ");
	}
}

