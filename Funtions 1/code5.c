#include <stdio.h>
int prime(int);
void main (){

	int x;
	printf("enter your no . ");
	scanf("%d",&x);
	int (*ptr)(int)=prime;

	if(ptr(x)==1){
		printf("%d is prime no. .",x);
	}else{
		printf("%d is composite no . ",x);
		
	}



}


int prime(int x){

	for(int a = 2;a<x/2;a++){
		if(x%a==0){

			return 0;
		}
	}
	return 1;

}
