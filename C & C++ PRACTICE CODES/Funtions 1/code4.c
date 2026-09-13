#include <stdio.h>

int strong(int);

void main (){

	int x ;
	printf("enter your no. : ");
	scanf("%d",&x);
	
	int (*ptr)(int) = strong;
	printf("%d\n",s);
	if(ptr(x)==x){
		printf("%d is strong no. ",x);
	}else{
		printf("%d is not strong no. ",x);

	}
	

}
int a=0;
int strong(int x){
	int y=1;
	int temp=x%10;
	while(temp!=1){
	y*=temp;
		temp--;
	}
	
	a+=y;

	if(x==0){
		return a;
	}

	return strong(x/10);
}
