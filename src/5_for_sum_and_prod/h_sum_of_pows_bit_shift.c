#include <stdio.h>
#include <math.h>

int main() {
    long N;
    scanf("%d", &N);
    printf("%d\n", (long) (2 << N) - 1);
    return 0;
}

