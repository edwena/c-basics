#include <stdio.h>

float countSum(int N) {
    float sum = 1;
    if (N < 8) {
        int factorial = 1;
        for (int i = 1; i <= N; i++) {
            factorial *= i;
            sum += 1.0 / factorial;
        }
    } else {
        sum = 2.71828;
    }
    return sum;
}

int main() {
    int N;
    scanf("%d", &N);
    printf("%.5f\n", countSum(N));
    return 0;
}

