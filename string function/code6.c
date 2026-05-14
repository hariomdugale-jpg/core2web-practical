#include <stdio.h>
int strchr(char str[],char ch){
	int i =0 ;

	while(str[i]!='\n'){
		
		if(ch==str[i]){
			
			return i;

		}
		i++;
	}
	
	
}

void main (){

	char str[50];
	char ch;
	puts("enter your string : ");

	fgets(str,49,stdin);

	puts("enter your character : ");
	
	ch = getchar();

	printf("index of charecter is %d ",strchr(str,ch));

	
}
