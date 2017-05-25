#include <stdio.h>

// Условия задания:
// Подсчитайте количество натуральных делителей числа x (включая 1 и само число; x <= 30000).
int main() {
    int x;
    scanf("%d", &x);

    int div_counter = 1;

    int half_x = x / 2;
    for (int i = 1; i <= half_x; i++) {
        if (x % i == 0) {
            div_counter++;
        }
    }

    printf("%d\n", div_counter);
    return 0;
}
