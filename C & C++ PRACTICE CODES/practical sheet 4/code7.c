#include <stdio.h>
void main(){
	int a,b,c;
	c=0;
	printf("enter your no. in integer : ");
	scanf("%d",&a);
	for(b=2;b<=10;b++){
		if(a%b==0){
			c++;
		}
	}
	printf("Divisor of %d between 2 to 10 = %d ",a,c);
}
