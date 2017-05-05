#include <stdio.h>

// Условие задания:
// Выведите все числа на отрезке от a до b, дающие остаток c при делении на d
// Если таких чисел не существует, то ничего выводить не нужно
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (d == 0 || c >= d) {
        return 0;
    }

    int i = a / d * d + c;
    if (i < a) {
        i += d;
    }

    for(; i <= b; i += d) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
