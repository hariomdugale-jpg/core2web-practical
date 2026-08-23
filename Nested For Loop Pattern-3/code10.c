
#include<stdio.h>

void main(){

	int row , x , count  = 0;
	printf("Enter no. of row : ");
	scanf("%d",&row);
	
	x = row * row;

	for(int i =0 ; i < row ; i++){

		for(int j = 0 ; j < row ; j++){

			if(i%2 == 0){

				printf("\t%d\t",x);

			}else{

				if(count == 2 ){

					x -= 1 ;
					count =0;
				}
				
					printf("\t%d\t",x);
					count ++;

	
			}
	

		}
		if(count == 2){

			x--;
		}
		count = 0;

	printf("\n\n");


	}
	


}
