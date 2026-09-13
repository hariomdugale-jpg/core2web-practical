
#include <stdio.h>

void main (){

	int row, count  = 0;
	printf("enter no of row: ");
	scanf("%d",&row);

	for(int i =0; i < row ; i++){

		for(int a = 0;a < row ; a++){

			printf("\t%c\t",count + 65);

			count ++;
		}
		printf("\n\n");
	}


}
