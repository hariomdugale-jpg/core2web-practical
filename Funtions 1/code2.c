#include <stdio.h>
char fun(char);
void main(){

	char ch;
	printf("enter your char  : ");
	scanf("%c",&ch);
	char (*ptr)(char)=*fun;
	if(ptr(ch)=='u'){
		printf("your char is uppercase");
	}else{
		printf("your char is lowercase");
	}
	printf("return of fun = %c\n",ptr(ch));
}

char fun(char ch){
	if(ch>=65  && ch<=90){
		return 'u';
	}else if(ch<=122 && ch>=97){
		return 'l';
	}

}
