#include <stdio.h>

int main() {
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    int even[n];
    int odd[n];
    int even_count = 0;
    int odd_count = 0;

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[even_count] = arr[i];
            even_count++;
        } else {
            odd[odd_count] = arr[i];
            odd_count++;
        }
    }

    printf("Even elements array:\n");
    for (int i = 0; i < even_count; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    printf("Odd elements array:\n");
    for (int i = 0; i < odd_count; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}
