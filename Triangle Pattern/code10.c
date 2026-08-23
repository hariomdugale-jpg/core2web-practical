
#include <stdio.h>

void main (){

	int row ;
	printf("enter no. of row : ");
	scanf("%d",&row);

	for(int i = 0 ; i < row ; i++){

		for(int j = row  - i; j > 0 ; j--){

			if(j % 2 == 0){

				
				printf("\t%d\t", row  - j + 65  );
			}else{

				printf("\t%c\t", row  - j + 65 );


			}

		}
		printf("\n\n");

	}

}
