#include <stdio.h>

int main() {
    int max = 0;
    while (1) {
        int N;
        scanf("%d", &N);
        if (N == 0) {
            break;
        } else if (N > max) {
            max = N;
        } else {
        }
    }
    printf("%d\n", max);
    return 0;
}
