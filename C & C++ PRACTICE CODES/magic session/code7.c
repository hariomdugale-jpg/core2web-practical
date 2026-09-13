#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct product Pro;

struct product {

	char name[20];
	int quantity;
	float prize;
};


void main (){
	
	Pro *ptr=malloc(sizeof(Pro));
	strcpy(ptr->name,"hariom");
	ptr->quantity = 54;
	ptr->prize = 65.2;

	printf("name of product : %s\n",ptr->name);
	printf("quatity of product : %d\n",ptr->quantity);
	printf("prize of product : %f\n",ptr->prize);


}


