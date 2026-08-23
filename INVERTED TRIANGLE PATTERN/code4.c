#include <stdio.h>


void main(){

	int row ;
	printf("Enter no. of rows : ");
	scanf("%d",&row);

	for(int i = 0 ; i < row ; i++){

		for(int j = 0 ; j < row - i ; j++){

			if((row-j)%2 == 1){

				printf("%d\t",row - j);

			}else{

				printf("%c\t",64+row-j);
			}
		}

		printf("\n\n");
	}

}
