#include <stdio.h>

// Условия задания:
// Дан массив, состоящий из целых чисел.
// Напишите программу, которая подсчитывает количество положительных чисел среди элементов массива.
int main() {
    int elements_num;
    scanf("%d", &elements_num);
    int array[elements_num];

    for (int place = 0; place < elements_num; place++) {
        scanf("%d", &array[place]);
    }

    int counter_for_positive_num = 0;
    for (int i = 0; i < elements_num; i++) {
        if (array[i] > 0) {
            counter_for_positive_num++;
        }
    }

    printf("%d\n", counter_for_positive_num);

    return 0;
}
