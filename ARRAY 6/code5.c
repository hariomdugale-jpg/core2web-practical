#include <stdio.h>

int main() {
    int n, target, count = 0;

    printf("Enter size:\n");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int arr[n];

    printf("Enter elements in the array:\n");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    printf("Enter element: ");
    if (scanf("%d", &target) != 1) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    if (count > 0) {
        printf("frequency of %d is %d\n", target, count);
    } else {
        printf("%d is not present in the array\n", target);
    }

    return 0;
}
