#include <stdio.h>
#define MIN_X 0
#define MAX_X 1000

int a, b, c, d;

int power(int x, int num) {
    int pow_num = 1;
    for (int i = 1; i <= num; i++) {
        pow_num *= x;
    }
    return pow_num;
}

void run() {
    for (int x = MAX_X; x >= MIN_X; x--) {
        if (function(x) == 0) {
            printf("%d ", x);
        }
    }
}

int function(int x) {
    return a * power(x, 3) + b * power(x, 2) + c * x + d;
}

// Условия задания:
// Вводятся 4 числа: a, b, c и d.
// Найдите все целые решения уравнения ax3 + bx2 + cx + d = 0 на отрезке [0,1000] и выведите их в порядке убывания.
// Если на данном отрезке нет ни одного решения, то ничего выводить не нужно.
int main() {
    scanf("%d %d %d %d", &a, &b, &c, &d);
    run(a, b, c, d);
    printf("\n");
    return 0;
}

