#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    if (N == 0) {
        printf("0\n");
        return 0;
    }

    int i = 1;
    int the_biggest_i = 1;
    int previous = 0;
    int less = 0;
    int bigger = 0;

    while (1) {
        previous = N;
        scanf("%d", &N);
        if (N == 0) {
            break;
        } else if (N > previous) {
            if (bigger) {
                i++;
            } else {
                i = 2;
                bigger = 1;
                less = 0;
            }
        } else if (N < previous) {
            if (less) {
                i++;
            } else {
                i = 2;
                less = 1;
                bigger = 0;
            }
        } else {
            bigger = 0;
            less = 0;
            i = 1;
        }

        if (i > the_biggest_i) {
            the_biggest_i = i;
        }
    }
    printf("%d\n", the_biggest_i);
    return 0;
}

