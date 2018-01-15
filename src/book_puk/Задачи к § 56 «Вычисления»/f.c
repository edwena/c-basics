#include <stdio.h>
#include <math.h>

// Условие задания:
// Задача 112150, учебник 11098
// Напишите программу, которая вводит два вещественных числа, x и y, и вычисляет значение x^y.
int main() {
    float x, y;
    scanf("%f%f", &x, &y);
    printf("%.3f\n", powf(x, y));
    return 0;
}
