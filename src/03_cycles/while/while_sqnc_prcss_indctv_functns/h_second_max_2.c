#include <stdio.h>

int main() {
    int second = 0;
    int first = 1;
    while (1) {
        int N;
        scanf("%d", &N);
        if (N == 0) {
            break;
        }   else if (N >= first) {
            second = first;
            first = N;
        } else if ((N > second) && (N < first)) {
            second = N;
        } else {
        }
    }
    printf("%d\n", second);
    return 0;
}

