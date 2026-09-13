#include <stdio.h>
void main (){
	int num;
	printf("Enter your no. : ");
	scanf("%d",&num);
	if(num%5==0 ||num%10==0){
		printf("%d is  divisible by 5 or 10 \n",num);
	}else {
		printf("%d is not divisible by 5 or 10\n",num);
	}
}
