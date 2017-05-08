#include <stdio.h>

// Условия задания:
// Подсчитайте, сколько среди данных N чисел нулей, положительных чисел, отрицательных чисел.
// Вводится число N, а затем N чисел.
// Необходимо вывести сначала число нулей, затем число положительных и отрицательных чисел.
int main() {
    int elements_count;
    scanf("%d", &elements_count);

    int zero = 0;
    int plus = 0;
    int minus = 0;
    for (int i = 1; i <= elements_count; i++) {
        int x;
        scanf("%d", &x);
        if (x > 0) {
            plus++;
        } else if (x < 0) {
            minus++;
        } else {
            zero++;
        }
    }

    printf("%d %d %d\n", zero, plus, minus);
    return 0;
}
