#include <stdio.h>

int main() {
    float a;
    int n;
    scanf("%f %d", &a, &n);
    float sum = 1;
    float power = 1;
    for (int i = 1; i <= n; i++) {
        power *= a;
        sum += power;
    }
    printf("%f\n", sum);
    return 0;
}

