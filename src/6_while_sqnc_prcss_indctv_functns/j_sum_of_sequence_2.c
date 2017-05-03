#include <stdio.h>

int main() {
    int sum = 0;
    int last_N = 1;
    while (1) {
        int N;
        scanf("%d", &N);
        if ((last_N == 0) && (N == 0)) {
            break;
        } else {
            last_N = N;
            sum += N;
        }
    }
    printf("%d\n", sum);
    return 0;
}

