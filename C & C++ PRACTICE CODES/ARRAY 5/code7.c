#include <stdio.h>

int main() {
    int num;
    int table[10];
    int *ptr = table;

    printf("Enter Number: ");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++) {
        *(ptr + i) = num * (i + 1);
    }

    for (int i = 0; i < 10; i++) {
        printf("| %d |", *(ptr + i));
    }
    printf("\n");

    return 0;
}
