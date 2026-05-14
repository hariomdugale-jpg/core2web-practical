#include <stdio.h>
	
void mystrupr(char *str){

	int i =0;
	while(*(str + i)!= '\n'){
		
		*(str + i) -= 32;

		i++;
	}



}

void main (){

	char str[50];
	puts("enter your string : ");
	fgets(str,49,stdin);

	mystrupr(str);

	puts(str);


}
