#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array:\n");
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

    printf("Output:\n");
    for (int i = 0; i < n; i++) {
        int original = arr[i];
        int temp = original;
        int sign = 1;

        if (temp < 0) {
            sign = -1;
            temp = -temp;
        }

        int reversed = 0;
        while (temp > 0) {
            reversed = (reversed * 10) + (temp % 10);
            temp /= 10;
        }

        reversed *= sign;
        printf("%d ", reversed);
    }
    printf("\n");

    return 0;
}
