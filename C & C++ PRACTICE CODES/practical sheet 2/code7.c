#include <stdio.h>
void main (){
	int num1,num2;
	printf("Enter your 1st number : ");
	scanf("%d",&num1);
	printf("Enter your 2nd number : ");
	scanf("%d",&num2);
	if(num1>num2){
		printf("%d is  maximum batween %d and %d \n",num1,num1,num2);
	}else if(num1<num2) {
		printf("%d is maximum between %d and %d \n",num2,num1,num2);
	}else {
		printf("numbers are equal");
	}
}
