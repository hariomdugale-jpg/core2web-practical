#include <stdio.h>

int main() {
    int n = 5;  
    int O = 1;  

    
    for (int i = 1; i <= n; i++) {
        O *= i; 
    }

    printf("Factorial of %d is %d\n", n, O);
    return 0;
}

