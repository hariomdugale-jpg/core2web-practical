#include <stdio.h>

void main (){

	int row ;
	printf("Enter your no. of rows : ");
	scanf("%d",&row);

	for(int i = 0; i < row ; i++){

		for(int j = 0 ; j <= i ;j++){

			if((i)%4== 0){

				printf("%d\t",i+1);

			}else if(i%2==1){				
				printf("0\t");
			}else {

	
				printf("1\t");
			}

		}
		printf("\n\n");
	}

}
