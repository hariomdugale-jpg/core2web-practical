
#include <stdio.h>

void main(){

	int row ;
	printf("Enter no. of row : ");
	scanf("%d",&row);

	for(int i = 0;i < row ;i++){

		for(int a =0; a < row ; a++){

			if(row%2 == 1){

				printf("\t%c\t",a+ 65);

			}else{

				if(a%2 == 0){

					printf("\t%d\t",65 + a);

				}else{

					printf("\t%c\t",65 + a);
				}

			}
		


			
		}
		printf("\n\n");
	}

}
