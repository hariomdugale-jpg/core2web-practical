#include <stdio.h>

int niven(int);
void main (){

	int x;
	printf("enter your no : ");
	scanf("%d",&x);
	
	int (*ptr)(int)= niven;
	if(x%ptr(x)==0){

		printf("%d is niven number .",x);

	}else{

		printf("%d is not  niven number .",x);
	}

}


int niven(int x){
	static int temp=0;
	
	int y=x%10;
	temp+=y;
	if(x==0){

		return temp;
	}

	return niven(x/10);



}
