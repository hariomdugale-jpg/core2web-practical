#include <stdio.h>
void main (){
	int a,b,c;
	char ch=64,ch1=97;
	for(b=1;b<=9;b++){
		if(b%2!=0){

			printf("%c\t",ch1);
			ch1+=2;
		}else{
			ch+=2;
			printf("%c\t",ch);
		}
	}
}
