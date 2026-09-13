#include <stdio.h>
int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int min = a[0], max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
    }
    printf("Minimum Element: %d\nMaximum Element: %d\n", min, max);
    return 0;
}
