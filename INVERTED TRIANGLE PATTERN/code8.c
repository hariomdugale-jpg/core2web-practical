#include <stdio.h>


void main(){

	int row ;
	printf("Enter no. of rows : ");
	scanf("%d",&row);

	for(int i = 0 ; i < row ; i++){

		for(int j = 0 ; j < row - i ; j++){


			printf("%d\t",((row)-j)*(row));

				
		}

		printf("\n\n");
	}

}
