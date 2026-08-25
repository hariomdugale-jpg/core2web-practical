#include <stdio.h>

int main() {
    int n;
    
    printf("Enter size :\n");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }
    
    int arr[n];
    long long even_squares_sum = 0;
    long long odd_squares_sum = 0;
    
    printf("Enter Array elements :\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even_squares_sum += (long long)arr[i] * arr[i];
        } else {
            odd_squares_sum += (long long)arr[i] * arr[i];
        }
    }
    
    long long difference = even_squares_sum - odd_squares_sum;
    printf("Difference: \"%lld\n", difference);
    
    return 0;
}
