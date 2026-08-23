#include <stdio.h>

void main (){

	int row ;
	printf("Enter your no. of rows : ");
	scanf("%d",&row);

	for(int i = 1; i <= row ; i++){

		for(int j = 0 ; j < i ;j++){

			printf("%c\t",96 + i - j );
		}
		printf("\n\n");
	}

}
