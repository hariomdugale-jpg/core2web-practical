#include <stdio.h>
void main(){
	int a,b;
	b=0;
	printf("the county of number which are divisible by 2 and 5 between 1 to 100 :");
	for(a=2;a<100;a++){
		if(a%2==0 && a%5==0){
			b++;
		}
	}
	printf("%d",b);

}
