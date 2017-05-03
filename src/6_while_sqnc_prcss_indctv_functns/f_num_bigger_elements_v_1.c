#include <stdio.h>

int main() {
    int max;
    scanf("%d", &max);
    int bigger = 0;
    int N;
    while ((N != 0) && (max != 0)) {
        scanf("%d", &N);
        if (N > max) {
            max = N;
            bigger++;
        } else {
            max = N;
        }
    }
    printf("%d\n", bigger);
    return 0;
}

