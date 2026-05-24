#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Book{

	char title[20];
	char auther[20];
	float price ;

};

struct Book * bptr = NULL;
void main (){
	bptr = malloc(sizeof(struct Book));
	strcpy(bptr -> title,"thinking in c++");
	strcpy(bptr -> auther,"bruce");
	bptr -> price = 250.50;

	printf("title of book is : %s\n",bptr->title);
	printf("auther of book is : %s\n",bptr->auther);
	printf("price of book is : %f\n",bptr->price);



}
