#include <stdio.h>

int main() {
    int n ,temp = 1,num =0;
    printf("Enter your number : ");
    scanf("%d",&n);
    
    int O = 1;
    int x= n;
	
    while(n != 0){


    temp = n % 10;
    O = 1;
    
    for(int i = 1; i <= temp ; i++){

	    O *= i; 
    }


    num += O; 
	n = n/10;
    }
    
    if(x == num){

	    printf("no is strong number");

    }else{

	    printf("no is not strong number");

    }

    return 0;
}

