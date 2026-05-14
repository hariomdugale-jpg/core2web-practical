#include <stdio.h>

void mystrcpy(char *ptr,char str[] ){
		
	int i=0;
	while(str[i] != '\0'){
		
		*(ptr + i)=str[i];
		i++;

	}
	*(ptr + i)='\0';

}


void main (){

	char str[50];
	char str1[50];
	puts("enter your string : ");
	fgets(str,40,stdin);
	
	mystrcpy(str1,str);

	puts(str1);


}
