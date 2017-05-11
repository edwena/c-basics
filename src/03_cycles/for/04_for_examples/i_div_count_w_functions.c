#include <stdio.h>

int counting(int x) {
    int div_counter = 1;
    int half_x = x / 2;
    for (int i = 1; i <= half_x; i++) {
        if (x % i == 0) {
            div_counter++;
        }
    }
    return div_counter;
}

// Условия задания:
// Подсчитайте количество натуральных делителей числа x (включая 1 и само число; x <= 30000).
int main() {
    int x;
    scanf("%d", &x);
    printf("%d\n", counting(x));
    return 0;
}
