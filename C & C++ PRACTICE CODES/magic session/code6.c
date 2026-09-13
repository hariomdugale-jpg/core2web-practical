#include <stdio.h>
struct co_ordinates{
	float x,y;

};
typedef struct co_ordinates points;
void main (){

	points p1,p2;

	printf("enter first points x co-ordinate : ");
	scanf("%d",&p1.x);

	printf("enter first points y co-ordinate : ");
	scanf("%d",&p1.y);
	
	printf("enter second points x co-ordinate : ");
	scanf("%d",&p2.x);

	printf("enter second points y co-ordinate : ");
	scanf("%d",&p2.y);


	if(p1.x==p2.x && p1.y==p2.y){
						
		puts("points are equals");
		
	}else{
		
		puts("points are not equals");
	}
}
