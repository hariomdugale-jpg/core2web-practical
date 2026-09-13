#include <stdio.h>

int main() {
    int n ,temp = 1;
    printf("Enter your number : ");
    scanf("%d",&n);
    
    int O = 1;
    int x= n;
	
    while(n != 0){


    temp = n % 10;
    O = 1;
    
    if(temp == 0){

	    break ;


    }


	n = n/10;
    }
    
    if(temp == 0){

	    printf("no is duck number");

    }else{

	    printf("no is not duck number");

    }

    return 0;
}

