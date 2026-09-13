
#include <stdio.h>

void main(){

	int row;
	printf("enter no. rows : ");
	scanf("%d",&row);

	for(int i = 1 ; i <= row ; i++){

		for(int j = 0; j < row ; j++ ){

			printf("\t%d\t",j + i);

		}
		printf("\n\n");

	}

}
