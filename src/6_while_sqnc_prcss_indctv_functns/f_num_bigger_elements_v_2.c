#include <stdio.h>

int main() {
    int max;
    scanf("%d", &max);
    int bigger = 0;
    int N;
    do {
        scanf("%d", &N);
        if (N > max) {
            bigger++;
        } else {
        }
        max = N;
    }
    while ((N != 0) && (max != 0));
    printf("%d\n", bigger);
    return 0;
}
