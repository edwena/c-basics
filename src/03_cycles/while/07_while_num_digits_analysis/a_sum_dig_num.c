#include <stdio.h>

int SumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Условия задания:
// Дано натуральное число N.
// Напишите функцию int SumOfDigits (int n) (C/C++), вычисляющую сумму цифр числа N.
int main() {
    int N;
    scanf("%d", &N);
    printf("%d\n", SumOfDigits(N));
    return 0;
}

