#include <stdio.h>

void main (){

	int row , count  = 0;
	printf("Enter no. of rows : ");
	scanf("%d",&row);

	for(int i = 1 ; i <= row ; i++){

		for(int a = 0 ; a < row - i ; a++){

			printf(" \t");
		}

		for(int j = 0; j < i ; j++){

			printf("%c\t",65 + count);
			count ++;

		}

		printf("\n\n");

	}


}
