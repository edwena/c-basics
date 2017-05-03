#include <stdio.h>

double countSum(long n) {
    double sum = 0;
    for (long i = 1; i <= n; i++) {
        sum += 1.0 / i / i;
    }
    return sum;
}

void run() {
    long n;
    scanf("%d", &n);
    printf("%f\n", countSum(n));
}

int main() {
    run();
    return 0;
}

