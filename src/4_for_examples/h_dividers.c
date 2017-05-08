#include <stdio.h>

// Условия задания:
// Выведите все натуральные делители числа x в порядке возрастания (включая 1 и само число).
int main() {
    int x;
    scanf("%d", &x);

    int half_x = x / 2;
    for (int i = 1; i <= half_x; i++) {
        if (x % i == 0) {
            printf("%d ", i);
        }
    }

    printf("%d\n", x);
    return 0;
}
