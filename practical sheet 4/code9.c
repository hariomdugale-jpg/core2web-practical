#include <stdio.h>
void main(){
	int a,b;
	b=0;
	printf("fist 10 odd no : \n");
	for(a=0;a<10;){
		if(b%2!=0){
			a++;
			printf("%d\n",b);
		}
		b++;
	}

}
