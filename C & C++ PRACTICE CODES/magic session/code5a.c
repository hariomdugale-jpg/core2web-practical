#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct Product Pro;
struct Product {

	char name[20];
	float prize;
	int quantity;

};

Pro fun(){

	Pro p1;
	strcpy(p1.name,"soap");
	p1.prize=546.5;
	p1.quantity=54;

	return p1;
}


void main (){

	Pro p1;
	p1 = fun();
	
	printf("name of product :%s\n",p1.name);
	printf("prize of product :%f\n",p1.prize);
	printf("quantity of product :%d\n",p1.quantity);
}
