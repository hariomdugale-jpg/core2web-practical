
#include <stdio.h>

void main(){

	int x ,temp1 , temp =1, count = 0;
	printf("enter your number");
	scanf("%d",&x);

	temp1 = x;
	while(temp != 0){

		temp = x / 10;
		x = x / 10;
		count ++;



	}

	printf("count of digit in %d is %d .",temp1,count);

}
