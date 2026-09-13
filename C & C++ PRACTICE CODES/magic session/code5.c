#include <stdio.h>
#include<string.h>
#include <stdlib.h>
struct Product {

	char name[20];
	float prize;
	int quantity;

};
typedef struct Product pro;
pro *fun (){
	pro *p2=malloc(sizeof(struct Product));
	strcpy(p2->name,"hariom");
	p2->prize = 64.65;
	p2->quantity=54;
	
	return p2;


}
void main(){
	pro *p1;
	p1=fun();
	printf("name : %s\n",p1->name);
	printf("prize : %f\n",p1->prize);
	printf("quantity : %d",p1->quantity);
}
