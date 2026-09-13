#include <stdio.h>

void main (){

	int row;
	printf("Enter no. of rows : ");
	scanf("%d",&row);
	
	int count =  4;

	int temp = 0;
	for(int i = 1; i <= row ; i++){

		for(int j = 1; j <= row ; j++){

			
				printf("%d 	",count);
		
				while(temp != 1){
					count ++;
				for(int k = 2 ; k < count/2 ; k++ ){

					if(count% k== 0){

						temp =1;
						break;
					}
				}
				
				}

				temp =0;
			
		}
		printf("\n\n");

	}

}
