
#include <stdio.h>

void main (){

	int row;
	printf("enter no of row: ");
	scanf("%d",&row);

	for(int i =0; i < row ; i++){

		for(int a = 0;a < row ; a++){
			
			if(a % 2 == 0){

				printf("\t*\t");
			}else{

				printf("\t#\t");


			}
	
	
		}
		printf("\n\n");
	}


}
