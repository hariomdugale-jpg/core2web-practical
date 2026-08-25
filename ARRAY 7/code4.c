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

    int min = arr[0];
    int second_min = arr[1];

    if (min > second_min) {
        min = arr[1];
        second_min = arr[0];
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] < min) {
            second_min = min;
            min = arr[i];
        } else if (arr[i] < second_min) {
            second_min = arr[i];
        }
    }

    printf("The second minimum element in an array is %d\n", second_min);

    return 0;
}
