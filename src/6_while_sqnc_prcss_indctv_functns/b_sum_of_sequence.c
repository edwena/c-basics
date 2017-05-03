#include <stdio.h>

int main() {
    int sum = 0;
    while (1) {
        int N;
        scanf("%d", &N);
        if (N == 0) {
            break;
        } else {
            sum += N;
        }
    }
    printf("%d\n", sum);
    return 0;
}

