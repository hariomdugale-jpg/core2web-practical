#include <stdio.h>
void main (){
	int num;
	printf("enter your number : ");
	scanf("%d",&num);
	if(num>1 && num<1000){
		printf("%d is in the range 1 to 1000",num);
	}else{
		printf("%d is not in the range 1 to 1000",num);
	}

}
