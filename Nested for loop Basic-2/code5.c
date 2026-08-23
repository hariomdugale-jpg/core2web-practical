
#include <stdio.h>

void main (){

	int row;
	printf("enter no of row: ");
	scanf("%d",&row);

	for(int i =0; i < row ; i++){

		for(int a = 0;a < row ; a++){
			
			if(i % 2 == 0){

				printf("\t%d\t",a + 1);
			}else{

				printf("\t%d\t", row - a);


			}
	
	
		}
		printf("\n\n");
	}


}
