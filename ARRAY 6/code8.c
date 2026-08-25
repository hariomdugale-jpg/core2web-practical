#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: \n");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int arr[n];
    printf("Enter array:\n");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    printf("Output:\n");
    for (int i = 0; i < n; i++) {
        int temp = arr[i];
        if (temp < 0) {
            temp = -temp;
        }

        int sum = 0;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
