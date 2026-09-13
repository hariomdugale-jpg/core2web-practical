#include <stdio.h>

int main() {
    int n;

    printf("Enter the size\n");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int arr[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    printf("Output:\nArray elements are:\n");
    if (n % 2 == 0) {
        for (int i = 0; i < n; i += 2) {
            printf("%d\n", arr[i]);
        }
    } else {
        for (int i = 0; i < n; i++) {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}
