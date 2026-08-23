#include <stdio.h>


void main(){

	int row ;
	printf("Enter no. of rows : ");
	scanf("%d",&row);

	for(int i = 0 ; i < row ; i++){

		for(int j = 0 ; j < row - i ; j++){

		

			if(row%2 == 1){

				if(j%2 == 0){

					printf("%d\t",j+1+i);
				}else{
					printf("%c\t",64+j+i+1);

				}
			}else{

				if(j%2 == 1){

					printf("%d\t",j+1+i);
				}else{
					printf("%c\t",64+j+i+1);

				}

			}


		}

		printf("\n\n");
	}

}
