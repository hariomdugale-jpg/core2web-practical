#include <stdio.h>
void main(){
	int a,b;
	b=0;
	printf("total even no between 2 to 200  : \n");
	for(a=3;a<200;a++){
		if(a%2==0){
			b++;
		}
	}
	printf("the count of even no between 2 to 200 is : %d",b);

}
