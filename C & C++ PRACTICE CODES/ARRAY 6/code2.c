#include <stdio.h>

int main() {
    int n, target;

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

    printf("Enter sum: \n");
    if (scanf("%d", &target) != 1) {
        return 1;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("index : %d and index : %d\n", i, j);
                return 0;
            }
        }
    }

    printf("No pair found\n");
    return 0;
}
