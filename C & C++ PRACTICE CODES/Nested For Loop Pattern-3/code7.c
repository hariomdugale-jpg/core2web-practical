
#include<stdio.h>

void main (){

	int row, count = 0;
	printf("Enter no. of row  : ");
	scanf("%d",&row);

	for(int i = 0; i < row ; i ++){

		for(int a = 0 ; a < row ; a++ ){

			if(a%2 == 0){

				printf("\t%c\t",65- 1 + row * row - count);
				
			}else{
				
				printf("\t%d\t",row * row - count);

			}
			count ++;
			
		}

		printf("\n\n");

	}


}
