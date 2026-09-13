#include <stdio.h>

void main (){

	int row;
	printf("Enter no. of rows : ");
	scanf("%d",&row);
	
	int count =1;
	for(int i = 1; i <= row ; i++){

		for(int j = 1; j <= row ; j++){

			printf("%d	",count*j);
		}
		count += row;
		printf("\n\n");

	}

}
