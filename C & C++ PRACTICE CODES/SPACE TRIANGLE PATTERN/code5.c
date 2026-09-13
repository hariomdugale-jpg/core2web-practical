#include <stdio.h>

void main (){

	int row ;
	printf("Enter no. of rows : ");
	scanf("%d",&row);


	for(int i = 1 ; i <= row ; i++){

		for(int a = 0 ; a < row - i ; a++){

			printf(" \t");
		}

		for(int j = 0; j < i ; j++){

			if(i%4==0){

				printf("%c\t",65 + j);


			}else if(i%2==0){

				printf("%c\t",64+i-j);


			}else{


				printf("%d\t",i - j);

			}

		}

		printf("\n\n");

	}


}
