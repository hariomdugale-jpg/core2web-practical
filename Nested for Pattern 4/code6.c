#include <stdio.h>

void main (){

	int row;
	printf("Enter no. of rows : ");
	scanf("%d",&row);
	
	int count ;
	
 if(row%2==0){

                count =2;
        }else{
                count = 1;
        }

	

	int temp = 0;
	for(int i = 1; i <= row ; i++){

		
		for(int j = 1; j <= row ; j++){

			
				printf("%d 	",count);
		
			while(temp == 0 ){
				count ++;
				temp = 1;
				for(int  k = 2; k <= count/2  ; k++){

					
					if(count%k == 0){

						temp = 0;
						break;
					}
				}
			}

		
			temp =0;
			
		}
		printf("\n\n");

	}

}
