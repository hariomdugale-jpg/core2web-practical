#include <stdio.h>
void main (){
	int a,b,c;
	printf("Enter value of a : ");
	scanf("%d",&a);
	printf("Enter value of b : ");
	scanf("%d",&b);
	printf("Enter value of c : ");
	scanf("%d",&c);
	if(a*a+b*b==c*c){
		printf("it is a pythagorus triplet");
	}else {
		printf("it is not a pythagorus triplet");
	}


}
