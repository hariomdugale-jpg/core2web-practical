
#include <stdio.h>

void main(){

	int x , temp =1, sum = 0;
	printf("enter your number");
	scanf("%d",&x);

	for(int i = 1; i <= x/2; i++ ){

		if(x%i == 0){

			
			sum += i;
		}
	}

	if(x == sum){
		printf("%d is perfect number ",x);


	}else{

		printf("%d is perfect not  number ",x);

	}
	

}
