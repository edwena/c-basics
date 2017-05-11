#include <stdio.h>
#define MIN_X 0
#define MAX_X 1000

int a, b, c, d, e;

int power(int x, int num) {
    int pow_num = 1;
    for (int i = 1; i <= num; i++) {
        pow_num *= x;
    }
    return pow_num;
}

int function_is_zero(int x);

void run() {
    int count = 0;
    for (int x = MIN_X; x <= MAX_X; x++) {
        if (function_is_zero(x)) {
            count++;
        }
    }
    printf("%d\n", count);
}

int function_is_zero(int x) {
    if (x == e) {
        return 0;
    }
    return a * power(x, 3) + b * power(x, 2) + c * x + d == 0;
}

// Условия задания:
// Вводятся 5 чисел: a, b, c, d и e.
// Найдите все целые решения уравнения ( ax3 + bx2 + cx + d ) / ( x - e ) = 0 на отрезке [0,1000] и выведите их количество.
int main() {
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    run();
    return 0;
}

