#include <stdio.h>
void main (){
	int a,b,c;
	char ch=64;
	for(b=1;b<=9;b++){
		if(b%2!=0){
			printf("%d\t",b);
		}else{
			ch+=2;
			printf("%c\t",ch);

		}

	}
	

}
