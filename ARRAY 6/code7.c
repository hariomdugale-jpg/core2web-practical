#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter the size of the first array: \n");
    if (scanf("%d", &n1) != 1 || n1 <= 0) {
        return 1;
    }
    int arr1[n1];
    printf("Enter the first array:\n");
    for (int i = 0; i < n1; i++) {
        if (scanf("%d", &arr1[i]) != 1) {
            return 1;
        }
    }

    printf("Enter the size of the second array: \n");
    if (scanf("%d", &n2) != 1 || n2 <= 0) {
        return 1;
    }
    int arr2[n2];
    printf("Enter the Second array:\n");
    for (int i = 0; i < n2; i++) {
        if (scanf("%d", &arr2[i]) != 1) {
            return 1;
        }
    }

    printf("Output:\nUncommon elements :\n");

    for (int i = 0; i < n1; i++) {
        int found = 0;
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%d\n", arr1[i]);
        }
    }

    for (int i = 0; i < n2; i++) {
        int found = 0;
        for (int j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%d\n", arr2[i]);
        }
    }

    return 0;
}
