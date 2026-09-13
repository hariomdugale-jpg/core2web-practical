#include <stdio.h>

void main(){

	int row ;
	printf("enter no. of rows : ");
	scanf("%d",&row);

	for(int i = 1 ; i  <= row ; i++){

		for(int a = 0; a < row -i ;a++ ){

			printf(" \t");
		}

		for(int j = 0 ; j < (2*i)-1; j++ ){


			printf("1\t");
		}
		printf("\n\n");
	}

}
