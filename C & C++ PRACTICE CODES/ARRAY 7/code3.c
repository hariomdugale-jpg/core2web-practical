#include <stdio.h>

int main() {
    int n;

    printf("Enter size: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int arr[n];

    printf("Enter the elements for the array :\n");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("The First repeating element is %d\n", arr[i]);
                return 0;
            }
        }
    }

    printf("No repeating element is present in an array\n");
    return 0;
}
