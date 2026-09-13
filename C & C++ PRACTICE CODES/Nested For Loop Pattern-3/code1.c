
#include <stdio.h>

void main(){

	int row;
	printf("Enter no. of row : ");
	scanf("%d",&row);

	for(int i = 0;i < row ;i++){

		for(int a =0; a < row ; a++){

			printf("\t%c%d\t",row +65 -1  , row);
		}
		printf("\n\n");
	}

}
