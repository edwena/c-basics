#include <stdio.h>

long second_part(long i) {
    return 2 * i + 1;
}

int main() {
    long n;
    scanf("%d", &n);
    double sum = 1.0;
    double first_part = -1.0;
    for (long i = 1; i <= n; i++) {
        sum += first_part / second_part(i);
        first_part *= -1;
    }
    sum *= 4;
    printf("%f\n", sum);
    return 0;
}

