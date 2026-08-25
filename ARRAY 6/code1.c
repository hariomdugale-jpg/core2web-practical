#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array :\n");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int arr[n];

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    printf("Output :\n");
    for (int i = 0; i < n; i++) {
        if (arr[i] == i) {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}
