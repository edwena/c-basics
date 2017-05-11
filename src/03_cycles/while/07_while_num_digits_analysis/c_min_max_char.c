#include <stdio.h>

int MinDigit(int n) {
    int residual = 0;
    int min_residual = 9;
    while (n != 0) {
        residual = n % 10;
        if (residual < min_residual) {
            min_residual = residual;
        }
        n /= 10;
    }
    return min_residual;
}

int MaxDigit(int n) {
    int residual = 0;
    int max_residual = 0;
    while (n != 0) {
        residual = n % 10;
        if (residual > max_residual) {
            max_residual = residual;
        }
        n /= 10;
    }
    return max_residual;
}

// Условия задания:
// Дано натуральное число N.
// Дано натуральное число N. Напишите функцию int MinDigit (int n),
// определяющую наименьшую и наибольшую цифры данного числа.
int main() {
    int N;
    scanf("%d", &N);
    printf("%d ", MinDigit(N));
    printf("%d\n", MaxDigit(N));
    return 0;
}

