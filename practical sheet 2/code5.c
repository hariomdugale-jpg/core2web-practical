#include <stdio.h>
void main (){
	char ch;
	printf("Enter your char: ");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z' ){
		printf("char is lowercase");
	}else if(ch>='A' && ch<='Z'){
		printf("char is upper  case");
	}else if(ch>=47 && ch<=57){
		printf("the char is number");
	}else{
		printf("the char is symbol");
	}


}
