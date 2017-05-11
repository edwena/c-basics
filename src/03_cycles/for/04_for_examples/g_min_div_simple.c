#include <stdio.h>
#include <math.h>

// Условия задания:
// Найдите самый маленький натуральный делитель числа x, отличный от 1 (2 <= x <= 30000).
int main() {
    int x;
    scanf("%d", &x);

    int i = 2;
    for(; x % i != 0; i++);
    printf("%d\n", i);

    return 0;
}
