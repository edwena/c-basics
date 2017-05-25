#include <stdio.h>

int main() {
    int i = 0;
    int the_biggest = 0;
    while (1) {
        int N;
        scanf("%d", &N);
        if (N == 0) {
            break;
        } else if (N > the_biggest) {
            the_biggest = N;
            i = 1;
        } else if (N == the_biggest) {
            i++;
        }
    }
    printf("%d\n", i);
    return 0;
}

