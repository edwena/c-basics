#include <stdio.h>
#include <stdbool.h>

void read_array(int *array, int elements_num) {
    for (int place = 0; place < elements_num; place++) {
        scanf("%d", &array[place]);
    }
}

bool is_two_same_sign(int *array, int elements_num) {
    int previous_num = array[0];

    for (int i = 1; i < elements_num; i++) {
        if ((previous_num > 0 && array[i] > 0) ||
            (previous_num < 0 && array[i] < 0)) {
            return true;
        }
        previous_num = array[i];
    }
    return false;
}

// Условия задания:
// Дан массив, состоящий из целых чисел.
// Напишите программу, которая определяет, есть ли в массиве пара соседних элементов с одинаковыми знаками.
int main() {
    int elements_num;
    scanf("%d", &elements_num);
    int array[elements_num];
    read_array(array, elements_num);
    printf(is_two_same_sign(array, elements_num) ? "YES\n" : "NO\n");
    return 0;
}
