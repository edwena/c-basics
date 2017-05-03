#include <stdio.h>
#include <math.h>

double power_without_math (int a, double average) {
    double brackets = a - average;
    double power = brackets * brackets;
    return power;
}

int main() {
    int N[1000];
    int i = 0;

    // считываем все циферки
    while (1) {
        scanf("%d", &N[i]);
        if (N[i] == 0) {
            break;
        }
        i++;
    }
    int counter_n = 0;
    counter_n = i;

    // ура!! теперь мы считаем среднее арифметическое
    double average = 0;
    for (i = 0; i < counter_n; i++) {
        average += N[i] * 1.0;
    }
    average /= counter_n;

    // а теперь мы медленно и многоэтапно
    // сделаем стандартное отклонение
    double the_standard_deviation_squared = 0;
    for (i = 0; i < counter_n; i++) {
        the_standard_deviation_squared += power_without_math(N[i], average);
    }
    the_standard_deviation_squared /= (counter_n - 1);

    printf("%f\n", sqrt(the_standard_deviation_squared));
    return 0;
}

