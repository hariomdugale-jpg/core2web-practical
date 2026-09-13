#include <stdio.h>
void main (){
	int a,b,c,d,e;
	printf("********WELCOME TO SHOP **********\n");
	printf("1$ per apple \n");
	
	printf("4$ per water bottlen\n");
	printf("8$ per notebook\n");
	printf("1$ per bunch of 10 pens\n");
	printf("enter the quntity of apple ");
	scanf("%d",&a);
	printf("enter the quntity of water bottle");
	scanf("%d",&b);
	printf("enter the quntity of notebook");
	scanf("%d",&c);
	printf("enter the quntity of bunch of pens");
	scanf("%d",&d);
	e=a*1+b*4+c*8+d*1;
	if(e>50){
		printf("congratulation! you get 10$ off \n your bill is : %d ",e-10);
	}else{
	
	        printf("your bill price is %d : ",e);
	}



}
