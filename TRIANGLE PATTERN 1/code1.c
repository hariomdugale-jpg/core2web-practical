#include <stdio.h>

void main (){

	int row ;
	int count =1 ;
	printf("Enter your no. of rows : ");
	scanf("%d",&row);

	for(int i = 1; i <= row ; i++){

		for(int j = 0 ; j < i ;j++){

			printf("%d\t",((count++)*2)-1);
		}
		printf("\n\n");
	}

}
