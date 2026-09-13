#include <stdio.h>

void main (){

	int row ;
	printf("Enter your no. of rows : ");
	scanf("%d",&row);

	for(int i = 1; i <= row ; i++){

		for(int j = 1 ; j <= i ;j++){

			if(i%2 == 1){

				printf("%c\t",96+i);
			}else{

				printf("%c\t",64 + j);
			}
		}
		printf("\n\n");
	}

}
