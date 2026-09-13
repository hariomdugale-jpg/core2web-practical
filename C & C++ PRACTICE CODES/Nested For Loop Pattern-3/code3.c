
#include <stdio.h>

void main(){

	int row ;
	printf("Enter no. of row : ");
	scanf("%d",&row);

	for(int i = 1;i <= row ;i++){
		

		for(int a =0; a < row ; a++){

				printf("\t%d\t",i + a );
	

			
		}
		printf("\n\n");
	}

}
