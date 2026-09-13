#include <stdio.h>
#include <stdlib.h>

typedef struct Rectangle rect;

struct Rectangle{
	
	float length;
	float width;

};

rect *ptr=NULL;




void rect_area(){
	ptr = malloc(sizeof(rect));
	printf("enter length of rectangle : ");
	scanf("%f",&(ptr->length));

	printf("enter width of rectangle : ");
	scanf("%f",&ptr->width);

	printf("area of rectangle :%f",(ptr->length)*(ptr->width));

}
void rect_peri(){

	printf("perimeter of rectangle is %f",2*(ptr->length+ptr->width));
}

void main (){
	
	
	rect_area();
	rect_peri();

}
