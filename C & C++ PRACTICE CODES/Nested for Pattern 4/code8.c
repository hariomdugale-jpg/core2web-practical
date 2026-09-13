#include <stdio.h>

void main (){

	int row ;
	printf("enter your no. rows : ");
	scanf("%d",&row);
	int count =1 ;

	for(int i = 0 ; i < row ; i++){

		for(int j = 1; j <= row ; j++){

			if(count % 2 == 0){

				printf("%d 	",count * count);
			}else{
				printf("%d 	",count);

			}
			count ++;

		}
		printf("\n\n");
	}

}
