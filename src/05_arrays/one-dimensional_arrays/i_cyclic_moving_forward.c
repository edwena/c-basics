#include <stdio.h>

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

void move_forward(int *array, int elements_num) {
    int the_last = array[elements_num - 1];
    for (int i = 0; i < elements_num; i++) {
        array[elements_num - i] = array[elements_num - i - 1];
    }
    array[0] = the_last;
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
    move_forward(array, elements_num);
    print_array(array, elements_num);
    return 0;
}
