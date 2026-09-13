#include <stdio.h>
void main (){
	int a,b,c,d;
	printf("enter positive Number : ");
	scanf("%d",&a);
	if(a>0){
		if(a%2==0){
			printf("your nu. is even \n table of %d from 1 to 10 :\n",a);
			for(b=1;b<=10;b++){
				printf("%d \t",a*b);
			}
		}else{

			printf("your no. is odd \n table of %d from 10 to 1 : \n",a);
			for(b=10;b>=1;b--){
				printf("%d \t",a*b);
			}
		}
	}else{
		printf("you number  is negative ");
	}





}
