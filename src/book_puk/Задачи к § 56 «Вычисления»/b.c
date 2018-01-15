#include <stdio.h>
#include <math.h>

float cir_area(float x) {
    return x * x * M_PI;
}

float cir_len(float x) {
    return 2 * M_PI * x;
}

// Условие задания:
// Задача 112146, учебник 11098
// Дается радиус круга
// Посчитать площадь и длину окружности
int main() {
    float x;
    scanf("%f", &x);
    printf("%.3f\n", cir_area(x));
    printf("%.3f\n", cir_len(x));
    return 0;
}
