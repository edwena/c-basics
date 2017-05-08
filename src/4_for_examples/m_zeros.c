#include <stdio.h>

// Условия задания:
// Вводится число N, а затем N чисел.
// Подсчитайте и выведите, сколько среди данных N чисел нулей.
int main() {
    int elements_count;
    scanf("%d", &elements_count);

    int zero = 0;
    for (int i = 1; i <= elements_count; i++) {
        int x;
        scanf("%d", &x);
        if (x == 0) {
            zero++;
        }
    }

    printf("%d\n", zero);
    return 0;
}
