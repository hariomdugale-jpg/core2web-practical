#include <stdio.h>

void main (){

	int row ;
	printf("Enter no. of rows : ");
	scanf("%d",&row);


	int temp = row * row;
	for(int i = 1 ; i <= row ; i++){

		for(int a = 0 ; a < row - i ; a++){

			printf(" \t");
		}

		for(int j = 1; j <= i ; j++){

			if(j%2 == 0){

				printf("%c\t",j+64);
			}else{

				printf("%d\t",j);

			}

		}

		printf("\n\n");

	}


}
