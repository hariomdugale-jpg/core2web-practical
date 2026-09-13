#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array:\n");
    if (scanf("%d", &n) != 1 || n < 2) {
        return 1;
    }

    int arr[n];

    printf("Enter the numbers\n");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    int max = arr[0];
    int second_max = arr[1];

    if (max < second_max) {
        max = arr[1];
        second_max = arr[0];
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > max) {
            second_max = max;
            max = arr[i];
        } else if (arr[i] > second_max) {
            second_max = arr[i];
        }
    }

    printf("The second largest element in an array is %d\n", second_max);

    return 0;
}
