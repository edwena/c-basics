#include <stdio.h>

int main() {
    int sum = 0;
    int last_N = 0;
    int N = 1;
    do {
        last_N = N;
        scanf("%d", &N);
        sum += N;
    } while ((N != 0) || (last_N != 0));
    printf("%d\n", sum);
    return 0;
}

