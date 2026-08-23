#include <stdio.h>

void main (){

	int row ;
	printf("enter your no. rows : ");
	scanf("%d",&row);
	int count =1 ;

	for(int i = 0 ; i < row ; i++){

		for(int j = 1; j <= row ; j++){

			if((i + j) % 2 == 0){

				printf("%c 	",64 + (i + j));
			}else{
				printf("%d 	",i + j);

			}
			count ++;

		}
		printf("\n\n");
	}

}
