#include <stdio.h>

void main(){

	int size ;
	printf("Enter size of arrays  : ");
	scanf("%d",&size);
	int arr[size];
	int e=0,o=0;
	
	for(int i = 0 ; i < size ; i++){

		scanf("%d",&arr[i]);
	}

	for(int i = 0 ; i < size ; i++){

		if(arr[i]%2==0){

			e++;
		}else{
			o++;
		}
	}

	printf("even : %d,\n odd : %d",e,o);
	

}
