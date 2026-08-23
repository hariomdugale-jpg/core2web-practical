#include <stdio.h>

void main (){

	int row ;
	printf("Enter no. of rows : ");
	scanf("%d",&row);

	for(int i = 0 ; i < row ; i++){

		for(int a = 0 ; a < i ; a++){

			printf("\t");
		}
	
		for(int j = 1; j <= row - i ; j++){

			printf("%d\t",j + i);
		}
		printf("\n\n");
	}

}
