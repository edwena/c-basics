#include <stdio.h>
#define ELEMENTS_COUNT 100

// Условия задания:
// Вычислите сумму данных 100 натуральных чисел.
int main() {
    int sum = 0;

    for (int i = 1; i <= ELEMENTS_COUNT; i++) {
        int x;
        scanf("%d", &x);
        sum += x;
    }

    printf("%d\n", sum);
    return 0;
}
