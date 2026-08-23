#include <stdio.h>

void main (){

	int row ,temp = 1,temp1=1;
	printf("Enter your no. of rows : ");
	scanf("%d",&row);

	for(int i = 1; i <= row ; i++){

		
		for(int j = 1 ; j < i + 1;j++){
			temp =1;
			for(int a = 1; a <= j ;a++){

				temp *= a; 
			}

			printf("%d\t",(i)*temp);
					
		}
		printf("\n\n");
	}
}

