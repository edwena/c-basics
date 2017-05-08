#include <stdio.h>

// Условия задания:
// Вычислите сумму данных N натуральных чисел.
int main() {
    int elements_count;
    scanf("%d", &elements_count);

    int sum = 0;
    for (int i = 1; i <= elements_count; i++) {
        int x;
        scanf("%d", &x);
        sum += x;
    }

    printf("%d\n", sum);
    return 0;
}
