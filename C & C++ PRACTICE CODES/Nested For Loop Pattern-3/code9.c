
#include<stdio.h>

void main(){

	int row, count = 0;
	printf("Enter no. of row : ");
	scanf("%d",&row);

	
	for(int i = 0 ; i < row ; i++){

		for(int a = 0 ; a < row ; a++ ){

			if(i%2 == 0){

				if(a%2 == 0){

					printf( "\t%c\t",65 + row + i +a) ;

				}else{

					printf( "\t%c\t",97 - 1 + row + i +a) ;

				}

			}else{

				if(a % 2 == 0){

					printf("\t%c\t", 97 + row + i + a);

				}else{

					printf("\t%c\t", 65 - 1 + row + i + a );

				}



			}

		}

		printf("\n\n");

	}


}
