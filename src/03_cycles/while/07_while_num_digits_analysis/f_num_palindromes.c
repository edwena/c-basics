#include <stdio.h>

int reverse_num(int n) {
    int rev = 0;
    while (n != 0) {
        rev *= 10;
        rev += n % 10;
        n /= 10;
    }
    return rev;
}

int palindromes(int input_num) {
    int i = 0;
    for (int current_num = 1; current_num <= input_num; current_num++) {
        if (reverse_num(current_num) == current_num) {
            i++;
        }
    }
    return i;
}

// Условия задания:
// Назовем число палиндромом, если оно не меняется при перестановке его цифр в обратном порядке.
// Напишите программу, которая по заданному числу K выводит количество натуральных палиндромов, не превосходящих K.
int main() {
    int K;
    scanf("%d", &K);
    printf("%d\n", palindromes(K));
    return 0;
}
