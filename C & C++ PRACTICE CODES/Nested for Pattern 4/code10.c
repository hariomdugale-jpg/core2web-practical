#include <stdio.h>

void main (){

	int row ;
	printf("enter your no. rows : ");
	scanf("%d",&row);


	for(int i = 1 ; i <= row ; i++){

		for(int j = 1; j <= row ; j++){

			if(i == j || (i + j) == (row +1) ){

				printf("%d 	", 1);
			}else{
				printf("%d 	",0);

			}
			

		}
		printf("\n\n");
	}

}
