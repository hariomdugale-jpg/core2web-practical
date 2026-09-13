
#include <stdio.h>

void main(){

	int x , temp =1;
	printf("enter your number");
	scanf("%d",&x);
	printf("Factors of %d are : ",x);
	for(int i = 1; i <= x; i++ ){

		if(x%i == 0){

			
			printf(" %d ,",i);
		}
	}

	

}
