#include <stdio.h>

void mystr(char *str){
	
	int i =0,k =0;
	while(*(str + i) != '\n'){
		
		if(*(str + i)!=32){

			*(str + k) = *(str + i);
			k++;
		}
		i++;
	}
	*(str + k) = '\0';

}

void main (){

	char str[50];
	puts("enter your string : ");

	fgets(str,49,stdin);
		
	mystr(str);

	puts(str);

}
