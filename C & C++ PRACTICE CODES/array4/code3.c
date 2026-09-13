#include <stdio.h>
void main (){
	int size, a,j=0,k=0;
	printf("enter  the size of the array : ");
	scanf("%d",&size);

	int arr[size];
	printf("enter the elements : ");
	for(a=0;a<size;a++){
		scanf("%d",&arr[a]);
	}
	

	for(a=0;a<size;a++){
		j=0;
		for(int i=1;i<arr[a];i++){
		
			if(arr[a]%i==0){
				j+=i;
			}
		
		}

		if(j==arr[a]){
			k++;
		}
	 }

	if(k!=0){
		printf("array contain Perfect no. ");
	}else{
		printf("array doesn't contain Perfect number. ");
	}



}

