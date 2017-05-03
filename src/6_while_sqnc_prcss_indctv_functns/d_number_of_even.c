#include <stdio.h>

int main() {
    int i = 0;
    while (1) {
        int N;
        scanf("%d", &N);
        if (N == 0) {
            break;
        } else if (N % 2 == 0) {
            i++;
        } else {
        }
    }
    printf("%d\n", i);
    return 0;
}

