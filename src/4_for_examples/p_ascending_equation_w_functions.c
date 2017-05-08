#include <stdio.h>

int power(int x, int num) {
    int pow_num = x;
    for (int i = 1; i < num; i++) {
        pow_num *= x;
    }
    return pow_num;
}

// Условия задания:
// Вводятся 4 числа: a, b, c и d.
// Найдите все целые решения уравнения ax3 + bx2 + cx + d = 0 на отрезке [0,1000] и выведите их в порядке возрастания.
// Если на данном отрезке нет ни одного решения, то ничего выводить не нужно.
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    for (int x = 0; x <= 1000; x++) {
        if (a * power(x, 3) + b * power(x, 2) + c * x + d == 0) {
            printf("%d ", x);
        }
    }

    printf("\n");
    return 0;
}

