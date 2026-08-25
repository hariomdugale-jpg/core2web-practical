#include <stdio.h>

void main (){

	int row ;
	printf("Enter no. of rows : ");
	scanf("%d",&row);


	for(int i = 1 ; i <= row ; i++){

		for(int a = 0 ; a < row - i ; a++){

			printf(" \t");
		}

		int temp1;
		if(row%2 == 0){

			temp1 = row -1;
			
		}else{

			temp1 = row;
		}
		for(int j = 1; j <= i ; j++){

			if(row%2 == 0){
				if(j%2==0){
					int temp = 1;
					for(int b = 0; b < temp1 ; b++){

						temp *= j;
					}

					temp1--;
					printf("%d\t",temp);


				}else{

					printf("%d\t",j);

				}
			}else{
						
				if(j%2==1){
                                        int temp = 1;
                                        for(int b = 0; b < temp1 ; b++){

                                                temp *= j;
                                        }

                                        temp1--;
                                        printf("%d\t",temp);


                                }else{

                                        printf("%d\t",j);

                                }
			}					


		}
	
		

		printf("\n\n");

	}


}
