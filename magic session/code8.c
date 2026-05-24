#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car{
	
	char brand[20];
	int model;
	float prize;

};

typedef struct Car car;

void main (){

	car *c1=malloc(sizeof(car));
	car *c2=malloc(sizeof(car));
	printf("enter car brand : ");
	fgets(c1->brand,19,stdin);
	printf("enter car model : ");
	scanf("%d",&(c1->model));
	printf("enter car prize : ");
	scanf("%f",&(c1->prize));

	strcpy(c2->brand,c1->brand);
	c2->model=c1->model;
	c2->prize=c1->prize;

	puts("printing car detail using another pointer : ");
	printf("car brand is : %s\n",c2->brand);
	printf("car model is : %d\n",c2->model);
	printf("car prize is : %f \n",c2->prize);

}
