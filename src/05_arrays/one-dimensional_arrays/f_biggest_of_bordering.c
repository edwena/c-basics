#include <stdio.h>

void read_array(int *array, int elements_num) {
    for (int place = 0; place < elements_num; place++) {
        scanf("%d", &array[place]);
    }
}

int count_biggest_nums(int *array, int elements_num) {
    if (elements_num < 3) {
        return 0;
    }

    int counter = 0;
    for (int i = 1; i < elements_num - 1; i++) {
        if (array[i - 1] < array[i] && array[i] > array[i + 1]) {
            counter++;
        }
    }
    return counter;
}

// Условия задания:
// Дан массив, состоящий из целых чисел.
// Напишите программу, которая в данном массиве определит количество элементов,
// у которых два соседних и, при этом, оба соседних элемента меньше данного.
int main() {
    int elements_num;
    scanf("%d", &elements_num);
    int array[elements_num];
    read_array(array, elements_num);
    printf("%d\n", count_biggest_nums(array, elements_num));
    return 0;
}
