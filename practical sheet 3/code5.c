#include <stdio.h>
void main (){
	int unit;
	printf("Enter your unit : ");
	scanf("%d",&unit);
	if(unit<=200){
		printf("total bill is %d",unit*5);
	}else if(unit>200 && unit<=300){
		printf("total bill is %d",unit*7);
	}else{
		printf("total bill is %d ",unit*10);
	}



}
