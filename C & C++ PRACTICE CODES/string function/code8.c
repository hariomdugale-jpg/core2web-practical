#include <stdio.h>

int strdi(char str[]){
	int i =0 ;

	while(str[i] != '\n'){
		
		if(str[i]>='1' && str[i]<='9'){
			

		}else{

			return 1;
		}
		i++;
	}
	return 8;

}

void main (){

	char str[50];
	puts("enter your str : ");
	fgets(str,49,stdin);

	if(strdi(str)==1){
		puts("the given string doesn't contain only digits ");
	}else{

		puts("the given string contain only digits ");

	}


}
