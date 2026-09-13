#include <stdio.h>

int main() {
    int start, end, n;

    printf("Enter the start of the range: ");
    if (scanf("%d", &start) != 1) {
        return 1;
    }

    printf("Enter end of the range: ");
    if (scanf("%d", &end) != 1) {
        return 1;
    }

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

    printf("Elements of an array that fall in between %d and %d are: ", start, end);
    for (int i = 0; i < n; i++) {
        if (arr[i] >= start && arr[i] <= end) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
