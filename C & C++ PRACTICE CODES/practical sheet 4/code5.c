#include <stdio.h>
void main(){
	int a,b,c,d;
	printf("the even no between 22 to 98 in reverse order : \n");
	for(a=97;a>22;a--){
		if(a%2==0){
			printf("%d\t",a);
		}
	}

}
