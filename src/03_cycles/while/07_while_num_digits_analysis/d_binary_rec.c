#include <stdio.h>

void conv(int n) {
    while (n != 0) {
        printf("%d", n % 2);
        n /= 2;
    }
}

// Условия задания:
// Дано натуральное число N.
// Выведите его представление в двоичном виде в обратном порядке.
int main() {
    int N;
    scanf("%d", &N);
    conv(N);
    printf("\n");
    return 0;
}

