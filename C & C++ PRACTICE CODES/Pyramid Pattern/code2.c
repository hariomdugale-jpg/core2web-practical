#include <stdio.h>

void main(){

	int row , count =1 ;
	printf("enter no. of rows : ");
	scanf("%d",&row);

	for(int i = 1 ; i  <= row ; i++){

		for(int a = 0; a < row -i ;a++ ){

			printf(" \t");
		}

		for(int j = 0 ; j < (2*i)-1; j++ ){


			printf("%d\t",count++);
		}
		printf("\n\n");
	}

}
