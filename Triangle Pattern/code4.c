
#include <stdio.h>

void main (){

	int row , count = 0;
	printf("enter no. of row : ");
	scanf("%d",&row);

	for(int i = 1; i <= row ; i++){

		for(int j = 1 ; j <=  i ; j++){


			printf("\t%d\t", row * j  );

		}
		printf("\n\n");

	}

}
