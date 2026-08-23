#include <stdio.h>

void main (){

	int row ;
	printf("Enter no. of rows : ");
	scanf("%d",&row);
	int temp = 64 + row*2;

	for(int i = 1 ; i <= row ; i++){

		for(int a = 0 ; a < row - i ; a++){

			printf(" \t");
		}

		for(int j = 0; j < i ; j++){

			printf("%c\t",temp--);

		}

		printf("\n\n");

	}


}
