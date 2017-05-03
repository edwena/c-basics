#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int less, bigger;
    if (k < n-k) {
        bigger = n-k;
        less = k;
    } else {
        bigger = k;
        less = n-k;
    }
    int difference = 1;
    for (int i = bigger + 1; i <= n; i++) {
        difference *= i;
    }
    int factorial = 1;
    for (int i = 1; i <= less; i++) {
        factorial *= i;
    }
    int total = difference / factorial;
    printf("%d\n", total);
    return 0;
}

