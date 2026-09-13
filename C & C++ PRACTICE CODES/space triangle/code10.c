#include <stdio.h>

void main (){

	int row ;
	printf("Enter no. of rows : ");
	scanf("%d",&row);

	for(int i = 0 ; i < row ; i++){

		for(int a = 0 ; a < i ; a++){

			printf("\t");
		}
	
		for(int j = 0; j < row - i ; j++){

			if(row%2 == 0){
			if( (i+j)%2 == 1 ){

				printf("%c\t",  65 + i  +  j);
			}else{
				printf("%d\t",  65 + i  +  j);
			}
			}else{
			if((i+j)%2 == 0 ){

				printf("%c\t",  65   + i +  j);
			}else{
				printf("%d\t",  65   + i + j);
			}

			}
		}
		printf("\n\n");
	}

}
