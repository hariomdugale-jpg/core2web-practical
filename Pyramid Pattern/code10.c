#include <stdio.h>

void main (){

	int row;
	printf("Enter no. of rows : ");
	scanf("%d",&row);

	for(int i = 0; i < row ; i++){

		for(int a = 0; a < i;a++ ){

			printf(" \t");
		}
		for(int j = 0; j < ((row-i)*2)-1;j++){

			printf("%c\t",65+i);

		}
		printf("\n\n");

	}

}
