#include <stdio.h>
#include <math.h>

// Условие задания:
// Задача 112149, учебник 11098
// Напишите программу, которая вводит координаты двух точек на числовой оси и выводит расстояние между ними.
int main() {
    float x1, y1, x2, y2;
    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
    printf("%.3f\n", sqrt (powf((x1 - x2), 2) + powf((y1 - y2), 2)));
    return 0;
}
