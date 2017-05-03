#include <stdio.h>

long second_part(long i) {
    long divider = 2 * i + 1;
    return divider;
}

int main() {
    long n;
    scanf("%d", &n);
    double sum = 1.0;
    double first_part;
    for (long i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                first_part = 1.0;
                sum += first_part / second_part(i);

            } else {
                first_part = -1.0;
                sum += first_part / second_part(i);
            }
    }
    printf("%f\n", 4 * sum);
    return 0;
}
