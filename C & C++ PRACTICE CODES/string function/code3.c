#include <stdio.h>

int mystrtoint(char str[]){
	
	int num=0;
	int i = 0;
	while(str[i] !='\n')
	{
		
		num=num*10+(str[i]-48);
		
		i++;
	}

	return num;
}

void main (){
	
	char str[15];
	puts("enter your no : ");
	fgets(str,14,stdin);


	printf("integer of str is %d:",mystrtoint(str));
	

}
