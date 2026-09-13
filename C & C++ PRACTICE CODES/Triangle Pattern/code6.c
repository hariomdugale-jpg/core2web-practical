
#include <stdio.h>

void main (){

	int row ;
	printf("enter no. of row : ");
	scanf("%d",&row);

	for(int i = 0 ; i < row ; i++){

		for(int j = row  - i; j > 0 ; j--){


			printf("\t%d\t", row - i );

		}
		printf("\n\n");

	}

}
