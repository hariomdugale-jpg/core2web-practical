#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int is_decreasing = 1; 

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] <= arr[i + 1]) {
            is_decreasing = 0;
            break;
        }
    }

    if (is_decreasing && n > 1) {
        printf("The array is decreasing.\n");
    } else if (n <= 1) {
        printf("The array needs at least 2 elements to show a sequence trend.\n");
    } else {
        printf("The array is not decreasing.\n");
    }

    return 0;
}
