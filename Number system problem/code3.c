
#include <stdio.h>

void main(){

	int x , temp =1;
	printf("enter your number");
	scanf("%d",&x);

	for(int i = 2; i <= x; i++ ){

		if(x % i == 0 ){
		
			temp = 0;
		}
		
	}

	if(temp == 0){

		printf("%d is not prime no. ",x);
	}else{

		printf("%d is prime no. ",x);
	}

}
