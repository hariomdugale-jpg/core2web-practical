
#include <stdio.h>

void main(){

	int row ;
	printf("Enter no. of row : ");
	scanf("%d",&row);

	for(int i = 1 ;i <= row ;i++){
		

		for(int a = 0; a < row ; a++){

			if(a%2 == 0){
				printf("\t%d\t",i * i );
			}else{

				printf("\t%d\t",i * i * i);
			}

			
		}
		printf("\n\n");
	}

}
