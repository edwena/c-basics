#include <stdio.h>

// Условие задания:
// Задача 112147, учебник 11098
// Дается число до 8
// Надо возвести в 10 степень
int main() {
    float x;
    scanf("%f", &x);
    float square = x * x;
    float answer = answer;
    // теперь возвожу в 4 степень
    answer *= answer;
    // теперь в 8
    answer *= answer;
    // теперь 8+2, вот:
    answer *= square;
    printf("%.3f\n", answer);
    return 0;
}