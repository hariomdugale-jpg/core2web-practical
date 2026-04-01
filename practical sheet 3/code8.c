#include <stdio.h>
void main (){
	int per;
	printf("Enter your percentage \n");
	scanf("%d",&per);
	if(per>=90){
		printf("first class with distiction");
	}else if(per<90 && per>=80){
		printf("first class ");

	}else if(per<80 && per>=70){
		printf("second class ");


	}else if(per<70 && per >=40){
		printf("third class ");

	}else{
		printf("you are fail");

	}


}
