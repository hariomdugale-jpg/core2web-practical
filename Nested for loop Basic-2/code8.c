
#include <stdio.h>

void main (){

	int row ;
	printf("enter no of row: ");
	scanf("%d",&row);

	for(int i =0; i < row ; i++){

		for(int a = 0;a < row ; a++){

			printf("\tA%d\t",a+ 1);

			
		}
		printf("\n\n");
	}


}
