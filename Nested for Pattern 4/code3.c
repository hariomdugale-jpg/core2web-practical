
#include <stdio.h>

void main(){

	int row , count  =1;
	printf("enter no. rows : ");
	scanf("%d",&row);

	for(int i = 1 ; i <= row ; i++){

		for(int j = 0; j < row ; j++ ){

			printf("\t%d\t",count);

			count ++;
		if(count == 10){

			count = 1;
		}
		
		}
		printf("\n\n");

	}

}
