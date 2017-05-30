#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void read_array(int *array, int elements_num) {
    for (int place = 0; place < elements_num; place++) {
        scanf("%d", &array[place]);
    }
}

void print_array(int *array, int elements_num) {
    for (int place = 0; place < elements_num; place++) {
        printf("%d ", array[place]);
    }
    printf("\n");
}

void reverse_two_next_el(int *array, int elements_num) {
    for (int i = 1; i < elements_num; i += 2) {
        swap(&array[i - 1], &array[i]);
    }
}

// Условия задания:
// Напишите программу, которая переставляет соседние элементы массива
// (1-й элемент поменять с 2-м, 3-й с 4-м и т.д. Если элементов нечетное число,
// то последний элемент остается на своем месте).
int main() {
    int elements_num;
    scanf("%d", &elements_num);
    int array[elements_num];
    read_array(array, elements_num);
    reverse_two_next_el(array, elements_num);
    print_array(array, elements_num);
    return 0;
}
