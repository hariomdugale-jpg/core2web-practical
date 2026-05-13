#include <stdio.h>
int fact(int);

void main(){
	int x;
	printf("Enter your no. : ");
	scanf("%d",&x);

	int (*ptr)(int)=fact;
	printf("factorial of given no. is : %d",ptr(x));

}

int fact(int x){
	int temp=1;
	while(x!=0){
		temp*=x;
		x--;
	}
	return temp;
}
