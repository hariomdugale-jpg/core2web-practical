#include <stdio.h>
void main (){
	int num;
	printf("Enter your no. : ");
	scanf("%d",&num);
	if(num>0){
		printf("%d is positive\n",num);
	}else if(num<0){
		printf("%d is negative \n",num);
	}else{
		printf("the number 0 is considered neutral");
	}


}
