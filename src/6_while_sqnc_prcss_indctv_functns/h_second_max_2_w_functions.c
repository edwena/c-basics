#include <stdio.h>

int countSecondMax() {
    int second = 0;
    int first = 1;
    while (1) {
        int N;
        scanf("%d", &N);
        if (N == 0) {
            return second;
        }   else if (N >= first) {
            second = first;
            first = N;
        } else if ((N > second) && (N < first)) {
            second = N;
        } else {
        }
    }
    return 555;
}


int main() {
    printf("%d\n", countSecondMax());
    return 0;
}
