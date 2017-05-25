#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int factorial = 1;
    for (int i = 1; i <= N; i++) {
        factorial *= i;
    }
    printf("%d\n", factorial);
    return 0;
}

