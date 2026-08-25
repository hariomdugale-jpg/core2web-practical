#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter the size of the array 1: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements for array 1:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the array 2: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements for array 2:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Common elements are: ");
    int found_any = 0;

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                found_any = 1;
                break; 
            }
        }
    }

    if (!found_any) {
        printf("None");
    }
    printf("\n");

    return 0;
}
