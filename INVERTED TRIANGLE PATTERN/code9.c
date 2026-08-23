#include <stdio.h>

int main() {
    int rows;

    
    printf("Enter the number of rows: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    
    for (int i = 0; i < rows; i++) {
        int current_num = i + 1;
        char current_char = 'A' + current_num;

      
        for (int j = 0; j < rows - i; j++) {
            if (j % 2 == 0) {
                
                if (i % 2 != 0 && j == 0) {
                    printf("%c ", current_char);
                } else {
                    printf("%d ", current_num);
                }
            } else {
                
                if (i % 2 != 0) {
                    printf("%d ", current_num + 1);
                } else {
                    printf("%c ", current_char + (j / 2));
                }
            }
        }
        printf("\n");
    }

    return 0;
}
