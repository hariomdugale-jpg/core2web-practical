#include <stdio.h>

void main(){

	int row  ;
	printf("enter no. of rows : ");
	scanf("%d",&row);

	int count =1 ;
	for(int i = 1 ; i  <= row ; i++){

		for(int a = 0; a < row -i ;a++ ){

			printf(" \t");
		}

		for(int j = 1 ; j <= (2*i)-1; j++ ){

			printf("%d\t",count);
			if(count <  i && j < i){

				count++;
			}else{

				count--;				
			}

			
		}
		count = 1;
		printf("\n\n");
	}

}
