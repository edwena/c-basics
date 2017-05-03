#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    if (N < 8) {
        float sum = 1;
        int factorial = 1;
        for (int i = 1; i <= N; i++) {
            factorial *= i;
            sum += 1.0 / factorial;
        }
    printf("%.5f\n", sum);
    } else {
        printf("2.71828\n");
    }
    return 0;
}

