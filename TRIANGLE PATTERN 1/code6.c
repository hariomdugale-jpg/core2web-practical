#include <stdio.h>

void main (){

	int row ;
	printf("Enter your no. of rows : ");
	scanf("%d",&row);

	for(int i = 0; i < row ; i++){

		for(int j = 0 ; j <= i ;j++){

			if((i)%4== 0){

				printf("%d\t",j+1);

			}else if(i%2==1){


				
				printf("%c\t",65+ j);
			}else {

	
				printf("%c\t",97 + i);
			}

		}
		printf("\n\n");
	}

}
