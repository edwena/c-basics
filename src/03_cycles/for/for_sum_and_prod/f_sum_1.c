#include <stdio.h>

int main() {
    long n;
    scanf("%d", &n);
    double sum = 0;
    for (long i = 1; i <= n; i++) {
        sum += 1.0 / i/ i;
    }
    printf("%f\n", sum);
    return 0;
}

