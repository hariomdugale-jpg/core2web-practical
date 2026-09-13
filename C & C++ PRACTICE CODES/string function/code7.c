#include <stdio.h>
int strre(char *str,char ch,char ch1){
	int i =0 ;

	while(*(str + i)!='\n'){
		
		if(ch==*(str + i)){
			
			*(str + i) = ch1;

		}
		i++;
	}
	
	
}

void main (){

	char str[50];
	char ch,ch1;
	puts("enter your string : ");

	fgets(str,49,stdin);

	puts("enter  character to replace  : ");
	ch = getchar();
	getchar();
	puts("enter  character to replaced  : ");
	ch1 = getchar();
	
	strre(str,ch,ch1);
	puts("final string is : ");
	puts(str);

	
}
