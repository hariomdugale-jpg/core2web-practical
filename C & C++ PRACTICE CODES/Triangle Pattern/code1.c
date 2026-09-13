
#include <stdio.h>

void main (){

	int row;
	printf("enter no. of row : ");
	scanf("%d",&row);

	for(int i = 1; i <= row ; i++){

		for(int j = row ; j < row + i ; j++){


			printf("\t%d\t",j +  1 - row);

		}
		printf("\n\n");

	}

}
