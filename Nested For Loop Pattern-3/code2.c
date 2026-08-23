
#include <stdio.h>

void main(){

	int row , temp = 0;
	printf("Enter no. of row : ");
	scanf("%d",&row);

	for(int i = 0;i < row ;i++){
		temp =1;

		for(int a =0; a < row ; a++){

			if(a%2 == 0){

				printf("\t%c\t",row - temp + 65 );
				temp ++;
			}else{

				printf("\t%d\t",1 + i);
			}

			
		}
		printf("\n\n");
	}

}
