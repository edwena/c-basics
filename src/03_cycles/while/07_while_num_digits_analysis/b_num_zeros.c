#include <stdio.h>

int NumberOfZeroes(int n) {
    int zeros = 0;
    while (n != 0) {
        if (n % 10 == 0) {
            zeros++;
        }
        n /= 10;
    }
    return zeros;
}

// Условия задания:
// Дано натуральное число N.
// Напишите функцию int NumberOfZeroes(int n) (C/C++/Java),
// определяющую количество нулей среди всех цифр числа N.
int main() {
    int N;
    scanf("%d", &N);
    printf("%d\n", NumberOfZeroes(N));
    return 0;
}

