
#include <stdio.h>

void main (){

	int row , column;
	printf("Enter no  of row : ");
	scanf("%d",&row);
	printf("Enter no  of column : ");
	scanf("%d",&column);


	for(int i = 0; i < row ; i++){

		for(int a =0 ; a < column ; a++){

			printf("\t%d\t",a +1 );
			
		}

		printf("\n\n");

	}

}
