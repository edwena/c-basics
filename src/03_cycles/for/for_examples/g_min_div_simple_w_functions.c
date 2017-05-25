#include <stdio.h>
#include <math.h>

// Условия задания:
// Найдите самый маленький натуральный делитель числа x, отличный от 1 (2 <= x <= 30000).

int get_min_divider(int x) {
    int root_x = floor(sqrt(x));
    for (int i = 2; i <= root_x; i++) {
        if (x % i == 0) {
            return i;
        }
    }
    return x;
}

int main() {
    int x;
    scanf("%d", &x);
    printf("%d\n", get_min_divider(x));
    return 0;
}
