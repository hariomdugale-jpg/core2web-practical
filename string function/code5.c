#include <stdio.h>

void togglecharacter(char *str){
		
	int i =0 ;
	while((*(str + i))!='\n'){
		
		if(*(str + i)<=90 && *(str + i)>= 65){
				
			*(str + i) += 32;

		}else{
			
			*(str + i)-=32;
		}

		i++;

	}
		
}

void main (){

	char str[50];
	puts("enter your string ");
	fgets(str,49,stdin);

	togglecharacter(str);

	puts(str);



}
