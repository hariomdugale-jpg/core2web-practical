#include <stdio.h>

void main (){

	int row ;
	printf("Enter your no. of rows : ");
	scanf("%d",&row);

	int temp = row * row ;
	for(int i = 0; i < row ; i++){

		for(int j = 0 ; j < i + 1 ;j++){
			
			printf("%d\t",temp);
			if(i %2 == 0){
				temp -= 2;
			}else{

				temp +=(j + 1)*(j +1);
			}
		}
		printf("\n\n");
	}
}

