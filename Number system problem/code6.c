
#include <stdio.h>

void main(){

	int x ,temp1 , temp =0;
	printf("enter your number");
	scanf("%d",&x);

	temp1 = x;
	while(temp1 != 0){

		temp = temp*10 + temp1 % 10; 
		temp1 = temp1 / 10;
		 
	}

	printf("revese of digit in %d is %d .",x,temp);

}
