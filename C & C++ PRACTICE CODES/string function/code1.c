#include <stdio.h>


long int mystrlen(char str[]){
	int i = 0;
	while(str[i] != '\0'){
		
		i++;

	}
	return i;

}

void main (){

	char string[50];
	puts("enter your string");
	fgets(string,9,stdin);

	printf("length of string : %ld ",mystrlen(string));

}
