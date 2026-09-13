#include <stdio.h>

void main (){

	int row ;
	printf("Enter no. of rows : ");
	scanf("%d",&row);

	for(int i = 0 ; i < row ; i++){

		for(int a = 0 ; a < row - i ; a++){

			printf(" \t");
		}

		for(int j = 0; j <= i ; j++){

			printf("%c\t",(65 + i + j ));

		}

		printf("\n\n");

	}


}
