#include <stdio.h>

int main() {
    int N;
    int i = 0;
    while (1) {
        scanf("%d", &N);
        if (N == 0) {
            break;
        } else {
            i++;
        }
    }
    printf("%d\n", i);
    return 0;
}

