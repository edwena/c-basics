#include <stdio.h>

int main() {
    int N;
    int i = 0;
    int sum = 0;
    while (1) {
        scanf("%d", &N);
        if (N == 0) {
            break;
        } else {
            sum += N;
            i++;
        }
    }
    double average = sum * 1.0 / i;
    printf("%f\n", average);
    return 0;
}

