#include <stdio.h>

int main() {
    int the_biggest_i = 0;
    int previous_N = 0;
    int i = 0;
    while (1) {
        int N;
        scanf("%d", &N);
        if (N == 0) {
            break;
        } else if (N == previous_N) {
            i++;
        } else {
            i = 1;
        }
        previous_N = N;
        if (i > the_biggest_i) {
            the_biggest_i = i;
        }
    }
    printf("%d\n", the_biggest_i);
    return 0;
}

