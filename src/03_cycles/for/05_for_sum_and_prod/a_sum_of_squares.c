#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    int i = 1;
    for (; i <= n; i++) {
        sum += i*i;
    }
    printf("%d\n", sum);
    return 0;
}

