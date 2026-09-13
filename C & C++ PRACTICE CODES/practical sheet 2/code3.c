#include <stdio.h>
void main (){
	int num;
	printf("Enter your no. : ");
	scanf("%d",&num);
	if(num%7==0){
		if(num<21){
			printf("number is divisible by 7 and less than 21");
		}else{
			printf("number is divisible by 7 and greater than 21");
		}
	}else {
		printf("number is not divisible by 7");
	}
}
