#include <stdio.h>

int main() {
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr1[n];
    int arr2[n];

    printf("Enter the elements for array 1:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements for array 2:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[n - 1 - i];
        arr2[n - 1 - i] = temp;
    }

    printf("Array 1 after swap: ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr1[i]);
        if (i < n - 1) printf(" | ");
    }
    printf("\n");

    printf("Array 2 after swap: ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr2[i]);
        if (i < n - 1) printf(" | ");
    }
    printf("\n");

    return 0;
}
