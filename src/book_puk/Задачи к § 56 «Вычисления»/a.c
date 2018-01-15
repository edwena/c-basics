#include <stdio.h>

void print_dir_av(int x, int y, int z) {
    printf("(%d+%d+%d)/3=%.3f\n", x, y, z, (float)(x + y + z) / 3);
}

void print_prod(int x, int y, int z) {
    printf("%d*%d*%d=%d\n", x, y, z, x*y*z);
}

void print_sum(int x, int y, int z) {
    printf("%d+%d+%d=%d\n", x, y, z, x+y+z);
}


// Условие задания:
// Задача 112154, учебник 11098
// Вывести сумму, произведение и среднее арифметическое
int main() {
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    print_sum(x, y, z);
    print_prod(x, y, z);
    print_dir_av(x, y, z);
    return 0;
}
