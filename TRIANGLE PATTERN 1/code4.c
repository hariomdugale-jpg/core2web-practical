#include <stdio.h>

void main (){

	int row ;
	printf("Enter your no. of rows : ");
	scanf("%d",&row);

	for(int i = 1; i <= row ; i++){

		for(int j = 1 ; j <= i ;j++){

			if(j%2 == 1){

				printf("%d\t",j);
			}else{

				printf("A\t");
			}
		}
		printf("\n\n");
	}

}
