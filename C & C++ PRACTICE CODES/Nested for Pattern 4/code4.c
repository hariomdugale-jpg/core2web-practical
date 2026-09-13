#include <stdio.h>

void main (){

	int row;

	printf("Enter no. of rows : " );
	scanf("%d",&row);

	for(int i = 1; i <= row ; i++ ){

		int count = i;
		for(int j = 0 ; j < row ; j++){

			printf("%d	",count);
			if(count == row){

				count = 0;
			}
			count ++;


		}

		printf("\n\n");
	}

}
