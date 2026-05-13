#include <stdio.h>
int palin(int);
void main (){

	int x;
	printf("enter your no . :");
	scanf("%d",&x);
	
	

	if(palin(x)==x){
		printf("%d is palindrome .",x);
	}else{

		printf("%d is not palindrome .",x);
	}

}
	
int palin(int x){		
	
	
	static int temp =0;
	if(x==0){

		return temp;
	}

	int y;

	y=x%10;
	temp =temp*10+y;
	
	
	return palin(x/10);


	

}
