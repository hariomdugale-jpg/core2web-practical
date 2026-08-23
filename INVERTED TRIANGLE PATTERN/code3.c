#include <stdio.h>


void main(){

	int row ;
	printf("Enter no. of rows : ");
	scanf("%d",&row);

	for(int i = 0 ; i < row ; i++){

		for(int j = 0 ; j < row - i ; j++){

			if(i%2 == 0){

				printf("%c\t",65+i);

			}else{

				printf("%c\t",97+i);
			}
		}

		printf("\n\n");
	}

}
